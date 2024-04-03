// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irobot_create_msgs:action/AudioNoteSequence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
#include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
#include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `note_sequence`
#include "irobot_create_msgs/msg/audio_note_vector.h"
// Member `note_sequence`
#include "irobot_create_msgs/msg/detail/audio_note_vector__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_Goal__init(message_memory);
}

void AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_member_array[2] = {
  {
    "iterations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Goal, iterations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "note_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Goal, note_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_Goal",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_Goal),
  AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_member_array,  // message members
  AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_type_support_handle = {
  0,
  &AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_Goal)() {
  AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, AudioNoteVector)();
  if (!AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_Goal__rosidl_typesupport_introspection_c__AudioNoteSequence_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `runtime`
#include "builtin_interfaces/msg/duration.h"
// Member `runtime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_Result__init(message_memory);
}

void AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_member_array[3] = {
  {
    "complete",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Result, complete),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iterations_played",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Result, iterations_played),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "runtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Result, runtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_Result",  // message name
  3,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_Result),
  AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_member_array,  // message members
  AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_type_support_handle = {
  0,
  &AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_Result)() {
  AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_Result__rosidl_typesupport_introspection_c__AudioNoteSequence_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `current_runtime`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `current_runtime`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_Feedback__init(message_memory);
}

void AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_member_array[2] = {
  {
    "iterations_played",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Feedback, iterations_played),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_runtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_Feedback, current_runtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_Feedback",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_Feedback),
  AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_member_array,  // message members
  AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_type_support_handle = {
  0,
  &AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_Feedback)() {
  AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_Feedback__rosidl_typesupport_introspection_c__AudioNoteSequence_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "irobot_create_msgs/action/audio_note_sequence.h"
// Member `goal`
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__init(message_memory);
}

void AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request),
  AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_member_array,  // message members
  AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_type_support_handle = {
  0,
  &AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Request)() {
  AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_Goal)();
  if (!AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_SendGoal_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__init(message_memory);
}

void AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response),
  AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_member_array,  // message members
  AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_type_support_handle = {
  0,
  &AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Response)() {
  AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_SendGoal_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_members = {
  "irobot_create_msgs__action",  // service namespace
  "AudioNoteSequence_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_type_support_handle = {
  0,
  &irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal)() {
  if (!irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Response)()->data;
  }

  return &irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__init(message_memory);
}

void AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Request),
  AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_member_array,  // message members
  AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_type_support_handle = {
  0,
  &AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult_Request)() {
  AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_GetResult_Request__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "irobot_create_msgs/action/audio_note_sequence.h"
// Member `result`
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__init(message_memory);
}

void AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_GetResult_Response),
  AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_member_array,  // message members
  AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_type_support_handle = {
  0,
  &AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult_Response)() {
  AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_Result)();
  if (!AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_GetResult_Response__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_members = {
  "irobot_create_msgs__action",  // service namespace
  "AudioNoteSequence_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_type_support_handle = {
  0,
  &irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult)() {
  if (!irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_GetResult_Response)()->data;
  }

  return &irobot_create_msgs__action__detail__audio_note_sequence__rosidl_typesupport_introspection_c__AudioNoteSequence_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "irobot_create_msgs/action/audio_note_sequence.h"
// Member `feedback`
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__init(message_memory);
}

void AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_fini_function(void * message_memory)
{
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "AudioNoteSequence_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage),
  AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_member_array,  // message members
  AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_type_support_handle = {
  0,
  &AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_FeedbackMessage)() {
  AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, AudioNoteSequence_Feedback)();
  if (!AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AudioNoteSequence_FeedbackMessage__rosidl_typesupport_introspection_c__AudioNoteSequence_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
