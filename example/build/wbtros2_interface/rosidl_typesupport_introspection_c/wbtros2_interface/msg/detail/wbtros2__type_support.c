// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wbtros2_interface:msg/Wbtros2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wbtros2_interface/msg/detail/wbtros2__rosidl_typesupport_introspection_c.h"
#include "wbtros2_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wbtros2_interface/msg/detail/wbtros2__functions.h"
#include "wbtros2_interface/msg/detail/wbtros2__struct.h"


// Include directives for member types
// Member `topic`
// Member `payload`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wbtros2_interface__msg__Wbtros2__init(message_memory);
}

void wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_fini_function(void * message_memory)
{
  wbtros2_interface__msg__Wbtros2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_member_array[2] = {
  {
    "topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wbtros2_interface__msg__Wbtros2, topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wbtros2_interface__msg__Wbtros2, payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_members = {
  "wbtros2_interface__msg",  // message namespace
  "Wbtros2",  // message name
  2,  // number of fields
  sizeof(wbtros2_interface__msg__Wbtros2),
  wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_member_array,  // message members
  wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_init_function,  // function to initialize message memory (memory has to be allocated)
  wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_type_support_handle = {
  0,
  &wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wbtros2_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wbtros2_interface, msg, Wbtros2)() {
  if (!wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_type_support_handle.typesupport_identifier) {
    wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wbtros2_interface__msg__Wbtros2__rosidl_typesupport_introspection_c__Wbtros2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
