// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlebot4_msgs:msg/UserButton.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlebot4_msgs/msg/detail/user_button__rosidl_typesupport_introspection_c.h"
#include "turtlebot4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlebot4_msgs/msg/detail/user_button__functions.h"
#include "turtlebot4_msgs/msg/detail/user_button__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UserButton__rosidl_typesupport_introspection_c__UserButton_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlebot4_msgs__msg__UserButton__init(message_memory);
}

void UserButton__rosidl_typesupport_introspection_c__UserButton_fini_function(void * message_memory)
{
  turtlebot4_msgs__msg__UserButton__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UserButton__rosidl_typesupport_introspection_c__UserButton_message_member_array[1] = {
  {
    "button",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(turtlebot4_msgs__msg__UserButton, button),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UserButton__rosidl_typesupport_introspection_c__UserButton_message_members = {
  "turtlebot4_msgs__msg",  // message namespace
  "UserButton",  // message name
  1,  // number of fields
  sizeof(turtlebot4_msgs__msg__UserButton),
  UserButton__rosidl_typesupport_introspection_c__UserButton_message_member_array,  // message members
  UserButton__rosidl_typesupport_introspection_c__UserButton_init_function,  // function to initialize message memory (memory has to be allocated)
  UserButton__rosidl_typesupport_introspection_c__UserButton_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UserButton__rosidl_typesupport_introspection_c__UserButton_message_type_support_handle = {
  0,
  &UserButton__rosidl_typesupport_introspection_c__UserButton_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlebot4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlebot4_msgs, msg, UserButton)() {
  if (!UserButton__rosidl_typesupport_introspection_c__UserButton_message_type_support_handle.typesupport_identifier) {
    UserButton__rosidl_typesupport_introspection_c__UserButton_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UserButton__rosidl_typesupport_introspection_c__UserButton_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
