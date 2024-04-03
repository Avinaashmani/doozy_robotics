// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/LightringLeds.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_H_

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
// Member 'leds'
#include "irobot_create_msgs/msg/detail/led_color__struct.h"

// Struct defined in msg/LightringLeds in the package irobot_create_msgs.
typedef struct irobot_create_msgs__msg__LightringLeds
{
  std_msgs__msg__Header header;
  irobot_create_msgs__msg__LedColor leds[6];
  bool override_system;
} irobot_create_msgs__msg__LightringLeds;

// Struct for a sequence of irobot_create_msgs__msg__LightringLeds.
typedef struct irobot_create_msgs__msg__LightringLeds__Sequence
{
  irobot_create_msgs__msg__LightringLeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__LightringLeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_H_
