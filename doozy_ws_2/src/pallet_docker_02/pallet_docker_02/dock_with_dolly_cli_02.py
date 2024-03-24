import rclpy
import math
import numpy as np
from math import radians, copysign, sqrt, pow, pi, atan2
from rclpy.node import Node
from rclpy.time import Time
from rclpy.duration import Duration
import tf2_ros
from geometry_msgs.msg import TransformStamped, PoseStamped, Twist
from std_msgs.msg import String, Bool, Int16

class DollyDocker(Node):

    def __init__(self):
        super().__init__("dolly_docker")

        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.speed = Twist()

        self.move_tug = Twist()
        self.dolly_frame = "dolly_01"
        self.tb3_frame = "base_link"
        self.base_frame = "map"

        self.reached_goal = False

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', qos_profile=10)
        self.create_timer(0.1, self.tf_callback)

    def tf_callback(self):

        try:
        
            tb3_transform = self.tf_buffer.lookup_transform(self.base_frame, self.tb3_frame, Time())
            dolly_transform = self.tf_buffer.lookup_transform(self.base_frame, self.dolly_frame, Time())

            self.update_transforms(tb3_transform, dolly_transform)

            distance = sqrt(pow(self.dolly_trans_x - self.tb3_trans_x, 2) + pow(self.dolly_trans_y - self.tb3_trans_y, 2))
            angle_difference = self.dolly_angle_z - self.tb3_angle_z
            distance_error = atan2(self.dolly_trans_y - self.tb3_trans_y, self.dolly_trans_x - self.tb3_trans_x)
            

            #self.get_logger().info(f"Distance Error {distance_error}") 

            right_max_orient = np.rad2deg(pi/3)
            #self.get_logger().info(f"Right Quadrent {right_max_orient}")

            left_max_orient = np.rad2deg(2*pi/3)
            #self.get_logger().info(f"Left Quadrent {left_max_orient}")

            angle_abs_error = math.fabs(angle_difference)
            if distance > 0.5:

                self.get_logger().info(f"Distance {distance}")
                self.get_logger().info(f"Angle Difference {angle_difference}")

                if angle_abs_error > 0.2:
     
                    if angle_abs_error > 0.04 and angle_abs_error < 6.9:

                        self.move_tug.angular.z = -0.2
                
                    elif math.fabs(angle_difference) < 0.04 :
                        self.move_tug.angular.z = 0.2
                
                    self.cmd_pub.publish(self.move_tug)
                else:
                    self.move_tug.angular.z = 0.0
                    self.cmd_pub.publish(self.move_tug) 
                
                self.move_tug.linear.x = -0.05
                self.cmd_pub.publish(self.move_tug)
            else:

                self.get_logger().info("Docking Completed....")
                self.move_tug.linear.x = 0.0
                self.move_tug.angular.z = 0.0
                self.cmd_pub.publish(self.move_tug)

                
            
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
            self.get_logger().warn("LookupException: {0}".format(str(e)))

    def update_transforms(self, tb3_transform, dolly_transform):
        self.tb3_trans_x = tb3_transform.transform.translation.x
        self.tb3_trans_y = tb3_transform.transform.translation.y
        self.tb3_rot_x = tb3_transform.transform.rotation.x
        self.tb3_rot_y = tb3_transform.transform.rotation.y
        self.tb3_rot_z = tb3_transform.transform.rotation.z
        self.tb3_rot_w = tb3_transform.transform.rotation.w

        self.dolly_trans_x = dolly_transform.transform.translation.x
        self.dolly_trans_y = dolly_transform.transform.translation.y
        self.dolly_rot_x = dolly_transform.transform.rotation.x
        self.dolly_rot_y = dolly_transform.transform.rotation.y
        self.dolly_rot_z = dolly_transform.transform.rotation.z
        self.dolly_rot_w = dolly_transform.transform.rotation.w

        self.tb3_angle_z = self.euler_from_quaternion(self.tb3_rot_x, self.tb3_rot_y,
                                                      self.tb3_rot_z, self.tb3_rot_w)

        self.dolly_angle_z = self.euler_from_quaternion(self.dolly_rot_x, self.dolly_rot_y,
                                                        self.dolly_rot_z, self.dolly_rot_w)

    def euler_from_quaternion(self, x, y, z, w):
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

        return yaw_z


def main():
    rclpy.init()
    dd = DollyDocker()
    rclpy.spin(dd)
    dd.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
