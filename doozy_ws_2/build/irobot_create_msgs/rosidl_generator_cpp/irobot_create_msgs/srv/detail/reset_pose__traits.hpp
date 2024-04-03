// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__TRAITS_HPP_

#include "irobot_create_msgs/srv/detail/reset_pose__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const irobot_create_msgs::srv::ResetPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::srv::ResetPose_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::srv::ResetPose_Request>()
{
  return "irobot_create_msgs::srv::ResetPose_Request";
}

template<>
inline const char * name<irobot_create_msgs::srv::ResetPose_Request>()
{
  return "irobot_create_msgs/srv/ResetPose_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::ResetPose_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::srv::ResetPose_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<irobot_create_msgs::srv::ResetPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const irobot_create_msgs::srv::ResetPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::srv::ResetPose_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::srv::ResetPose_Response>()
{
  return "irobot_create_msgs::srv::ResetPose_Response";
}

template<>
inline const char * name<irobot_create_msgs::srv::ResetPose_Response>()
{
  return "irobot_create_msgs/srv/ResetPose_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::ResetPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::srv::ResetPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::srv::ResetPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::srv::ResetPose>()
{
  return "irobot_create_msgs::srv::ResetPose";
}

template<>
inline const char * name<irobot_create_msgs::srv::ResetPose>()
{
  return "irobot_create_msgs/srv/ResetPose";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::ResetPose>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::srv::ResetPose_Request>::value &&
    has_fixed_size<irobot_create_msgs::srv::ResetPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::srv::ResetPose>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::srv::ResetPose_Request>::value &&
    has_bounded_size<irobot_create_msgs::srv::ResetPose_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::srv::ResetPose>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::srv::ResetPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::srv::ResetPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__TRAITS_HPP_
