#!/usr/bin/env python3
## computes the data from 5 ultrasonic sensors ##

import rospy
import math
from sensor_msgs.msg import Range
from std_msgs.msg import Bool

class UltrasonicSensor:

    def __init__(self):

        rospy.init_node("ultrasonic_pallete_aligner",anonymous=False)
        rospy.loginfo ("Welcome, Fork-Pallete alignment node has begun")
        rospy.loginfo ("All Units are printed in 'millimeters.'")

        self.range_01 = False
        self.range_02 = False
        self.range_03 = False
        self.range_04 = False
        self.range_05 = False
        
        self.value_01 = 0.0
        self.value_02 = 0.0
        self.value_03 = 0.0
        self.value_04 = 0.0
        self.value_05 = 0.0

        self.is_aligned = False

        self.Q_Size = 10.0
        self.rate = 10.0

        rospy.Subscriber('/range_sensor/one', Range, self.call_back_us_1)
        rospy.Subscriber('/range_sensor/two', Range, self.call_back_us_2)
        rospy.Subscriber('/range_sensor/three', Range, self.call_back_us_3)
        rospy.Subscriber('/range_sensor/four', Range, self.call_back_us_4)
        rospy.Subscriber('/range_sensor/five', Range, self.call_back_us_5)
        self.alignment_pub = rospy.Publisher('/fork_alignment', Bool, queue_size=self.Q_Size)


    def compute(self):

        is_aligned = Bool()
     
        print ("-----------")
        print(math.floor(self.value_01))
        print(math.floor(self.value_02))
        print(math.floor(self.value_03))
        print(math.floor(self.value_04))
        print(math.floor(self.value_05))
        print ("-----------")

        self.value_01 = math.floor(self.value_01)
        self.value_02 = math.floor(self.value_02)
        self.value_03 = math.floor(self.value_03)
        self.value_04 = math.floor(self.value_04)
        self.value_05 = math.floor(self.value_05)



        if (self.value_01 > 25.0 and self.value_01 < 100.0):
            self.range_01 = True
        else:
            self.range_01 = False
        
        if (self.value_02 > 25.0 and self.value_02 < 100.0):
            self.range_02 = True
        else:
            self.range_02 = False
        
        if (self.value_03 > 25.0 and self.value_03 < 100.0):
            self.range_03 = True
        else:
            self.range_03 = False
        
        if (self.value_04 > 25.0 and self.value_04 < 100.0):
            self.range_04 = True
        else:
            self.range_04 = False

        if (self.value_05 > 25.0 and self.value_05 < 100.0):
            self.range_05 = True
        else:
            self.range_05 = False

        if (self.range_01 and self.range_02 and self.range_03 and self.range_04 and self.range_05 is True):
            is_aligned = True

        
        self.alignment_pub.publish(is_aligned)
        

    def ros_spin(self):

        r = rospy.Rate(self.rate)
        while not rospy.is_shutdown():
            self.compute()
            r.sleep()
    
    def call_back_us_1 (self, msg):
        
        self.value_01 = msg.range

    def call_back_us_2 (self, msg):

        self.value_02 = msg.range
        
    def call_back_us_3 (self, msg):

        self.value_03 = msg.range
        
    def call_back_us_4 (self, msg):
        
        self.value_04 = msg.range
    
    def call_back_us_5 (self,msg):
        self.value_05 = msg.range


if __name__=='__main__':
    try:
        ultrasonic_checker = UltrasonicSensor()
        ultrasonic_checker.ros_spin()
    except rospy.ROSInternalException:
        pass
