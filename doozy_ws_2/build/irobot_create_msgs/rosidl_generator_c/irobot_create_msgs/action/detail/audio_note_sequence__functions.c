// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from irobot_create_msgs:action/AudioNoteSequence.idl
// generated code does not contain a copyright notice
#include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `note_sequence`
#include "irobot_create_msgs/msg/detail/audio_note_vector__functions.h"

bool
irobot_create_msgs__action__AudioNoteSequence_Goal__init(irobot_create_msgs__action__AudioNoteSequence_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // iterations
  msg->iterations = 1l;
  // note_sequence
  if (!irobot_create_msgs__msg__AudioNoteVector__init(&msg->note_sequence)) {
    irobot_create_msgs__action__AudioNoteSequence_Goal__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_Goal__fini(irobot_create_msgs__action__AudioNoteSequence_Goal * msg)
{
  if (!msg) {
    return;
  }
  // iterations
  // note_sequence
  irobot_create_msgs__msg__AudioNoteVector__fini(&msg->note_sequence);
}

bool
irobot_create_msgs__action__AudioNoteSequence_Goal__are_equal(const irobot_create_msgs__action__AudioNoteSequence_Goal * lhs, const irobot_create_msgs__action__AudioNoteSequence_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iterations
  if (lhs->iterations != rhs->iterations) {
    return false;
  }
  // note_sequence
  if (!irobot_create_msgs__msg__AudioNoteVector__are_equal(
      &(lhs->note_sequence), &(rhs->note_sequence)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_Goal__copy(
  const irobot_create_msgs__action__AudioNoteSequence_Goal * input,
  irobot_create_msgs__action__AudioNoteSequence_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // iterations
  output->iterations = input->iterations;
  // note_sequence
  if (!irobot_create_msgs__msg__AudioNoteVector__copy(
      &(input->note_sequence), &(output->note_sequence)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__AudioNoteSequence_Goal *
irobot_create_msgs__action__AudioNoteSequence_Goal__create()
{
  irobot_create_msgs__action__AudioNoteSequence_Goal * msg = (irobot_create_msgs__action__AudioNoteSequence_Goal *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_Goal));
  bool success = irobot_create_msgs__action__AudioNoteSequence_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_Goal__destroy(irobot_create_msgs__action__AudioNoteSequence_Goal * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_Goal__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_Goal * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_Goal *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_Goal__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_Goal__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence *
irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_Goal);
    irobot_create_msgs__action__AudioNoteSequence_Goal * data =
      (irobot_create_msgs__action__AudioNoteSequence_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_Goal__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
irobot_create_msgs__action__AudioNoteSequence_Result__init(irobot_create_msgs__action__AudioNoteSequence_Result * msg)
{
  if (!msg) {
    return false;
  }
  // complete
  // iterations_played
  // runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->runtime)) {
    irobot_create_msgs__action__AudioNoteSequence_Result__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_Result__fini(irobot_create_msgs__action__AudioNoteSequence_Result * msg)
{
  if (!msg) {
    return;
  }
  // complete
  // iterations_played
  // runtime
  builtin_interfaces__msg__Duration__fini(&msg->runtime);
}

bool
irobot_create_msgs__action__AudioNoteSequence_Result__are_equal(const irobot_create_msgs__action__AudioNoteSequence_Result * lhs, const irobot_create_msgs__action__AudioNoteSequence_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // complete
  if (lhs->complete != rhs->complete) {
    return false;
  }
  // iterations_played
  if (lhs->iterations_played != rhs->iterations_played) {
    return false;
  }
  // runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->runtime), &(rhs->runtime)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_Result__copy(
  const irobot_create_msgs__action__AudioNoteSequence_Result * input,
  irobot_create_msgs__action__AudioNoteSequence_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // complete
  output->complete = input->complete;
  // iterations_played
  output->iterations_played = input->iterations_played;
  // runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->runtime), &(output->runtime)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__AudioNoteSequence_Result *
irobot_create_msgs__action__AudioNoteSequence_Result__create()
{
  irobot_create_msgs__action__AudioNoteSequence_Result * msg = (irobot_create_msgs__action__AudioNoteSequence_Result *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_Result));
  bool success = irobot_create_msgs__action__AudioNoteSequence_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_Result__destroy(irobot_create_msgs__action__AudioNoteSequence_Result * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_Result__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_Result * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_Result *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_Result__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_Result__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_Result__Sequence *
irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_Result__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_Result__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_Result);
    irobot_create_msgs__action__AudioNoteSequence_Result * data =
      (irobot_create_msgs__action__AudioNoteSequence_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_Result__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_runtime`
// already included above
// #include "builtin_interfaces/msg/detail/duration__functions.h"

bool
irobot_create_msgs__action__AudioNoteSequence_Feedback__init(irobot_create_msgs__action__AudioNoteSequence_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // iterations_played
  // current_runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->current_runtime)) {
    irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(irobot_create_msgs__action__AudioNoteSequence_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // iterations_played
  // current_runtime
  builtin_interfaces__msg__Duration__fini(&msg->current_runtime);
}

bool
irobot_create_msgs__action__AudioNoteSequence_Feedback__are_equal(const irobot_create_msgs__action__AudioNoteSequence_Feedback * lhs, const irobot_create_msgs__action__AudioNoteSequence_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iterations_played
  if (lhs->iterations_played != rhs->iterations_played) {
    return false;
  }
  // current_runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->current_runtime), &(rhs->current_runtime)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_Feedback__copy(
  const irobot_create_msgs__action__AudioNoteSequence_Feedback * input,
  irobot_create_msgs__action__AudioNoteSequence_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // iterations_played
  output->iterations_played = input->iterations_played;
  // current_runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->current_runtime), &(output->current_runtime)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__AudioNoteSequence_Feedback *
irobot_create_msgs__action__AudioNoteSequence_Feedback__create()
{
  irobot_create_msgs__action__AudioNoteSequence_Feedback * msg = (irobot_create_msgs__action__AudioNoteSequence_Feedback *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_Feedback));
  bool success = irobot_create_msgs__action__AudioNoteSequence_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_Feedback__destroy(irobot_create_msgs__action__AudioNoteSequence_Feedback * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_Feedback * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_Feedback *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence *
irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_Feedback);
    irobot_create_msgs__action__AudioNoteSequence_Feedback * data =
      (irobot_create_msgs__action__AudioNoteSequence_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_Feedback__copy(
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
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__init(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!irobot_create_msgs__action__AudioNoteSequence_Goal__init(&msg->goal)) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  irobot_create_msgs__action__AudioNoteSequence_Goal__fini(&msg->goal);
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__are_equal(const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * lhs, const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * rhs)
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
  if (!irobot_create_msgs__action__AudioNoteSequence_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__copy(
  const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * input,
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * output)
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
  if (!irobot_create_msgs__action__AudioNoteSequence_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request *
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__create()
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * msg = (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request));
  bool success = irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__destroy(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence *
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request);
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * data =
      (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__copy(
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
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__init(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__are_equal(const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * lhs, const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * rhs)
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
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__copy(
  const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * input,
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * output)
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

irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response *
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__create()
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * msg = (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response));
  bool success = irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__destroy(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence *
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response);
    irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * data =
      (irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__copy(
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
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__init(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__are_equal(const irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * lhs, const irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * rhs)
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
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__copy(
  const irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * input,
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * output)
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

irobot_create_msgs__action__AudioNoteSequence_GetResult_Request *
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__create()
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * msg = (irobot_create_msgs__action__AudioNoteSequence_GetResult_Request *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request));
  bool success = irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__destroy(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_GetResult_Request *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence *
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request);
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * data =
      (irobot_create_msgs__action__AudioNoteSequence_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__copy(
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
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__init(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!irobot_create_msgs__action__AudioNoteSequence_Result__init(&msg->result)) {
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  irobot_create_msgs__action__AudioNoteSequence_Result__fini(&msg->result);
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__are_equal(const irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * lhs, const irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!irobot_create_msgs__action__AudioNoteSequence_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__copy(
  const irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * input,
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!irobot_create_msgs__action__AudioNoteSequence_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__AudioNoteSequence_GetResult_Response *
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__create()
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * msg = (irobot_create_msgs__action__AudioNoteSequence_GetResult_Response *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response));
  bool success = irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__destroy(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_GetResult_Response *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence *
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response);
    irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * data =
      (irobot_create_msgs__action__AudioNoteSequence_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__copy(
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
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"

bool
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__init(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!irobot_create_msgs__action__AudioNoteSequence_Feedback__init(&msg->feedback)) {
    irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(&msg->feedback);
}

bool
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__are_equal(const irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * lhs, const irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * rhs)
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
  if (!irobot_create_msgs__action__AudioNoteSequence_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__copy(
  const irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * input,
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * output)
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
  if (!irobot_create_msgs__action__AudioNoteSequence_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage *
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__create()
{
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * msg = (irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage));
  bool success = irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__destroy(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * msg)
{
  if (msg) {
    irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__init(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * data = NULL;
  if (size) {
    data = (irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage *)calloc(size, sizeof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(&data[i - 1]);
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
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__fini(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(&array->data[i]);
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

irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence *
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__create(size_t size)
{
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * array = (irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence *)malloc(sizeof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__destroy(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * array)
{
  if (array) {
    irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__are_equal(const irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * lhs, const irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence__copy(
  const irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * input,
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage);
    irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * data =
      (irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(&data[i]);
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
    if (!irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
