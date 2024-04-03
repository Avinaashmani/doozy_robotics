// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlebot4_msgs:msg/UserLed.idl
// generated code does not contain a copyright notice
#include "turtlebot4_msgs/msg/detail/user_led__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
turtlebot4_msgs__msg__UserLed__init(turtlebot4_msgs__msg__UserLed * msg)
{
  if (!msg) {
    return false;
  }
  // led
  // color
  // blink_period
  // duty_cycle
  return true;
}

void
turtlebot4_msgs__msg__UserLed__fini(turtlebot4_msgs__msg__UserLed * msg)
{
  if (!msg) {
    return;
  }
  // led
  // color
  // blink_period
  // duty_cycle
}

bool
turtlebot4_msgs__msg__UserLed__are_equal(const turtlebot4_msgs__msg__UserLed * lhs, const turtlebot4_msgs__msg__UserLed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led
  if (lhs->led != rhs->led) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // blink_period
  if (lhs->blink_period != rhs->blink_period) {
    return false;
  }
  // duty_cycle
  if (lhs->duty_cycle != rhs->duty_cycle) {
    return false;
  }
  return true;
}

bool
turtlebot4_msgs__msg__UserLed__copy(
  const turtlebot4_msgs__msg__UserLed * input,
  turtlebot4_msgs__msg__UserLed * output)
{
  if (!input || !output) {
    return false;
  }
  // led
  output->led = input->led;
  // color
  output->color = input->color;
  // blink_period
  output->blink_period = input->blink_period;
  // duty_cycle
  output->duty_cycle = input->duty_cycle;
  return true;
}

turtlebot4_msgs__msg__UserLed *
turtlebot4_msgs__msg__UserLed__create()
{
  turtlebot4_msgs__msg__UserLed * msg = (turtlebot4_msgs__msg__UserLed *)malloc(sizeof(turtlebot4_msgs__msg__UserLed));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlebot4_msgs__msg__UserLed));
  bool success = turtlebot4_msgs__msg__UserLed__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlebot4_msgs__msg__UserLed__destroy(turtlebot4_msgs__msg__UserLed * msg)
{
  if (msg) {
    turtlebot4_msgs__msg__UserLed__fini(msg);
  }
  free(msg);
}


bool
turtlebot4_msgs__msg__UserLed__Sequence__init(turtlebot4_msgs__msg__UserLed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlebot4_msgs__msg__UserLed * data = NULL;
  if (size) {
    data = (turtlebot4_msgs__msg__UserLed *)calloc(size, sizeof(turtlebot4_msgs__msg__UserLed));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlebot4_msgs__msg__UserLed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlebot4_msgs__msg__UserLed__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlebot4_msgs__msg__UserLed__Sequence__fini(turtlebot4_msgs__msg__UserLed__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlebot4_msgs__msg__UserLed__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlebot4_msgs__msg__UserLed__Sequence *
turtlebot4_msgs__msg__UserLed__Sequence__create(size_t size)
{
  turtlebot4_msgs__msg__UserLed__Sequence * array = (turtlebot4_msgs__msg__UserLed__Sequence *)malloc(sizeof(turtlebot4_msgs__msg__UserLed__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlebot4_msgs__msg__UserLed__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlebot4_msgs__msg__UserLed__Sequence__destroy(turtlebot4_msgs__msg__UserLed__Sequence * array)
{
  if (array) {
    turtlebot4_msgs__msg__UserLed__Sequence__fini(array);
  }
  free(array);
}

bool
turtlebot4_msgs__msg__UserLed__Sequence__are_equal(const turtlebot4_msgs__msg__UserLed__Sequence * lhs, const turtlebot4_msgs__msg__UserLed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlebot4_msgs__msg__UserLed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlebot4_msgs__msg__UserLed__Sequence__copy(
  const turtlebot4_msgs__msg__UserLed__Sequence * input,
  turtlebot4_msgs__msg__UserLed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlebot4_msgs__msg__UserLed);
    turtlebot4_msgs__msg__UserLed * data =
      (turtlebot4_msgs__msg__UserLed *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlebot4_msgs__msg__UserLed__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          turtlebot4_msgs__msg__UserLed__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlebot4_msgs__msg__UserLed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
