// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/InterfaceButtons.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'button_1'
// Member 'button_power'
// Member 'button_2'
#include "irobot_create_msgs/msg/detail/button__struct.h"

// Struct defined in msg/InterfaceButtons in the package irobot_create_msgs.
typedef struct irobot_create_msgs__msg__InterfaceButtons
{
  std_msgs__msg__Header header;
  irobot_create_msgs__msg__Button button_1;
  irobot_create_msgs__msg__Button button_power;
  irobot_create_msgs__msg__Button button_2;
} irobot_create_msgs__msg__InterfaceButtons;

// Struct for a sequence of irobot_create_msgs__msg__InterfaceButtons.
typedef struct irobot_create_msgs__msg__InterfaceButtons__Sequence
{
  irobot_create_msgs__msg__InterfaceButtons * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__InterfaceButtons__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__STRUCT_H_
