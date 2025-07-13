// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from customs:msg/AddressBook.idl
// generated code does not contain a copyright notice
#include "customs/msg/detail/address_book__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first_name`
// Member `last_name`
// Member `phone_number`
// Member `phone_type`
#include "rosidl_runtime_c/string_functions.h"

bool
customs__msg__AddressBook__init(customs__msg__AddressBook * msg)
{
  if (!msg) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    customs__msg__AddressBook__fini(msg);
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    customs__msg__AddressBook__fini(msg);
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__init(&msg->phone_number)) {
    customs__msg__AddressBook__fini(msg);
    return false;
  }
  // phone_type
  if (!rosidl_runtime_c__String__init(&msg->phone_type)) {
    customs__msg__AddressBook__fini(msg);
    return false;
  }
  return true;
}

void
customs__msg__AddressBook__fini(customs__msg__AddressBook * msg)
{
  if (!msg) {
    return;
  }
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // phone_number
  rosidl_runtime_c__String__fini(&msg->phone_number);
  // phone_type
  rosidl_runtime_c__String__fini(&msg->phone_type);
}

bool
customs__msg__AddressBook__are_equal(const customs__msg__AddressBook * lhs, const customs__msg__AddressBook * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->phone_number), &(rhs->phone_number)))
  {
    return false;
  }
  // phone_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->phone_type), &(rhs->phone_type)))
  {
    return false;
  }
  return true;
}

bool
customs__msg__AddressBook__copy(
  const customs__msg__AddressBook * input,
  customs__msg__AddressBook * output)
{
  if (!input || !output) {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // phone_number
  if (!rosidl_runtime_c__String__copy(
      &(input->phone_number), &(output->phone_number)))
  {
    return false;
  }
  // phone_type
  if (!rosidl_runtime_c__String__copy(
      &(input->phone_type), &(output->phone_type)))
  {
    return false;
  }
  return true;
}

customs__msg__AddressBook *
customs__msg__AddressBook__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__msg__AddressBook * msg = (customs__msg__AddressBook *)allocator.allocate(sizeof(customs__msg__AddressBook), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customs__msg__AddressBook));
  bool success = customs__msg__AddressBook__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
customs__msg__AddressBook__destroy(customs__msg__AddressBook * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    customs__msg__AddressBook__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
customs__msg__AddressBook__Sequence__init(customs__msg__AddressBook__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__msg__AddressBook * data = NULL;

  if (size) {
    data = (customs__msg__AddressBook *)allocator.zero_allocate(size, sizeof(customs__msg__AddressBook), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customs__msg__AddressBook__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customs__msg__AddressBook__fini(&data[i - 1]);
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
customs__msg__AddressBook__Sequence__fini(customs__msg__AddressBook__Sequence * array)
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
      customs__msg__AddressBook__fini(&array->data[i]);
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

customs__msg__AddressBook__Sequence *
customs__msg__AddressBook__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__msg__AddressBook__Sequence * array = (customs__msg__AddressBook__Sequence *)allocator.allocate(sizeof(customs__msg__AddressBook__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = customs__msg__AddressBook__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
customs__msg__AddressBook__Sequence__destroy(customs__msg__AddressBook__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    customs__msg__AddressBook__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
customs__msg__AddressBook__Sequence__are_equal(const customs__msg__AddressBook__Sequence * lhs, const customs__msg__AddressBook__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!customs__msg__AddressBook__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
customs__msg__AddressBook__Sequence__copy(
  const customs__msg__AddressBook__Sequence * input,
  customs__msg__AddressBook__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(customs__msg__AddressBook);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    customs__msg__AddressBook * data =
      (customs__msg__AddressBook *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!customs__msg__AddressBook__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          customs__msg__AddressBook__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!customs__msg__AddressBook__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
