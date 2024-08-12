// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wbtros2_interface:msg/Wbtros2.idl
// generated code does not contain a copyright notice

#ifndef WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__STRUCT_HPP_
#define WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wbtros2_interface__msg__Wbtros2 __attribute__((deprecated))
#else
# define DEPRECATED__wbtros2_interface__msg__Wbtros2 __declspec(deprecated)
#endif

namespace wbtros2_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wbtros2_
{
  using Type = Wbtros2_<ContainerAllocator>;

  explicit Wbtros2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
      this->payload = "";
    }
  }

  explicit Wbtros2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc),
    payload(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
      this->payload = "";
    }
  }

  // field types and members
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;
  using _payload_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }
  Type & set__payload(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wbtros2_interface::msg::Wbtros2_<ContainerAllocator> *;
  using ConstRawPtr =
    const wbtros2_interface::msg::Wbtros2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wbtros2_interface::msg::Wbtros2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wbtros2_interface::msg::Wbtros2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wbtros2_interface__msg__Wbtros2
    std::shared_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wbtros2_interface__msg__Wbtros2
    std::shared_ptr<wbtros2_interface::msg::Wbtros2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wbtros2_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wbtros2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wbtros2_

// alias to use template instance with default allocator
using Wbtros2 =
  wbtros2_interface::msg::Wbtros2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wbtros2_interface

#endif  // WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__STRUCT_HPP_
