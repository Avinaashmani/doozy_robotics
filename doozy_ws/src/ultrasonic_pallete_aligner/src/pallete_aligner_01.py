#!/usr/bin/env python3
## computes the data from 5 ultrasonic sensors ##

import rospy
from sensor_msgs.msg import Range
from geometry_msgs.msg import Twist
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

        rospy.Subscriber('/ultrasonic_sensor_01', Twist, self.call_back_us_1)
        rospy.Subscriber('/ultrasonic_sensor_02', Twist, self.call_back_us_2)
        rospy.Subscriber('/ultrasonic_sensor_03', Twist, self.call_back_us_3)
        rospy.Subscriber('/ultrasonic_sensor_04', Twist, self.call_back_us_4)
        rospy.Subscriber('/ultrasonic_sensor_05', Twist, self.call_back_us_5)
        self.alignment_pub = rospy.Publisher('/fork_alignment', Bool, queue_size=self.Q_Size)
    '''
        us_01_pub = rospy.Publisher('/ultrasonic_sensor_01', Range, queue_size=self.Q_Size)
        us_02_pub = rospy.Publisher('/ultrasonic_sensor_02', Range, queue_size=self.Q_Size)
        us_03_pub = rospy.Publisher('/ultrasonic_sensor_03', Range, queue_size=self.Q_Size)
        us_04_pub = rospy.Publisher('/ultrasonic_sensor_04', Range, queue_size=self.Q_Size)
        us_05_pub = rospy.Publisher('/ultrasonic_sensor_05', Range, queue_size=self.Q_Size)
    '''

    def compute(self):
        
        alignment = Bool()

        if (self.range_01 and self.range_02 and self.range_03 and self.range_04 and self.range_05 is True):
            self.is_aligned = True
        else:
            self.is_aligned = False
        alignment.data = self.is_aligned
        self.alignment_pub.publish(alignment)


    def ros_spin(self):

        r = rospy.Rate(self.rate)
        while not rospy.is_shutdown():
            self.compute()
            r.sleep()
    
    def call_back_us_1(self, msg):
        
        self.value_01 = msg.linear.x
        
        if (self.value_01 > 0.10 and self.value_01 <= 0.20):
            self.range_01 = True
        else:
            self.range_01 = False

    def call_back_us_2(self, msg):

        self.value_02 = msg.linear.x

        if (self.value_02 <= 0.80 and self.value_02 > 0.20):
            self.range_02 = True
        else:
            self.range_02 = False
        
    def call_back_us_3(self, msg):

        self.value_03 = msg.linear.x

        if (self.value_03 > 0.10 and self.value_03 <= 0.20):
            self.range_03 = True
        else:
            self.range_03 = False
        
    def call_back_us_4(self, msg):
        
        self.value_04 = msg.linear.x

        if (self.value_04 <= 0.80 and self.value_04 > 0.20):
            self.range_04 = True
        else:
            self.range_04 = False
        
    def call_back_us_5(self, msg):

        self.value_05 = msg.linear.x

        if (self.value_05 > 0.10 and self.value_05 < 0.20):
            self.range_05 = True
        else:
            self.range_05 = False

if __name__=='__main__':
    try:
        ultrasonic_checker = UltrasonicSensor()
        ultrasonic_checker.ros_spin()
    except rospy.ROSInternalException:
        pass