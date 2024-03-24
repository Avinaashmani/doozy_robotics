#!/usr/bin/env python3

import rclpy
import tf2_ros
import math
from rclpy.node import Node
from rclpy.clock import Clock 
from math import radians, copysign, sqrt, pow, pi, atan2
from rclpy.qos import QoSHistoryPolicy, QoSProfile, QoSReliabilityPolicy
from std_msgs.msg import String, Bool
from geometry_msgs.msg import PoseStamped, Twist
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult

class RobotController(Node):
    def __init__(self):
        super().__init__('robot_controller')
        self.navigator = BasicNavigator()

        self.initial_pose = PoseStamped()
        self.qos_profile = QoSProfile(
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=1
        )
        
        self.pallet_id_pub = self.create_publisher(String, topic='/pallet_idx', qos_profile=self.qos_profile)
        self.goal_reached_pub =  self.create_publisher(Bool, topic='/reached_point', qos_profile=10)

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', qos_profile=10)
        #self.timer = self.create_timer(1.0, self.print_positions)
        self.now = Clock().now()

        self.docked_flag = False
        self.cmd_vel = Twist()

        self.kp_distance = 1
        self.ki_distance = 0.01
        self.kd_distance = 0.5

        self.kp_angle = 1
        self.ki_angle = 0.03
        self.kd_angle = 0.05

    def start(self):
        self.initial_pose.header.frame_id = 'map'
        self.initial_pose.header.stamp = self.navigator.get_clock().now().to_msg()
        self.initial_pose.pose.position.x = 1.0
        self.initial_pose.pose.position.y = 2.0
        self.initial_pose.pose.orientation.z = 1.0
        self.initial_pose.pose.orientation.w = 0.0

        self.navigator.lifecycleStartup()

        self.goal_poses = [
            PoseStamped(),
            PoseStamped(),
            PoseStamped(),
        ]

        # Setting up goal poses
        for i, pose in enumerate(self.goal_poses):
            pose.header.frame_id = 'map'
            pose.header.stamp = self.navigator.get_clock().now().to_msg()
            pose.pose.position.x = [-0.00800, 0.28, 0.0][i]
            pose.pose.position.y = [2.0, 1.26, 0.0][i]
            pose.pose.orientation.z = [-0.70, 0.993132, 0.0][i]
            pose.pose.orientation.w = [0.70, 0.117004, 0.0][i]

        self.current_goal_index = 0
        self.navigator.goToPose(self.goal_poses[self.current_goal_index])

        while True:
            user_input = input("Enter the next goal ID (0, 1, 2, 3) or 'exit' to end: ")
            if user_input == 'exit':
                break
            try:
                goal_id = int(user_input)
                if goal_id < 1 or goal_id > len(self.goal_poses):
                    print("Invalid goal ID. Please enter a number between 1 and", len(self.goal_poses))
                    continue
                self.current_goal_index = goal_id - 1
                self.navigator.goToPose(self.goal_poses[self.current_goal_index])
               
                if self.navigator.getResult() is True:
                    self.dock_to_dolly()

            except ValueError:
                print("Invalid input. Please enter a valid goal ID or 'exit'.")

        result = self.navigator.getResult()
        if result == TaskResult.SUCCEEDED:
            print('Goal succeeded!')
        elif result == TaskResult.CANCELED:
            print('Goal was canceled!')
        elif result == TaskResult.FAILED:
            print('Goal failed!')
        else:
            print('Goal has an invalid return status!')

        rclpy.shutdown()
    
    # def dock_to_dolly(self):

    #     prev_dist = 0.0
    #     total_distance = 0.0

    #     total_angle = 0.0
    #     previous_angle = 0.0
        
    #     try:
    #         robot_transform = self.tf_buffer.lookup_transform("odom", "base_link", rclpy.time.Time())
    #         dolly_transform = self.tf_buffer.lookup_transform("odom", "dolly_01", rclpy.time.Time())

    #         # robot_x = robot_transform.transform.translation.x
    #         # robot_y = robot_transform.transform.translation.y

    #         # dolly_x = dolly_transform.transform.translation.x
    #         # dolly_y = dolly_transform.transform.translation.y
    #         # print("Here 1")
    #         # self.get_logger().info("Robot position (x, y): {:.2f}, {:.2f}".format(robot_x, robot_y))
    #         # self.get_logger().info("Dolly position (x, y): {:.2f}, {:.2f}".format(dolly_x, dolly_y))

    #         robot_x = robot_transform.transform.translation.x
    #         robot_y = robot_transform.transform.translation.y
    #         robot_angle = self.euler_from_quaternion(robot_transform.transform.rotation.x, robot_transform.transform.rotation.y,
    #                                                  robot_transform.transform.rotation.z, robot_transform.transform.rotation.w)
            
    #         dolly_x = dolly_transform.transform.translation.x 
    #         dolly_y = dolly_transform.transform.translation.y
    #         dolly_angle = self.euler_from_quaternion(dolly_transform.transform.rotation.x, dolly_transform.transform.rotation.y,
    #                                                  dolly_transform.transform.rotation.z, dolly_transform.transform.rotation.w)
        
    #     except tf2_ros.ExtrapolationException as e:
    #         try:
    #             robot_transform = self.tf_buffer.lookup_transform("map", "base_link")
    #             dolly_transform = self.tf_buffer.lookup_transform("map", "dolly_01")

    #         except tf2_ros.LookupException as e:
    #             self.get_logger().warn("Failed to lookup transform: {0}".format(str(e)))
                
    #     except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
    #         self.get_logger().warn("Failed to lookup transform: {0}".format(str(e)))      
        
    #     try:
    #         last_rotation = 0
    #         linear_speed = 1 
    #         angular_speed = 1

    #         dolly_distance = sqrt(pow((dolly_x - robot_x), 2) + pow ((dolly_y - robot_y), 2))
    #         distance = dolly_distance

    #         while distance > 0.05:

    #             path_angle = atan2((dolly_y - robot_y), (dolly_x - robot_x))

    #         if path_angle < -pi/4 or path_angle > pi/4:
    #             if dolly_y < 0 and robot_y < dolly_y:
    #                 path_angle = -2*pi + path_angle
    #             elif dolly_y >= 0 and robot_y > dolly_y:
    #                 path_angle = 2*pi + path_angle
    #         if last_rotation > pi-0.1 and rotation <= 0:
    #             rotation = 2*pi + rotation
    #         elif last_rotation < -pi+0.1 and rotation > 0:
    #             rotation = -2*pi + rotation

    #         self.cmd_vel.angular.z = angular_speed * path_angle-rotation
    #         self.cmd_vel.linear.x = min(linear_speed * distance, 0.1)


    #         if self.cmd_vel.angular.z > 0:
    #             self.cmd_vel.angular.z = min(self.cmd_vel.angular.z, 1.5)
    #         else:
    #             self.cmd_vel.angular.z = max(self.cmd_vel.angular.z, -1.5)
            
    #         last_rotation = rotation
    #         self.cmd_pub.publish(self.cmd_vel)
    #         self.get_logger().info("Docking Completed ...")

    #         return True

    #     except Exception as e:
    #         self.get_logger(f"Docking EXCEPTIONS {e}")


    def euler_from_quaternion(x, y, z, w):

        t0 = +2.0 * (w * x + y * z)
        t1 = +1.0 - 2.0 * (x * x + y * y)
        roll_x = math.atan2(t0, t1)
     
        t2 = +2.0 * (w * y - z * x)
        t2 = +1.0 if t2 > +1.0 else t2
        t2 = -1.0 if t2 < -1.0 else t2
        pitch_y = math.asin(t2)
     
        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        yaw_z = math.atan2(t3, t4)
     
        return  yaw_z 

def main():
    rclpy.init()
    robot_controller = RobotController()
    robot_controller.start()

if __name__ == '__main__':
    main()