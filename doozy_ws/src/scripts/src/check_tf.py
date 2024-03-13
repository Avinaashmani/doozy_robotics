#!/usr/bin/env python3 

from tf.transformations import euler_from_quaternion
import tf 
import rospy

def main():
    rospy.init_node("tag_check")
    tag_tf = tf.TransformListener()
    
    try:
    
        tag_tf.waitForTransform('/odom', '/tag_0', rospy.Time(), rospy.Duration(1))
        (trans, rot) = tag_tf.lookupTransform('/odom', '/tag_0', rospy.Time(0))
        
        print(trans[0])
        print(trans[1])
        print(trans[2])
    
    except (tf.ConnectivityException, tf.Exception, tf.LookupException):
    
        rospy.logwarn("tf exception")

if __name__=='__main__':
    while not rospy.is_shutdown():
        main()
        rospy.spin()