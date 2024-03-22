// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from apriltag_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "apriltag_msgs/msg/detail/april_tag_detection_array__rosidl_typesupport_introspection_c.h"
#include "apriltag_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "apriltag_msgs/msg/detail/april_tag_detection_array__functions.h"
#include "apriltag_msgs/msg/detail/april_tag_detection_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "apriltag_msgs/msg/april_tag_detection.h"
// Member `detections`
#include "apriltag_msgs/msg/detail/april_tag_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  apriltag_msgs__msg__AprilTagDetectionArray__init(message_memory);
}

void AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_fini_function(void * message_memory)
{
  apriltag_msgs__msg__AprilTagDetectionArray__fini(message_memory);
}

size_t AprilTagDetectionArray__rosidl_typesupport_introspection_c__size_function__AprilTagDetection__detections(
  const void * untyped_member)
{
  const apriltag_msgs__msg__AprilTagDetection__Sequence * member =
    (const apriltag_msgs__msg__AprilTagDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * AprilTagDetectionArray__rosidl_typesupport_introspection_c__get_const_function__AprilTagDetection__detections(
  const void * untyped_member, size_t index)
{
  const apriltag_msgs__msg__AprilTagDetection__Sequence * member =
    (const apriltag_msgs__msg__AprilTagDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AprilTagDetectionArray__rosidl_typesupport_introspection_c__get_function__AprilTagDetection__detections(
  void * untyped_member, size_t index)
{
  apriltag_msgs__msg__AprilTagDetection__Sequence * member =
    (apriltag_msgs__msg__AprilTagDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AprilTagDetectionArray__rosidl_typesupport_introspection_c__resize_function__AprilTagDetection__detections(
  void * untyped_member, size_t size)
{
  apriltag_msgs__msg__AprilTagDetection__Sequence * member =
    (apriltag_msgs__msg__AprilTagDetection__Sequence *)(untyped_member);
  apriltag_msgs__msg__AprilTagDetection__Sequence__fini(member);
  return apriltag_msgs__msg__AprilTagDetection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_msgs__msg__AprilTagDetectionArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_msgs__msg__AprilTagDetectionArray, detections),  // bytes offset in struct
    NULL,  // default value
    AprilTagDetectionArray__rosidl_typesupport_introspection_c__size_function__AprilTagDetection__detections,  // size() function pointer
    AprilTagDetectionArray__rosidl_typesupport_introspection_c__get_const_function__AprilTagDetection__detections,  // get_const(index) function pointer
    AprilTagDetectionArray__rosidl_typesupport_introspection_c__get_function__AprilTagDetection__detections,  // get(index) function pointer
    AprilTagDetectionArray__rosidl_typesupport_introspection_c__resize_function__AprilTagDetection__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_members = {
  "apriltag_msgs__msg",  // message namespace
  "AprilTagDetectionArray",  // message name
  2,  // number of fields
  sizeof(apriltag_msgs__msg__AprilTagDetectionArray),
  AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_member_array,  // message members
  AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_type_support_handle = {
  0,
  &AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_msgs, msg, AprilTagDetectionArray)() {
  AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_msgs, msg, AprilTagDetection)();
  if (!AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_type_support_handle.typesupport_identifier) {
    AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AprilTagDetectionArray__rosidl_typesupport_introspection_c__AprilTagDetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
