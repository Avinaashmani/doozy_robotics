// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/WheelStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__STRUCT_H_

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

// Struct defined in msg/WheelStatus in the package irobot_create_msgs.
typedef struct irobot_create_msgs__msg__WheelStatus
{
  std_msgs__msg__Header header;
  int16_t current_ma_left;
  int16_t current_ma_right;
  int16_t pwm_left;
  int16_t pwm_right;
  bool wheels_enabled;
} irobot_create_msgs__msg__WheelStatus;

// Struct for a sequence of irobot_create_msgs__msg__WheelStatus.
typedef struct irobot_create_msgs__msg__WheelStatus__Sequence
{
  irobot_create_msgs__msg__WheelStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__WheelStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__STRUCT_H_
