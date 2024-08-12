// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wbtros2_interface:msg/Wbtros2.idl
// generated code does not contain a copyright notice

#ifndef WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__BUILDER_HPP_
#define WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wbtros2_interface/msg/detail/wbtros2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wbtros2_interface
{

namespace msg
{

namespace builder
{

class Init_Wbtros2_payload
{
public:
  explicit Init_Wbtros2_payload(::wbtros2_interface::msg::Wbtros2 & msg)
  : msg_(msg)
  {}
  ::wbtros2_interface::msg::Wbtros2 payload(::wbtros2_interface::msg::Wbtros2::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wbtros2_interface::msg::Wbtros2 msg_;
};

class Init_Wbtros2_topic
{
public:
  Init_Wbtros2_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Wbtros2_payload topic(::wbtros2_interface::msg::Wbtros2::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_Wbtros2_payload(msg_);
  }

private:
  ::wbtros2_interface::msg::Wbtros2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wbtros2_interface::msg::Wbtros2>()
{
  return wbtros2_interface::msg::builder::Init_Wbtros2_topic();
}

}  // namespace wbtros2_interface

#endif  // WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__BUILDER_HPP_
