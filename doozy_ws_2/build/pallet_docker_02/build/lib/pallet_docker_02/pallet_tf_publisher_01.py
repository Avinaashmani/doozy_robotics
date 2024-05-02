#!/usr/bin/env python3 

import rclpy

import numpy as np
import math
from rclpy.node import Node
from rclpy.time import Time
from tf2_ros import TransformBroadcaster
from nav2_simple_commander.robot_navigator import BasicNavigator
from geometry_msgs.msg import TransformStamped
from sick_visionary_t_mini.msg import SickTMini

# from sick_visionary_t_mini.msg import SickTMini

class PalletTF(Node):

    def __init__(self):
        
        super().__init__('pallet_tf_publisher')

        self.tf_broadcaster = TransformBroadcaster(self)

        self.rightPocket_x = 0.0
        self.rightPocket_y = 0.0
        self.rightPocket_z = 0.0

        self.leftPocket_x = 0.0
        self.leftPocket_y = 0.0
        self.leftPocket_z = 0.0
        
        self.center_x = 0.0
        self.center_y = 0.0
        self.center_z = 0.0

        self.x_point = 0.0
        self.y_point = 0.0
        self.z_point = 0.0

        self.pallet_found = False
        self.pallet_angle = 0.0

        self.dolly_found = False

        self.create_subscription(SickTMini, '/sick_vision_t_mini/one', self.sick_callback, 10)
        # self.create_timer(0.1, self.sick_callback)
        self.base_frame = 'map'
        
    def sick_callback(self, msg ):

        # tf1 = TransformStamped()
        # tf1.header.frame_id = self.base_frame
        # tf1.child_frame_id = 'dolly_01'
        # tf1.header.stamp = Time().to_msg()
        # tf1.transform.translation.x = 1.8147761821746826
        # tf1.transform.translation.y = 1.222383975982666
        # tf1.transform.rotation.z = 1.0 
        # tf1.transform.rotation.w = 0.0
        # self.tf_broadcaster.sendTransform(tf1)
        
        # tf2 = TransformStamped()
        # tf2.header.frame_id = self.base_frame
        # tf2.child_frame_id = 'dolly_02'
        # tf2.header.stamp = Time().to_msg()
        # tf2.transform.translation.x = -1.75910
        # tf2.transform.translation.y = -1.40089
        # tf2.transform.rotation.z = 1.0 
        # tf2.transform.rotation.w = 0.0
        # self.tf_broadcaster.sendTransform(tf2)

        self.rightPocket_x = msg.right_pocket.y
        self.rightPocket_y = msg.right_pocket.x
        # self.rightPocket_z = msg.right_pocket.z

        self.leftPocket_x = msg.left_pocket.z
        self.leftPocket_y = msg.left_pocket.x
        # self.leftPocket_z = msg.left_pocket.z

        self.center_x = msg.center_point.z
        self.center_y = msg.center_point.x
        # self.center_z = msg.center_point.z

        right_pocket = TransformStamped()
        right_pocket.header.frame_id = self.base_frame
        right_pocket.child_frame_id = 'right_hole'
        right_pocket.header.stamp = Time().to_msg()

        right_pocket.transform.translation.x = self.rightPocket_z
        right_pocket.transform.translation.y = self.rightPocket_x

        #sick_tf.transform.translation.z = 0.0
        right_pocket.transform.rotation.z = 0.0
        right_pocket.transform.rotation.w = 1.0

        left_pocket = TransformStamped()
        left_pocket.header.frame_id = self.base_frame
        left_pocket.child_frame_id = 'left_hole'
        left_pocket.header.stamp = Time().to_msg()

        left_pocket.transform.translation.x = self.leftPocket_z
        left_pocket.transform.translation.y = self.leftPocket_x

        center = TransformStamped()
        center.header.frame_id = self.base_frame
        center.child_frame_id = 'center'
        center.header.stamp = Time().to_msg()

        center.transform.translation.x = self.center_z
        center.transform.translation.y = self.center_x

        self.tf_broadcaster.sendTransform(right_pocket)
        self.tf_broadcaster.sendTransform(left_pocket)


        print(msg.point.z)
        print(msg.point.x)

def main():

    rclpy.init()
    tf_pub = PalletTF()
    rclpy.spin(tf_pub)

if __name__=='__main__':
    main()
