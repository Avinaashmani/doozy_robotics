// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/Button.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__STRUCT_H_

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
// Member 'last_start_pressed_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'last_pressed_duration'
#include "builtin_interfaces/msg/detail/duration__struct.h"

// Struct defined in msg/Button in the package irobot_create_msgs.
typedef struct irobot_create_msgs__msg__Button
{
  std_msgs__msg__Header header;
  bool is_pressed;
  builtin_interfaces__msg__Time last_start_pressed_time;
  builtin_interfaces__msg__Duration last_pressed_duration;
} irobot_create_msgs__msg__Button;

// Struct for a sequence of irobot_create_msgs__msg__Button.
typedef struct irobot_create_msgs__msg__Button__Sequence
{
  irobot_create_msgs__msg__Button * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__Button__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__STRUCT_H_
