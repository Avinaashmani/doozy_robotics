// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/WheelStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__TRAITS_HPP_

#include "irobot_create_msgs/msg/detail/wheel_status__struct.hpp"
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
  const irobot_create_msgs::msg::WheelStatus & msg,
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

  // member: current_ma_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ma_left: ";
    value_to_yaml(msg.current_ma_left, out);
    out << "\n";
  }

  // member: current_ma_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ma_right: ";
    value_to_yaml(msg.current_ma_right, out);
    out << "\n";
  }

  // member: pwm_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_left: ";
    value_to_yaml(msg.pwm_left, out);
    out << "\n";
  }

  // member: pwm_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_right: ";
    value_to_yaml(msg.pwm_right, out);
    out << "\n";
  }

  // member: wheels_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheels_enabled: ";
    value_to_yaml(msg.wheels_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::msg::WheelStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::msg::WheelStatus>()
{
  return "irobot_create_msgs::msg::WheelStatus";
}

template<>
inline const char * name<irobot_create_msgs::msg::WheelStatus>()
{
  return "irobot_create_msgs/msg/WheelStatus";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::WheelStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::WheelStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::WheelStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__TRAITS_HPP_
