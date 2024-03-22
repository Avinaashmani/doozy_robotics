// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from apriltag_msgs:msg/AprilTagDetection.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__TRAITS_HPP_
#define APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__TRAITS_HPP_

#include "apriltag_msgs/msg/detail/april_tag_detection__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'centre'
// Member 'corners'
#include "apriltag_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const apriltag_msgs::msg::AprilTagDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: family
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "family: ";
    value_to_yaml(msg.family, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: hamming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hamming: ";
    value_to_yaml(msg.hamming, out);
    out << "\n";
  }

  // member: goodness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goodness: ";
    value_to_yaml(msg.goodness, out);
    out << "\n";
  }

  // member: decision_margin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision_margin: ";
    value_to_yaml(msg.decision_margin, out);
    out << "\n";
  }

  // member: centre
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "centre:\n";
    to_yaml(msg.centre, out, indentation + 2);
  }

  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: homography
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.homography.size() == 0) {
      out << "homography: []\n";
    } else {
      out << "homography:\n";
      for (auto item : msg.homography) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const apriltag_msgs::msg::AprilTagDetection & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<apriltag_msgs::msg::AprilTagDetection>()
{
  return "apriltag_msgs::msg::AprilTagDetection";
}

template<>
inline const char * name<apriltag_msgs::msg::AprilTagDetection>()
{
  return "apriltag_msgs/msg/AprilTagDetection";
}

template<>
struct has_fixed_size<apriltag_msgs::msg::AprilTagDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<apriltag_msgs::msg::AprilTagDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<apriltag_msgs::msg::AprilTagDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // APRILTAG_MSGS__MSG__DETAIL__APRIL_TAG_DETECTION__TRAITS_HPP_
