#!/usr/bin/env python3
## computes the data from 5 ultrasonic sensors ##
## 3 second Timer added ##

import rospy
import math
import time
from sensor_msgs.msg import Range
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool

class UltrasonicSensor:

    def __init__(self):
        
        rospy.init_node("ultrasonic_pallete_aligner",anonymous=False)
        rospy.loginfo ("Welcome, Fork-Pallete alignment node has begun")
        rospy.loginfo ("All Units are printed in 'millimeters.'")
        self.Q_Size = 10.0
        self.rate = 10.0

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

        self.final_out = False

        self.is_aligned = False

        # Tuning and Timer Parameters #

        self.tuning_parameter = 1.85714
        self.change_factor = 0.1
        self.timer_duration = 3.0
        
        # Check change in current and previous values variables #

        self.value_01_current = 0.0
        self.value_01_prev = 0.0

        self.value_02_current = 0.0
        self.value_02_prev = 0.0

        self.value_03_current = 0.0
        self.value_03_prev = 0.0

        self.value_04_current = 0.0
        self.value_04_prev = 0.0

        self.value_05_current = 0.0
        self.value_05_prev = 0.0

        rospy.Subscriber('/range_sensor/one', Range, self.call_back_us_1)
        rospy.Subscriber('/range_sensor/two', Range, self.call_back_us_2)
        rospy.Subscriber('/range_sensor/three', Range, self.call_back_us_3)
        rospy.Subscriber('/range_sensor/four', Range, self.call_back_us_4)
        rospy.Subscriber('/range_sensor/five', Range, self.call_back_us_5)
        
        self.alignment_pub = rospy.Publisher('/fork_alignment', Bool, queue_size=self.Q_Size)
        self.move_fork_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=self.Q_Size)

    def filter_out(self, idx_no):
        
        if idx_no == 1:

            if abs(self.value_01_prev - self.value_01_current) > self.change_factor:
                self.value_01 = self.value_01_prev
            else:
                self.value_01 = self.value_01
            return self.value_01 / self.tuning_parameter
        
        elif idx_no == 2:

            if abs(self.value_02_prev - self.value_02_current) > self.change_factor:
                self.value_02 = self.value_02_prev
            else:
                self.value_02 = self.value_02
            return self.value_02 / self.tuning_parameter
        
        elif idx_no == 3:

            if abs(self.value_03_prev - self.value_03_current) > self.change_factor:
                self.value_03 = self.value_03_prev
            else:
                self.value_03 = self.value_03
            return self.value_03 / self.tuning_parameter
        
        elif idx_no == 4:

            if abs(self.value_04_prev - self.value_04_current) > self.change_factor:
                self.value_04 = self.value_04_prev
            else:
                self.value_04 = self.value_04
            return self.value_04 / self.tuning_parameter
        
        elif idx_no == 5:
            if abs(self.value_05_prev - self.value_05_current) > self.change_factor:
                self.value_05 = self.value_05_prev
            else:
                self.value_05 = self.value_05
            return self.value_05 / self.tuning_parameter

    def check_all_sensors(self):
        
        if self.value_01 > 35.0 :
            self.range_01 = True
        else:
            self.range_01 = False    
        
        if self.value_02 < 35.0 and self.value_02 > 30.0:
            self.range_02 = True
        else:
            self.range_02 = False

        if self.value_03 > 35.0:
            self.range_03 = True
        else:
            self.range_03 = False

        #if self.value_05 < 40.0 and self.value_05 > 30.0:
        #    self.range_05 = True
        #else:
        #    self.range_05 = False

        if self.range_01 and self.range_02 and self.range_03 is True:
            return True
        else:
            return False

    def timer_check(self):
        if self.check_all_sensors() is True:
            start_time = time.time()
            print(start_time - time.time())
            while time.time() - start_time < 3:
                if self.check_all_sensors() is True:
                    self.final_out = True                   
                elif self.check_all_sensors() is False:
                    self.final_out = False
                    break
            return self.final_out
    
    def compute(self):

        is_aligned = Bool()
        move_fork=Twist()

        self.value_01_current = self.filter_out(1)
        self.value_02_current = self.filter_out(2)
        self.value_03_current = self.filter_out(3)
        self.value_04_current = self.filter_out(4)
        self.value_05_current = self.filter_out(5)
     
        print ("-----------")
        print(self.value_01)
        print(self.value_02)
        print(self.value_03)
        #print(self.value_04)
        #print(self.value_05)
        print ("-----------")

        print ("-----------")
        print(self.range_01)
        print(self.range_02)
        print(self.range_03)
        #print(self.value_04)
        #print(self.range_05)
        print ("-----------")
        print("is_aligned ---> ", self.final_out)

        if self.timer_check() is True:
            is_aligned = True
            move_fork.linear.x = 0.2
            rospy.loginfo ("Fork is Aligned....")
        else:
            is_aligned = False
            move_fork.linear.x = 0.0
            rospy.loginfo ("Fork is Misaligned....")
        
        self.value_01_prev = self.value_01_current
        self.value_02_prev = self.value_02_current
        self.value_03_prev = self.value_03_current
        self.value_04_prev = self.value_04_current
        self.value_05_prev = self.value_05_current

        self.alignment_pub.publish(is_aligned)
        self.move_fork_pub.publish(move_fork)

    def ros_spin(self):
        r = rospy.Rate(self.rate)
        while not rospy.is_shutdown():
            self.compute()
            r.sleep()
    
    def call_back_us_1 (self, msg):
        
        self.value_01 = math.floor((msg.range) / self.tuning_parameter)

    def call_back_us_2 (self, msg):

        self.value_02 = math.floor((msg.range) / self.tuning_parameter)
        
    def call_back_us_3 (self, msg):

        self.value_03 = math.floor((msg.range) / self.tuning_parameter)
        
    def call_back_us_4 (self, msg):
        
        self.value_04 = (math.floor(msg.range) / self.tuning_parameter)
    
    def call_back_us_5 (self,msg):
        self.value_05 = math.floor((msg.range) / self.tuning_parameter)


if __name__=='__main__':
    try:
        ultrasonic_checker = UltrasonicSensor()
        ultrasonic_checker.ros_spin()
    except rospy.ROSInternalException:
        pass
