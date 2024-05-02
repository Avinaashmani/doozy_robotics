// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sick_visionary_t_mini:msg/SickTMini.idl
// generated code does not contain a copyright notice
#include "sick_visionary_t_mini/msg/detail/sick_t_mini__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status_of_camera`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_corners`
// Member `right_corners`
// Member `point`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
sick_visionary_t_mini__msg__SickTMini__init(sick_visionary_t_mini__msg__SickTMini * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sick_visionary_t_mini__msg__SickTMini__fini(msg);
    return false;
  }
  // status_of_camera
  if (!rosidl_runtime_c__String__init(&msg->status_of_camera)) {
    sick_visionary_t_mini__msg__SickTMini__fini(msg);
    return false;
  }
  // left_corners
  if (!geometry_msgs__msg__Vector3__init(&msg->left_corners)) {
    sick_visionary_t_mini__msg__SickTMini__fini(msg);
    return false;
  }
  // right_corners
  if (!geometry_msgs__msg__Vector3__init(&msg->right_corners)) {
    sick_visionary_t_mini__msg__SickTMini__fini(msg);
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__init(&msg->point)) {
    sick_visionary_t_mini__msg__SickTMini__fini(msg);
    return false;
  }
  // dolly_found
  // corners_distance
  return true;
}

void
sick_visionary_t_mini__msg__SickTMini__fini(sick_visionary_t_mini__msg__SickTMini * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status_of_camera
  rosidl_runtime_c__String__fini(&msg->status_of_camera);
  // left_corners
  geometry_msgs__msg__Vector3__fini(&msg->left_corners);
  // right_corners
  geometry_msgs__msg__Vector3__fini(&msg->right_corners);
  // point
  geometry_msgs__msg__Vector3__fini(&msg->point);
  // dolly_found
  // corners_distance
}

bool
sick_visionary_t_mini__msg__SickTMini__are_equal(const sick_visionary_t_mini__msg__SickTMini * lhs, const sick_visionary_t_mini__msg__SickTMini * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // status_of_camera
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status_of_camera), &(rhs->status_of_camera)))
  {
    return false;
  }
  // left_corners
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->left_corners), &(rhs->left_corners)))
  {
    return false;
  }
  // right_corners
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->right_corners), &(rhs->right_corners)))
  {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // dolly_found
  if (lhs->dolly_found != rhs->dolly_found) {
    return false;
  }
  // corners_distance
  if (lhs->corners_distance != rhs->corners_distance) {
    return false;
  }
  return true;
}

bool
sick_visionary_t_mini__msg__SickTMini__copy(
  const sick_visionary_t_mini__msg__SickTMini * input,
  sick_visionary_t_mini__msg__SickTMini * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // status_of_camera
  if (!rosidl_runtime_c__String__copy(
      &(input->status_of_camera), &(output->status_of_camera)))
  {
    return false;
  }
  // left_corners
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->left_corners), &(output->left_corners)))
  {
    return false;
  }
  // right_corners
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->right_corners), &(output->right_corners)))
  {
    return false;
  }
  // point
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // dolly_found
  output->dolly_found = input->dolly_found;
  // corners_distance
  output->corners_distance = input->corners_distance;
  return true;
}

sick_visionary_t_mini__msg__SickTMini *
sick_visionary_t_mini__msg__SickTMini__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sick_visionary_t_mini__msg__SickTMini * msg = (sick_visionary_t_mini__msg__SickTMini *)allocator.allocate(sizeof(sick_visionary_t_mini__msg__SickTMini), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sick_visionary_t_mini__msg__SickTMini));
  bool success = sick_visionary_t_mini__msg__SickTMini__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sick_visionary_t_mini__msg__SickTMini__destroy(sick_visionary_t_mini__msg__SickTMini * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sick_visionary_t_mini__msg__SickTMini__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sick_visionary_t_mini__msg__SickTMini__Sequence__init(sick_visionary_t_mini__msg__SickTMini__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sick_visionary_t_mini__msg__SickTMini * data = NULL;

  if (size) {
    data = (sick_visionary_t_mini__msg__SickTMini *)allocator.zero_allocate(size, sizeof(sick_visionary_t_mini__msg__SickTMini), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sick_visionary_t_mini__msg__SickTMini__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sick_visionary_t_mini__msg__SickTMini__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sick_visionary_t_mini__msg__SickTMini__Sequence__fini(sick_visionary_t_mini__msg__SickTMini__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sick_visionary_t_mini__msg__SickTMini__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sick_visionary_t_mini__msg__SickTMini__Sequence *
sick_visionary_t_mini__msg__SickTMini__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sick_visionary_t_mini__msg__SickTMini__Sequence * array = (sick_visionary_t_mini__msg__SickTMini__Sequence *)allocator.allocate(sizeof(sick_visionary_t_mini__msg__SickTMini__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sick_visionary_t_mini__msg__SickTMini__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sick_visionary_t_mini__msg__SickTMini__Sequence__destroy(sick_visionary_t_mini__msg__SickTMini__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sick_visionary_t_mini__msg__SickTMini__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sick_visionary_t_mini__msg__SickTMini__Sequence__are_equal(const sick_visionary_t_mini__msg__SickTMini__Sequence * lhs, const sick_visionary_t_mini__msg__SickTMini__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sick_visionary_t_mini__msg__SickTMini__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sick_visionary_t_mini__msg__SickTMini__Sequence__copy(
  const sick_visionary_t_mini__msg__SickTMini__Sequence * input,
  sick_visionary_t_mini__msg__SickTMini__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sick_visionary_t_mini__msg__SickTMini);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sick_visionary_t_mini__msg__SickTMini * data =
      (sick_visionary_t_mini__msg__SickTMini *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sick_visionary_t_mini__msg__SickTMini__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sick_visionary_t_mini__msg__SickTMini__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sick_visionary_t_mini__msg__SickTMini__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
