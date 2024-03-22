// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from apriltag_msgs:msg/AprilTagDetectionArray.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__TRAITS_HPP_
#define APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__TRAITS_HPP_

#include "apriltag_msgs/msg/detail/april_tag_detection_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detections'
#include "apriltag_msgs/msg/detail/april_tag_detection__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const apriltag_msgs::msg::AprilTagDetectionArray & msg,
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

  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const apriltag_msgs::msg::AprilTagDetectionArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<apriltag_msgs::msg::AprilTagDetectionArray>()
{
  return "apriltag_msgs::msg::AprilTagDetectionArray";
}

template<>
inline const char * name<apriltag_msgs::msg::AprilTagDetectionArray>()
{
  return "apriltag_msgs/msg/AprilTagDetectionArray";
}

template<>
struct has_fixed_size<apriltag_msgs::msg::AprilTagDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<apriltag_msgs::msg::AprilTagDetectionArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<apriltag_msgs::msg::AprilTagDetectionArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION_ARRAY__TRAITS_HPP_
