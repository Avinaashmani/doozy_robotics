#!/usr/bin/env python3 

import rospy
import actionlib
import tf
import numpy as np
from std_msgs.msg import String
from geometry_msgs.msg import Twist, Point, Quaternion
from dolly_action_msgs.msg import amrDockAction, amrDockResult
from math import radians, copysign, sqrt, pow, pi, atan2
from tf.transformations import euler_from_quaternion


class DockToDolly:

    def __init__(self):

        rospy.init_node('dolly_docking')
        rospy.loginfo ("docking to dolly node has begun :))")
        
        self.cmd_velocity_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=10.0)
        self.docking_server = actionlib.SimpleActionServer('amr_docking_srv', amrDockAction, self.align_robot, False)
        self.docking_server.start()

    def align_robot(self, goal):
        rospy.loginfo("Received alignment request.")
        cmd_vel = Twist()

if __name__ == '__main__':
    try:
        dock_server = DockToDolly()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass
