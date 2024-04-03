// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:action/RotateAngle.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/action/detail/rotate_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
irobot_create_msgs__action__RotateAngle_Goal__init(irobot_create_msgs__action__RotateAngle_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  // max_rotation_speed
  msg->max_rotation_speed = 1.9f;
  return true;
}

void
irobot_create_msgs__action__RotateAngle_Goal__fini(irobot_create_msgs__action__RotateAngle_Goal * msg)
{
  if (!msg) {
    return;
  }
  // angle
  // max_rotation_speed
}

bool
irobot_create_msgs__action__RotateAngle_Goal__are_equal(const irobot_create_msgs__action__RotateAngle_Goal * lhs, const irobot_create_msgs__action__RotateAngle_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // max_rotation_speed
  if (lhs->max_rotation_speed != rhs->max_rotation_speed) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_Goal__copy(
  const irobot_create_msgs__action__RotateAngle_Goal * input,
  irobot_create_msgs__action__RotateAngle_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  // max_rotation_speed
  output->max_rotation_speed = input->max_rotation_speed;
  return true;
}

irobot_create_msgs__action__RotateAngle_Goal *
irobot_create_msgs__action__RotateAngle_Goal__create()
{
  irobot_create_msgs__action__RotateAngle_Goal * msg = (irobot_create_msgs__action__RotateAngle_Goal *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_Goal));
  bool success = irobot_create_msgs__action__RotateAngle_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_Goal__destroy(irobot_create_msgs__action__RotateAngle_Goal * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_Goal__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_Goal__Sequence__init(irobot_create_msgs__action__RotateAngle_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_Goal * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_Goal *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_Goal__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_Goal__Sequence__fini(irobot_create_msgs__action__RotateAngle_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_Goal__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_Goal__Sequence *
irobot_create_msgs__action__RotateAngle_Goal__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_Goal__Sequence * array = (irobot_create_msgs__action__RotateAngle_Goal__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_Goal__Sequence__destroy(irobot_create_msgs__action__RotateAngle_Goal__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_Goal__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_Goal__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_Goal__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_Goal__Sequence * input,
  irobot_create_msgs__action__RotateAngle_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_Goal);
    irobot_create_msgs__action__RotateAngle_Goal * data =
      (irobot_create_msgs__action__RotateAngle_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_Goal__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
irobot_create_msgs__action__RotateAngle_Result__init(irobot_create_msgs__action__RotateAngle_Result * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    irobot_create_msgs__action__RotateAngle_Result__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__RotateAngle_Result__fini(irobot_create_msgs__action__RotateAngle_Result * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
irobot_create_msgs__action__RotateAngle_Result__are_equal(const irobot_create_msgs__action__RotateAngle_Result * lhs, const irobot_create_msgs__action__RotateAngle_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_Result__copy(
  const irobot_create_msgs__action__RotateAngle_Result * input,
  irobot_create_msgs__action__RotateAngle_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__RotateAngle_Result *
irobot_create_msgs__action__RotateAngle_Result__create()
{
  irobot_create_msgs__action__RotateAngle_Result * msg = (irobot_create_msgs__action__RotateAngle_Result *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_Result));
  bool success = irobot_create_msgs__action__RotateAngle_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_Result__destroy(irobot_create_msgs__action__RotateAngle_Result * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_Result__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_Result__Sequence__init(irobot_create_msgs__action__RotateAngle_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_Result * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_Result *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_Result__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_Result__Sequence__fini(irobot_create_msgs__action__RotateAngle_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_Result__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_Result__Sequence *
irobot_create_msgs__action__RotateAngle_Result__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_Result__Sequence * array = (irobot_create_msgs__action__RotateAngle_Result__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_Result__Sequence__destroy(irobot_create_msgs__action__RotateAngle_Result__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_Result__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_Result__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_Result__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_Result__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_Result__Sequence * input,
  irobot_create_msgs__action__RotateAngle_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_Result);
    irobot_create_msgs__action__RotateAngle_Result * data =
      (irobot_create_msgs__action__RotateAngle_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_Result__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
irobot_create_msgs__action__RotateAngle_Feedback__init(irobot_create_msgs__action__RotateAngle_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_angle_travel
  return true;
}

void
irobot_create_msgs__action__RotateAngle_Feedback__fini(irobot_create_msgs__action__RotateAngle_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining_angle_travel
}

bool
irobot_create_msgs__action__RotateAngle_Feedback__are_equal(const irobot_create_msgs__action__RotateAngle_Feedback * lhs, const irobot_create_msgs__action__RotateAngle_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remaining_angle_travel
  if (lhs->remaining_angle_travel != rhs->remaining_angle_travel) {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_Feedback__copy(
  const irobot_create_msgs__action__RotateAngle_Feedback * input,
  irobot_create_msgs__action__RotateAngle_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // remaining_angle_travel
  output->remaining_angle_travel = input->remaining_angle_travel;
  return true;
}

irobot_create_msgs__action__RotateAngle_Feedback *
irobot_create_msgs__action__RotateAngle_Feedback__create()
{
  irobot_create_msgs__action__RotateAngle_Feedback * msg = (irobot_create_msgs__action__RotateAngle_Feedback *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_Feedback));
  bool success = irobot_create_msgs__action__RotateAngle_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_Feedback__destroy(irobot_create_msgs__action__RotateAngle_Feedback * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_Feedback__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__init(irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_Feedback * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_Feedback *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_Feedback__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__fini(irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_Feedback__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_Feedback__Sequence *
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array = (irobot_create_msgs__action__RotateAngle_Feedback__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__destroy(irobot_create_msgs__action__RotateAngle_Feedback__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_Feedback__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_Feedback__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_Feedback__Sequence * input,
  irobot_create_msgs__action__RotateAngle_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_Feedback);
    irobot_create_msgs__action__RotateAngle_Feedback * data =
      (irobot_create_msgs__action__RotateAngle_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_Feedback__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "irobot_create_msgs/action/detail/rotate_angle__functions.h"

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__init(irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__RotateAngle_Goal__init(&msg->goal)) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  irobot_create_msgs__action__RotateAngle_Goal__fini(&msg->goal);
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Request * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__RotateAngle_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Request * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__RotateAngle_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__RotateAngle_SendGoal_Request *
irobot_create_msgs__action__RotateAngle_SendGoal_Request__create()
{
  irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg = (irobot_create_msgs__action__RotateAngle_SendGoal_Request *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Request));
  bool success = irobot_create_msgs__action__RotateAngle_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Request * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__init(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_SendGoal_Request * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_SendGoal_Request *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence *
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array = (irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Request);
    irobot_create_msgs__action__RotateAngle_SendGoal_Request * data =
      (irobot_create_msgs__action__RotateAngle_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_SendGoal_Request__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__init(irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Response * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Response * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__RotateAngle_SendGoal_Response *
irobot_create_msgs__action__RotateAngle_SendGoal_Response__create()
{
  irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg = (irobot_create_msgs__action__RotateAngle_SendGoal_Response *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Response));
  bool success = irobot_create_msgs__action__RotateAngle_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Response * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__init(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_SendGoal_Response * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_SendGoal_Response *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__fini(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence *
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array = (irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__destroy(irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * input,
  irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_SendGoal_Response);
    irobot_create_msgs__action__RotateAngle_SendGoal_Response * data =
      (irobot_create_msgs__action__RotateAngle_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_SendGoal_Response__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__init(irobot_create_msgs__action__RotateAngle_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(irobot_create_msgs__action__RotateAngle_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Request * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Request * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__RotateAngle_GetResult_Request *
irobot_create_msgs__action__RotateAngle_GetResult_Request__create()
{
  irobot_create_msgs__action__RotateAngle_GetResult_Request * msg = (irobot_create_msgs__action__RotateAngle_GetResult_Request *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Request));
  bool success = irobot_create_msgs__action__RotateAngle_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_GetResult_Request__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Request * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__init(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_GetResult_Request * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_GetResult_Request *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__fini(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence *
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array = (irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Request);
    irobot_create_msgs__action__RotateAngle_GetResult_Request * data =
      (irobot_create_msgs__action__RotateAngle_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_GetResult_Request__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "irobot_create_msgs/action/detail/rotate_angle__functions.h"

bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__init(irobot_create_msgs__action__RotateAngle_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!irobot_create_msgs__action__RotateAngle_Result__init(&msg->result)) {
    irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(irobot_create_msgs__action__RotateAngle_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  irobot_create_msgs__action__RotateAngle_Result__fini(&msg->result);
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Response * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!irobot_create_msgs__action__RotateAngle_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Response * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!irobot_create_msgs__action__RotateAngle_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__RotateAngle_GetResult_Response *
irobot_create_msgs__action__RotateAngle_GetResult_Response__create()
{
  irobot_create_msgs__action__RotateAngle_GetResult_Response * msg = (irobot_create_msgs__action__RotateAngle_GetResult_Response *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Response));
  bool success = irobot_create_msgs__action__RotateAngle_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_GetResult_Response__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Response * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__init(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_GetResult_Response * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_GetResult_Response *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__fini(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence *
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array = (irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__destroy(irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * input,
  irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_GetResult_Response);
    irobot_create_msgs__action__RotateAngle_GetResult_Response * data =
      (irobot_create_msgs__action__RotateAngle_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_GetResult_Response__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "irobot_create_msgs/action/detail/rotate_angle__functions.h"

bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__init(irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__RotateAngle_Feedback__init(&msg->feedback)) {
    irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  irobot_create_msgs__action__RotateAngle_Feedback__fini(&msg->feedback);
}

bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__are_equal(const irobot_create_msgs__action__RotateAngle_FeedbackMessage * lhs, const irobot_create_msgs__action__RotateAngle_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__RotateAngle_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__copy(
  const irobot_create_msgs__action__RotateAngle_FeedbackMessage * input,
  irobot_create_msgs__action__RotateAngle_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__RotateAngle_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__RotateAngle_FeedbackMessage *
irobot_create_msgs__action__RotateAngle_FeedbackMessage__create()
{
  irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg = (irobot_create_msgs__action__RotateAngle_FeedbackMessage *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__RotateAngle_FeedbackMessage));
  bool success = irobot_create_msgs__action__RotateAngle_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__destroy(irobot_create_msgs__action__RotateAngle_FeedbackMessage * msg)
{
  if (msg) {
    irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__init(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__RotateAngle_FeedbackMessage * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__RotateAngle_FeedbackMessage *)calloc(size, sizeof(irobot_create_msgs__action__RotateAngle_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__RotateAngle_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(&data[i - 1]);
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
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__fini(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(&array->data[i]);
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

irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence *
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__create(size_t size)
{
  irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array = (irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence *)malloc(sizeof(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__destroy(irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__are_equal(const irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * lhs, const irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__RotateAngle_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence__copy(
  const irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * input,
  irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__RotateAngle_FeedbackMessage);
    irobot_create_msgs__action__RotateAngle_FeedbackMessage * data =
      (irobot_create_msgs__action__RotateAngle_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__RotateAngle_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__RotateAngle_FeedbackMessage__fini(&data[i]);
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
    if (!irobot_create_msgs__action__RotateAngle_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
