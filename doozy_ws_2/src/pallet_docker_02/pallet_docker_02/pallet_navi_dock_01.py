#!/usr/bin/env python3 

import rclpy

import numpy as np
import math
from rclpy.node import Node
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped

class PalletTF(Node):

    def __init__(self):
        
        super().__init__('pallet_tf_publisher')

        self.tf_broadcaster = TransformBroadcaster(self)
        self.base_frame = 'map'
        
    
    def publish_tf(self):

        tf1 = TransformStamped()
        tf1.header.frame_id = self.base_frame
        tf1.child_frame_id = 'pallet_1'
        tf1.header.stamp = self.get_clock().now().to_msg()
        tf1.transform.translation.x = 1.27
        tf1.transform.translation.y = 1.58
        tf1.transform.rotation.z = -0.80
        tf1.transform.rotation.w = 0.6
        self.tf_broadcaster.sendTransform(tf1)
        
        tf2 = TransformStamped()
        tf2.header.frame_id = self.base_frame
        tf2.child_frame_id = 'pallet_2'
        tf2.header.stamp = self.get_clock().now().to_msg()
        tf2.transform.translation.x = 2.55
        tf2.transform.translation.y = 1.01 
        tf2.transform.rotation.z = 0.99
        tf2.transform.rotation.w = 0.00079
        self.tf_broadcaster.sendTransform(tf2)

        tf3 = TransformStamped()
        tf3.header.frame_id = self.base_frame
        tf3.child_frame_id = 'pallet_3'
        tf3.header.stamp = self.get_clock().now().to_msg()
        tf3.transform.translation.x = 3.00
        tf3.transform.translation.y = 1.00
        tf3.transform.rotation.z = 0.70
        tf3.transform.rotation.w = -0.70
        self.tf_broadcaster.sendTransform(tf3)

        tf4 = TransformStamped()
        tf4.header.frame_id = self.base_frame
        tf4.child_frame_id = 'pallet_4'
        tf4.header.stamp = self.get_clock().now().to_msg()
        tf4.transform.translation.x = 3.00
        tf4.transform.translation.y = -0.016
        tf4.transform.rotation.z = 0.66
        tf4.transform.rotation.w = -0.70
        self.tf_broadcaster.sendTransform(tf4)

        tf5 = TransformStamped()
        tf5.header.frame_id = self.base_frame
        tf5.child_frame_id = 'pallet_5'
        tf5.header.stamp = self.get_clock().now().to_msg()
        tf5.transform.translation.x = 2.57
        tf5.transform.translation.y = -0.13
        tf5.transform.rotation.z = 0.66
        tf5.transform.rotation.w = 0.70
        self.tf_broadcaster.sendTransform(tf5)
        
        tf6 = TransformStamped()
        tf6.header.frame_id = self.base_frame
        tf6.child_frame_id = 'pallet_6'
        tf6.header.stamp = self.get_clock().now().to_msg()
        tf6.transform.translation.x = 1.37
        tf6.transform.translation.y = -0.025
        tf6.transform.rotation.z = 0.66
        tf6.transform.rotation.w = 0.70
        self.tf_broadcaster.sendTransform(tf6)

def main():

    rclpy.init()
    tf_pub = PalletTF()
    
    while rclpy.ok():
        tf_pub.publish_tf()
    rclpy.shutdown()

if __name__=='__main__':
    main()


