// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wbtros2_interface:msg/Wbtros2.idl
// generated code does not contain a copyright notice

#ifndef WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__STRUCT_H_
#define WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
// Member 'payload'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Wbtros2 in the package wbtros2_interface.
typedef struct wbtros2_interface__msg__Wbtros2
{
  rosidl_runtime_c__String topic;
  rosidl_runtime_c__String payload;
} wbtros2_interface__msg__Wbtros2;

// Struct for a sequence of wbtros2_interface__msg__Wbtros2.
typedef struct wbtros2_interface__msg__Wbtros2__Sequence
{
  wbtros2_interface__msg__Wbtros2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wbtros2_interface__msg__Wbtros2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WBTROS2_INTERFACE__MSG__DETAIL__WBTROS2__STRUCT_H_
