#!/usr/bin/env python3 

import rclpy

import numpy as np
import math
from rclpy.node import Node
from rclpy.time import Time
from tf2_ros import TransformBroadcaster
from nav2_simple_commander.robot_navigator import BasicNavigator
from geometry_msgs.msg import TransformStamped

class PalletTF(Node):

    def __init__(self):
        
        super().__init__('pallet_tf_publisher')

        self.tf_broadcaster = TransformBroadcaster(self)
        
        self.base_frame = 'map'
        
    
    def publish_tf(self):

        tf1 = TransformStamped()
        tf1.header.frame_id = self.base_frame
        tf1.child_frame_id = 'dolly_01'
        tf1.header.stamp = Time().to_msg()
        tf1.transform.translation.x = 1.8147761821746826
        tf1.transform.translation.y = 1.222383975982666
        tf1.transform.rotation.z = 1.0 
        tf1.transform.rotation.w = 0.0
        self.tf_broadcaster.sendTransform(tf1)
        
        tf2 = TransformStamped()
        tf2.header.frame_id = self.base_frame
        tf2.child_frame_id = 'dolly_02'
        tf2.header.stamp = Time().to_msg()
        tf2.transform.translation.x = -1.75910
        tf2.transform.translation.y = -1.40089
        tf2.transform.rotation.z = 1.0 
        tf2.transform.rotation.w = 0.0
        self.tf_broadcaster.sendTransform(tf2)

def main():

    rclpy.init()
    tf_pub = PalletTF()
    
    while rclpy.ok():
        tf_pub.publish_tf()
    rclpy.shutdown()

if __name__=='__main__':
    main()


