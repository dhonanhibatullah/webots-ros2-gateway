// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wbtros2_interface:msg/Wbtros2.idl
// generated code does not contain a copyright notice
#include "wbtros2_interface/msg/detail/wbtros2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic`
// Member `payload`
#include "rosidl_runtime_c/string_functions.h"

bool
wbtros2_interface__msg__Wbtros2__init(wbtros2_interface__msg__Wbtros2 * msg)
{
  if (!msg) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    wbtros2_interface__msg__Wbtros2__fini(msg);
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__init(&msg->payload)) {
    wbtros2_interface__msg__Wbtros2__fini(msg);
    return false;
  }
  return true;
}

void
wbtros2_interface__msg__Wbtros2__fini(wbtros2_interface__msg__Wbtros2 * msg)
{
  if (!msg) {
    return;
  }
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // payload
  rosidl_runtime_c__String__fini(&msg->payload);
}

bool
wbtros2_interface__msg__Wbtros2__are_equal(const wbtros2_interface__msg__Wbtros2 * lhs, const wbtros2_interface__msg__Wbtros2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
wbtros2_interface__msg__Wbtros2__copy(
  const wbtros2_interface__msg__Wbtros2 * input,
  wbtros2_interface__msg__Wbtros2 * output)
{
  if (!input || !output) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__String__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

wbtros2_interface__msg__Wbtros2 *
wbtros2_interface__msg__Wbtros2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wbtros2_interface__msg__Wbtros2 * msg = (wbtros2_interface__msg__Wbtros2 *)allocator.allocate(sizeof(wbtros2_interface__msg__Wbtros2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wbtros2_interface__msg__Wbtros2));
  bool success = wbtros2_interface__msg__Wbtros2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wbtros2_interface__msg__Wbtros2__destroy(wbtros2_interface__msg__Wbtros2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wbtros2_interface__msg__Wbtros2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wbtros2_interface__msg__Wbtros2__Sequence__init(wbtros2_interface__msg__Wbtros2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wbtros2_interface__msg__Wbtros2 * data = NULL;

  if (size) {
    data = (wbtros2_interface__msg__Wbtros2 *)allocator.zero_allocate(size, sizeof(wbtros2_interface__msg__Wbtros2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wbtros2_interface__msg__Wbtros2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wbtros2_interface__msg__Wbtros2__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wbtros2_interface__msg__Wbtros2__Sequence__fini(wbtros2_interface__msg__Wbtros2__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wbtros2_interface__msg__Wbtros2__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wbtros2_interface__msg__Wbtros2__Sequence *
wbtros2_interface__msg__Wbtros2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wbtros2_interface__msg__Wbtros2__Sequence * array = (wbtros2_interface__msg__Wbtros2__Sequence *)allocator.allocate(sizeof(wbtros2_interface__msg__Wbtros2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wbtros2_interface__msg__Wbtros2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wbtros2_interface__msg__Wbtros2__Sequence__destroy(wbtros2_interface__msg__Wbtros2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wbtros2_interface__msg__Wbtros2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wbtros2_interface__msg__Wbtros2__Sequence__are_equal(const wbtros2_interface__msg__Wbtros2__Sequence * lhs, const wbtros2_interface__msg__Wbtros2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wbtros2_interface__msg__Wbtros2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wbtros2_interface__msg__Wbtros2__Sequence__copy(
  const wbtros2_interface__msg__Wbtros2__Sequence * input,
  wbtros2_interface__msg__Wbtros2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wbtros2_interface__msg__Wbtros2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wbtros2_interface__msg__Wbtros2 * data =
      (wbtros2_interface__msg__Wbtros2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wbtros2_interface__msg__Wbtros2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wbtros2_interface__msg__Wbtros2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wbtros2_interface__msg__Wbtros2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
