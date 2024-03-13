#!/usr/bin/env python3

import rospy
import tf2_ros

from geometry_msgs.msg import TransformStamped, Quaternion
from jsk_recognition_msgs.msg import BoundingBox

def main():
    rospy.init_node('tf_publisher')
    tf_broadcaster = tf2_ros.TransformBroadcaster()

    box_one = BoundingBox()
    box_two = BoundingBox()
    box_three = BoundingBox()

    box_1 = rospy.Publisher('/bounding_box/One', BoundingBox, queue_size=10)
    box_2 = rospy.Publisher('/bounding_box/Two', BoundingBox, queue_size=10)        
    box_3 = rospy.Publisher('/bounding_box/Three', BoundingBox, queue_size=10)

    box_one.pose.position.x = -1.87
    box_one.pose.position.y = -1.50
    box_one.pose.position.z = 0.1
    box_one.dimensions.x = 0.4
    box_one.dimensions.y = 0.2
    box_one.dimensions.z = 0.2

    box_two.pose.position.x = -1.87
    box_two.pose.position.y = 2.44
    box_two.pose.position.z = 0.1
    box_two.dimensions.x = 0.4
    box_two.dimensions.y = 0.2
    box_two.dimensions.z = 0.2

    box_three.pose.position.x = 2.50
    box_three.pose.position.y = -1.41
    box_three.pose.position.z = 0.1
    box_three.dimensions.x = 0.4
    box_three.dimensions.y = 0.2
    box_three.dimensions.z = 0.2

    box_one.header.frame_id ='map'
    box_two.header.frame_id ='map'
    box_three.header.frame_id ='map'    

    while not rospy.is_shutdown():
        try:
            # Publish transform for pallet_01
            t1 = TransformStamped()
            t1.header.stamp = rospy.Time.now()
            t1.header.frame_id = 'map'
            t1.child_frame_id = 'pallet_01'
            t1.transform.translation.x = -1.87
            t1.transform.translation.y = -1.50
            t1.transform.translation.z = 0.2
            t1.transform.rotation = Quaternion(0.0, 0.0, 0.0, 1.0)
            tf_broadcaster.sendTransform(t1)

            # Publish transform for pallet_02
            t2 = TransformStamped()
            t2.header.stamp = rospy.Time.now()
            t2.header.frame_id = 'odom'
            t2.child_frame_id = 'pallet_02'
            t2.transform.translation.x = -1.87
            t2.transform.translation.y = 2.44
            t2.transform.translation.z = 0.1
            t2.transform.rotation = Quaternion(0.0, 0.0, 0.0, 1.0)
            tf_broadcaster.sendTransform(t2)

            # Publish transform for pallet_03
            t3 = TransformStamped()
            t3.header.stamp = rospy.Time.now()
            t3.header.frame_id = 'odom'
            t3.child_frame_id = 'pallet_03'
            t3.transform.translation.x = 2.50
            t3.transform.translation.y = -1.41
            t3.transform.translation.z = 0.1
            t3.transform.rotation = Quaternion(0.0, 0.0, 0.0, 1.0)
            tf_broadcaster.sendTransform(t3)

            box_1.publish(box_one)
            box_2.publish(box_two)
            box_3.publish(box_three)

        except rospy.ROSInterruptException:
            pass

        rospy.Rate(10).sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass
