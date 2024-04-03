// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/LedColor.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__TRAITS_HPP_

#include "irobot_create_msgs/msg/detail/led_color__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const irobot_create_msgs::msg::LedColor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: red
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red: ";
    value_to_yaml(msg.red, out);
    out << "\n";
  }

  // member: green
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "green: ";
    value_to_yaml(msg.green, out);
    out << "\n";
  }

  // member: blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue: ";
    value_to_yaml(msg.blue, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::msg::LedColor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::msg::LedColor>()
{
  return "irobot_create_msgs::msg::LedColor";
}

template<>
inline const char * name<irobot_create_msgs::msg::LedColor>()
{
  return "irobot_create_msgs/msg/LedColor";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::LedColor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::LedColor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::msg::LedColor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__TRAITS_HPP_
