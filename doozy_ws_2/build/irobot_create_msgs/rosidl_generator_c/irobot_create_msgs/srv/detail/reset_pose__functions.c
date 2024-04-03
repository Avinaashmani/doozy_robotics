// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/srv/detail/reset_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
irobot_create_msgs__srv__ResetPose_Request__init(irobot_create_msgs__srv__ResetPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    irobot_create_msgs__srv__ResetPose_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__srv__ResetPose_Request__fini(irobot_create_msgs__srv__ResetPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
irobot_create_msgs__srv__ResetPose_Request__are_equal(const irobot_create_msgs__srv__ResetPose_Request * lhs, const irobot_create_msgs__srv__ResetPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__srv__ResetPose_Request__copy(
  const irobot_create_msgs__srv__ResetPose_Request * input,
  irobot_create_msgs__srv__ResetPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__srv__ResetPose_Request *
irobot_create_msgs__srv__ResetPose_Request__create()
{
  irobot_create_msgs__srv__ResetPose_Request * msg = (irobot_create_msgs__srv__ResetPose_Request *)malloc(sizeof(irobot_create_msgs__srv__ResetPose_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__srv__ResetPose_Request));
  bool success = irobot_create_msgs__srv__ResetPose_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__srv__ResetPose_Request__destroy(irobot_create_msgs__srv__ResetPose_Request * msg)
{
  if (msg) {
    irobot_create_msgs__srv__ResetPose_Request__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__srv__ResetPose_Request__Sequence__init(irobot_create_msgs__srv__ResetPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__srv__ResetPose_Request * data = NULL;
  if (size) {
    data = (irobot_create_msgs__srv__ResetPose_Request *)calloc(size, sizeof(irobot_create_msgs__srv__ResetPose_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__srv__ResetPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__srv__ResetPose_Request__fini(&data[i - 1]);
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
irobot_create_msgs__srv__ResetPose_Request__Sequence__fini(irobot_create_msgs__srv__ResetPose_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__srv__ResetPose_Request__fini(&array->data[i]);
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

irobot_create_msgs__srv__ResetPose_Request__Sequence *
irobot_create_msgs__srv__ResetPose_Request__Sequence__create(size_t size)
{
  irobot_create_msgs__srv__ResetPose_Request__Sequence * array = (irobot_create_msgs__srv__ResetPose_Request__Sequence *)malloc(sizeof(irobot_create_msgs__srv__ResetPose_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__srv__ResetPose_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__srv__ResetPose_Request__Sequence__destroy(irobot_create_msgs__srv__ResetPose_Request__Sequence * array)
{
  if (array) {
    irobot_create_msgs__srv__ResetPose_Request__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__srv__ResetPose_Request__Sequence__are_equal(const irobot_create_msgs__srv__ResetPose_Request__Sequence * lhs, const irobot_create_msgs__srv__ResetPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__srv__ResetPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__srv__ResetPose_Request__Sequence__copy(
  const irobot_create_msgs__srv__ResetPose_Request__Sequence * input,
  irobot_create_msgs__srv__ResetPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__srv__ResetPose_Request);
    irobot_create_msgs__srv__ResetPose_Request * data =
      (irobot_create_msgs__srv__ResetPose_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__srv__ResetPose_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__srv__ResetPose_Request__fini(&data[i]);
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
    if (!irobot_create_msgs__srv__ResetPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
irobot_create_msgs__srv__ResetPose_Response__init(irobot_create_msgs__srv__ResetPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
irobot_create_msgs__srv__ResetPose_Response__fini(irobot_create_msgs__srv__ResetPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
irobot_create_msgs__srv__ResetPose_Response__are_equal(const irobot_create_msgs__srv__ResetPose_Response * lhs, const irobot_create_msgs__srv__ResetPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__srv__ResetPose_Response__copy(
  const irobot_create_msgs__srv__ResetPose_Response * input,
  irobot_create_msgs__srv__ResetPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

irobot_create_msgs__srv__ResetPose_Response *
irobot_create_msgs__srv__ResetPose_Response__create()
{
  irobot_create_msgs__srv__ResetPose_Response * msg = (irobot_create_msgs__srv__ResetPose_Response *)malloc(sizeof(irobot_create_msgs__srv__ResetPose_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__srv__ResetPose_Response));
  bool success = irobot_create_msgs__srv__ResetPose_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__srv__ResetPose_Response__destroy(irobot_create_msgs__srv__ResetPose_Response * msg)
{
  if (msg) {
    irobot_create_msgs__srv__ResetPose_Response__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__srv__ResetPose_Response__Sequence__init(irobot_create_msgs__srv__ResetPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__srv__ResetPose_Response * data = NULL;
  if (size) {
    data = (irobot_create_msgs__srv__ResetPose_Response *)calloc(size, sizeof(irobot_create_msgs__srv__ResetPose_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__srv__ResetPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__srv__ResetPose_Response__fini(&data[i - 1]);
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
irobot_create_msgs__srv__ResetPose_Response__Sequence__fini(irobot_create_msgs__srv__ResetPose_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__srv__ResetPose_Response__fini(&array->data[i]);
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

irobot_create_msgs__srv__ResetPose_Response__Sequence *
irobot_create_msgs__srv__ResetPose_Response__Sequence__create(size_t size)
{
  irobot_create_msgs__srv__ResetPose_Response__Sequence * array = (irobot_create_msgs__srv__ResetPose_Response__Sequence *)malloc(sizeof(irobot_create_msgs__srv__ResetPose_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__srv__ResetPose_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__srv__ResetPose_Response__Sequence__destroy(irobot_create_msgs__srv__ResetPose_Response__Sequence * array)
{
  if (array) {
    irobot_create_msgs__srv__ResetPose_Response__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__srv__ResetPose_Response__Sequence__are_equal(const irobot_create_msgs__srv__ResetPose_Response__Sequence * lhs, const irobot_create_msgs__srv__ResetPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__srv__ResetPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__srv__ResetPose_Response__Sequence__copy(
  const irobot_create_msgs__srv__ResetPose_Response__Sequence * input,
  irobot_create_msgs__srv__ResetPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__srv__ResetPose_Response);
    irobot_create_msgs__srv__ResetPose_Response * data =
      (irobot_create_msgs__srv__ResetPose_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__srv__ResetPose_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__srv__ResetPose_Response__fini(&data[i]);
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
    if (!irobot_create_msgs__srv__ResetPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
