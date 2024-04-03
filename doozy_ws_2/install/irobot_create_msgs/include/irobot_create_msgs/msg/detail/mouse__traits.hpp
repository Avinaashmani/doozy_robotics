// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/Mouse.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__TRAITS_HPP_

#include "irobot_create_msgs/msg/detail/mouse__struct.hpp"
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
  const irobot_create_msgs::msg::Mouse & msg,
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

  // member: integrated_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrated_x: ";
    value_to_yaml(msg.integrated_x, out);
    out << "\n";
  }

  // member: integrated_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrated_y: ";
    value_to_yaml(msg.integrated_y, out);
    out << "\n";
  }

  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: last_squal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_squal: ";
    value_to_yaml(msg.last_squal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::msg::Mouse & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::msg::Mouse>()
{
  return "irobot_create_msgs::msg::Mouse";
}

template<>
inline const char * name<irobot_create_msgs::msg::Mouse>()
{
  return "irobot_create_msgs/msg/Mouse";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::Mouse>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::Mouse>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::Mouse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__TRAITS_HPP_
