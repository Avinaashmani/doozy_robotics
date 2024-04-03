// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:srv/EStop.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/srv/detail/e_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
irobot_create_msgs__srv__EStop_Request__init(irobot_create_msgs__srv__EStop_Request * msg)
{
  if (!msg) {
    return false;
  }
  // e_stop_on
  return true;
}

void
irobot_create_msgs__srv__EStop_Request__fini(irobot_create_msgs__srv__EStop_Request * msg)
{
  if (!msg) {
    return;
  }
  // e_stop_on
}

bool
irobot_create_msgs__srv__EStop_Request__are_equal(const irobot_create_msgs__srv__EStop_Request * lhs, const irobot_create_msgs__srv__EStop_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // e_stop_on
  if (lhs->e_stop_on != rhs->e_stop_on) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Request__copy(
  const irobot_create_msgs__srv__EStop_Request * input,
  irobot_create_msgs__srv__EStop_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // e_stop_on
  output->e_stop_on = input->e_stop_on;
  return true;
}

irobot_create_msgs__srv__EStop_Request *
irobot_create_msgs__srv__EStop_Request__create()
{
  irobot_create_msgs__srv__EStop_Request * msg = (irobot_create_msgs__srv__EStop_Request *)malloc(sizeof(irobot_create_msgs__srv__EStop_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__srv__EStop_Request));
  bool success = irobot_create_msgs__srv__EStop_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__srv__EStop_Request__destroy(irobot_create_msgs__srv__EStop_Request * msg)
{
  if (msg) {
    irobot_create_msgs__srv__EStop_Request__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__srv__EStop_Request__Sequence__init(irobot_create_msgs__srv__EStop_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__srv__EStop_Request * data = NULL;
  if (size) {
    data = (irobot_create_msgs__srv__EStop_Request *)calloc(size, sizeof(irobot_create_msgs__srv__EStop_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__srv__EStop_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__srv__EStop_Request__fini(&data[i - 1]);
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
irobot_create_msgs__srv__EStop_Request__Sequence__fini(irobot_create_msgs__srv__EStop_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__srv__EStop_Request__fini(&array->data[i]);
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

irobot_create_msgs__srv__EStop_Request__Sequence *
irobot_create_msgs__srv__EStop_Request__Sequence__create(size_t size)
{
  irobot_create_msgs__srv__EStop_Request__Sequence * array = (irobot_create_msgs__srv__EStop_Request__Sequence *)malloc(sizeof(irobot_create_msgs__srv__EStop_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__srv__EStop_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__srv__EStop_Request__Sequence__destroy(irobot_create_msgs__srv__EStop_Request__Sequence * array)
{
  if (array) {
    irobot_create_msgs__srv__EStop_Request__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__srv__EStop_Request__Sequence__are_equal(const irobot_create_msgs__srv__EStop_Request__Sequence * lhs, const irobot_create_msgs__srv__EStop_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__srv__EStop_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Request__Sequence__copy(
  const irobot_create_msgs__srv__EStop_Request__Sequence * input,
  irobot_create_msgs__srv__EStop_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__srv__EStop_Request);
    irobot_create_msgs__srv__EStop_Request * data =
      (irobot_create_msgs__srv__EStop_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__srv__EStop_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__srv__EStop_Request__fini(&data[i]);
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
    if (!irobot_create_msgs__srv__EStop_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
irobot_create_msgs__srv__EStop_Response__init(irobot_create_msgs__srv__EStop_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    irobot_create_msgs__srv__EStop_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__srv__EStop_Response__fini(irobot_create_msgs__srv__EStop_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
irobot_create_msgs__srv__EStop_Response__are_equal(const irobot_create_msgs__srv__EStop_Response * lhs, const irobot_create_msgs__srv__EStop_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Response__copy(
  const irobot_create_msgs__srv__EStop_Response * input,
  irobot_create_msgs__srv__EStop_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__srv__EStop_Response *
irobot_create_msgs__srv__EStop_Response__create()
{
  irobot_create_msgs__srv__EStop_Response * msg = (irobot_create_msgs__srv__EStop_Response *)malloc(sizeof(irobot_create_msgs__srv__EStop_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__srv__EStop_Response));
  bool success = irobot_create_msgs__srv__EStop_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__srv__EStop_Response__destroy(irobot_create_msgs__srv__EStop_Response * msg)
{
  if (msg) {
    irobot_create_msgs__srv__EStop_Response__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__srv__EStop_Response__Sequence__init(irobot_create_msgs__srv__EStop_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__srv__EStop_Response * data = NULL;
  if (size) {
    data = (irobot_create_msgs__srv__EStop_Response *)calloc(size, sizeof(irobot_create_msgs__srv__EStop_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__srv__EStop_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__srv__EStop_Response__fini(&data[i - 1]);
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
irobot_create_msgs__srv__EStop_Response__Sequence__fini(irobot_create_msgs__srv__EStop_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__srv__EStop_Response__fini(&array->data[i]);
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

irobot_create_msgs__srv__EStop_Response__Sequence *
irobot_create_msgs__srv__EStop_Response__Sequence__create(size_t size)
{
  irobot_create_msgs__srv__EStop_Response__Sequence * array = (irobot_create_msgs__srv__EStop_Response__Sequence *)malloc(sizeof(irobot_create_msgs__srv__EStop_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__srv__EStop_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__srv__EStop_Response__Sequence__destroy(irobot_create_msgs__srv__EStop_Response__Sequence * array)
{
  if (array) {
    irobot_create_msgs__srv__EStop_Response__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__srv__EStop_Response__Sequence__are_equal(const irobot_create_msgs__srv__EStop_Response__Sequence * lhs, const irobot_create_msgs__srv__EStop_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__srv__EStop_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__srv__EStop_Response__Sequence__copy(
  const irobot_create_msgs__srv__EStop_Response__Sequence * input,
  irobot_create_msgs__srv__EStop_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__srv__EStop_Response);
    irobot_create_msgs__srv__EStop_Response * data =
      (irobot_create_msgs__srv__EStop_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__srv__EStop_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__srv__EStop_Response__fini(&data[i]);
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
    if (!irobot_create_msgs__srv__EStop_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
