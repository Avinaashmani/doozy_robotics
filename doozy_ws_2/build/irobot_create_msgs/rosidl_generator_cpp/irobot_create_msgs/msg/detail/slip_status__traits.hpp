// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/SlipStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__TRAITS_HPP_

#include "irobot_create_msgs/msg/detail/slip_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const irobot_create_msgs::msg::SlipStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: is_slipping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_slipping: ";
    value_to_yaml(msg.is_slipping, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::msg::SlipStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::msg::SlipStatus>()
{
  return "irobot_create_msgs::msg::SlipStatus";
}

template<>
inline const char * name<irobot_create_msgs::msg::SlipStatus>()
{
  return "irobot_create_msgs/msg/SlipStatus";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::SlipStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::SlipStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::SlipStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__TRAITS_HPP_
