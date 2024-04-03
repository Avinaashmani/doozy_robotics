// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:msg/AudioNote.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/msg/detail/audio_note__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `max_runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
irobot_create_msgs__msg__AudioNote__init(irobot_create_msgs__msg__AudioNote * msg)
{
  if (!msg) {
    return false;
  }
  // frequency
  // max_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->max_runtime)) {
    irobot_create_msgs__msg__AudioNote__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__msg__AudioNote__fini(irobot_create_msgs__msg__AudioNote * msg)
{
  if (!msg) {
    return;
  }
  // frequency
  // max_runtime
  builtin_interfaces__msg__Duration__fini(&msg->max_runtime);
}

bool
irobot_create_msgs__msg__AudioNote__are_equal(const irobot_create_msgs__msg__AudioNote * lhs, const irobot_create_msgs__msg__AudioNote * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // max_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->max_runtime), &(rhs->max_runtime)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__msg__AudioNote__copy(
  const irobot_create_msgs__msg__AudioNote * input,
  irobot_create_msgs__msg__AudioNote * output)
{
  if (!input || !output) {
    return false;
  }
  // frequency
  output->frequency = input->frequency;
  // max_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->max_runtime), &(output->max_runtime)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__msg__AudioNote *
irobot_create_msgs__msg__AudioNote__create()
{
  irobot_create_msgs__msg__AudioNote * msg = (irobot_create_msgs__msg__AudioNote *)malloc(sizeof(irobot_create_msgs__msg__AudioNote));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__msg__AudioNote));
  bool success = irobot_create_msgs__msg__AudioNote__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__msg__AudioNote__destroy(irobot_create_msgs__msg__AudioNote * msg)
{
  if (msg) {
    irobot_create_msgs__msg__AudioNote__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__msg__AudioNote__Sequence__init(irobot_create_msgs__msg__AudioNote__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__msg__AudioNote * data = NULL;
  if (size) {
    data = (irobot_create_msgs__msg__AudioNote *)calloc(size, sizeof(irobot_create_msgs__msg__AudioNote));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__msg__AudioNote__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__msg__AudioNote__fini(&data[i - 1]);
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
irobot_create_msgs__msg__AudioNote__Sequence__fini(irobot_create_msgs__msg__AudioNote__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__msg__AudioNote__fini(&array->data[i]);
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

irobot_create_msgs__msg__AudioNote__Sequence *
irobot_create_msgs__msg__AudioNote__Sequence__create(size_t size)
{
  irobot_create_msgs__msg__AudioNote__Sequence * array = (irobot_create_msgs__msg__AudioNote__Sequence *)malloc(sizeof(irobot_create_msgs__msg__AudioNote__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__msg__AudioNote__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__msg__AudioNote__Sequence__destroy(irobot_create_msgs__msg__AudioNote__Sequence * array)
{
  if (array) {
    irobot_create_msgs__msg__AudioNote__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__msg__AudioNote__Sequence__are_equal(const irobot_create_msgs__msg__AudioNote__Sequence * lhs, const irobot_create_msgs__msg__AudioNote__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__msg__AudioNote__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__msg__AudioNote__Sequence__copy(
  const irobot_create_msgs__msg__AudioNote__Sequence * input,
  irobot_create_msgs__msg__AudioNote__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__msg__AudioNote);
    irobot_create_msgs__msg__AudioNote * data =
      (irobot_create_msgs__msg__AudioNote *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__msg__AudioNote__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__msg__AudioNote__fini(&data[i]);
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
    if (!irobot_create_msgs__msg__AudioNote__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
