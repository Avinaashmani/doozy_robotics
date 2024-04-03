// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:srv/EStop.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__E_STOP__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__E_STOP__TRAITS_HPP_

#include "irobot_create_msgs/srv/detail/e_stop__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const irobot_create_msgs::srv::EStop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: e_stop_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e_stop_on: ";
    value_to_yaml(msg.e_stop_on, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::srv::EStop_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::srv::EStop_Request>()
{
  return "irobot_create_msgs::srv::EStop_Request";
}

template<>
inline const char * name<irobot_create_msgs::srv::EStop_Request>()
{
  return "irobot_create_msgs/srv/EStop_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::EStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::srv::EStop_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::srv::EStop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const irobot_create_msgs::srv::EStop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const irobot_create_msgs::srv::EStop_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<irobot_create_msgs::srv::EStop_Response>()
{
  return "irobot_create_msgs::srv::EStop_Response";
}

template<>
inline const char * name<irobot_create_msgs::srv::EStop_Response>()
{
  return "irobot_create_msgs/srv/EStop_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::EStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irobot_create_msgs::srv::EStop_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irobot_create_msgs::srv::EStop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::srv::EStop>()
{
  return "irobot_create_msgs::srv::EStop";
}

template<>
inline const char * name<irobot_create_msgs::srv::EStop>()
{
  return "irobot_create_msgs/srv/EStop";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::EStop>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::srv::EStop_Request>::value &&
    has_fixed_size<irobot_create_msgs::srv::EStop_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::srv::EStop>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::srv::EStop_Request>::value &&
    has_bounded_size<irobot_create_msgs::srv::EStop_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::srv::EStop>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::srv::EStop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::srv::EStop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__E_STOP__TRAITS_HPP_
