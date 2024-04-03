// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlebot4_msgs:msg/UserDisplay.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT4_MSGS__MSG__DETAIL__USER_DISPLAY__TRAITS_HPP_
#define TURTLEBOT4_MSGS__MSG__DETAIL__USER_DISPLAY__TRAITS_HPP_

#include "turtlebot4_msgs/msg/detail/user_display__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const turtlebot4_msgs::msg::UserDisplay & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ip: ";
    value_to_yaml(msg.ip, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: entries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.entries.size() == 0) {
      out << "entries: []\n";
    } else {
      out << "entries:\n";
      for (auto item : msg.entries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: selected_entry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_entry: ";
    value_to_yaml(msg.selected_entry, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const turtlebot4_msgs::msg::UserDisplay & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<turtlebot4_msgs::msg::UserDisplay>()
{
  return "turtlebot4_msgs::msg::UserDisplay";
}

template<>
inline const char * name<turtlebot4_msgs::msg::UserDisplay>()
{
  return "turtlebot4_msgs/msg/UserDisplay";
}

template<>
struct has_fixed_size<turtlebot4_msgs::msg::UserDisplay>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlebot4_msgs::msg::UserDisplay>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlebot4_msgs::msg::UserDisplay>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLEBOT4_MSGS__MSG__DETAIL__USER_DISPLAY__TRAITS_HPP_
