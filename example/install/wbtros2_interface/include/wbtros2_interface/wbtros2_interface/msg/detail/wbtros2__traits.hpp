// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wbtros2_interface:msg/Wbtros2.idl
// generated code does not contain a copyright notice

#ifndef WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__TRAITS_HPP_
#define WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wbtros2_interface/msg/detail/wbtros2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wbtros2_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Wbtros2 & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: payload
  {
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Wbtros2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload: ";
    rosidl_generator_traits::value_to_yaml(msg.payload, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wbtros2 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wbtros2_interface

namespace rosidl_generator_traits
{

[[deprecated("use wbtros2_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wbtros2_interface::msg::Wbtros2 & msg,
  std::ostream & out, size_t indentation = 0)
{
  wbtros2_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wbtros2_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const wbtros2_interface::msg::Wbtros2 & msg)
{
  return wbtros2_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wbtros2_interface::msg::Wbtros2>()
{
  return "wbtros2_interface::msg::Wbtros2";
}

template<>
inline const char * name<wbtros2_interface::msg::Wbtros2>()
{
  return "wbtros2_interface/msg/Wbtros2";
}

template<>
struct has_fixed_size<wbtros2_interface::msg::Wbtros2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wbtros2_interface::msg::Wbtros2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wbtros2_interface::msg::Wbtros2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__TRAITS_HPP_
