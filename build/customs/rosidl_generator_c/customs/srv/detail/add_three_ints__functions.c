// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from customs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "customs/srv/detail/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
customs__srv__AddThreeInts_Request__init(customs__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
customs__srv__AddThreeInts_Request__fini(customs__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

bool
customs__srv__AddThreeInts_Request__are_equal(const customs__srv__AddThreeInts_Request * lhs, const customs__srv__AddThreeInts_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  // c
  if (lhs->c != rhs->c) {
    return false;
  }
  return true;
}

bool
customs__srv__AddThreeInts_Request__copy(
  const customs__srv__AddThreeInts_Request * input,
  customs__srv__AddThreeInts_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  // c
  output->c = input->c;
  return true;
}

customs__srv__AddThreeInts_Request *
customs__srv__AddThreeInts_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Request * msg = (customs__srv__AddThreeInts_Request *)allocator.allocate(sizeof(customs__srv__AddThreeInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customs__srv__AddThreeInts_Request));
  bool success = customs__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
customs__srv__AddThreeInts_Request__destroy(customs__srv__AddThreeInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    customs__srv__AddThreeInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
customs__srv__AddThreeInts_Request__Sequence__init(customs__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Request * data = NULL;

  if (size) {
    data = (customs__srv__AddThreeInts_Request *)allocator.zero_allocate(size, sizeof(customs__srv__AddThreeInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customs__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customs__srv__AddThreeInts_Request__fini(&data[i - 1]);
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
customs__srv__AddThreeInts_Request__Sequence__fini(customs__srv__AddThreeInts_Request__Sequence * array)
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
      customs__srv__AddThreeInts_Request__fini(&array->data[i]);
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

customs__srv__AddThreeInts_Request__Sequence *
customs__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Request__Sequence * array = (customs__srv__AddThreeInts_Request__Sequence *)allocator.allocate(sizeof(customs__srv__AddThreeInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = customs__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
customs__srv__AddThreeInts_Request__Sequence__destroy(customs__srv__AddThreeInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    customs__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
customs__srv__AddThreeInts_Request__Sequence__are_equal(const customs__srv__AddThreeInts_Request__Sequence * lhs, const customs__srv__AddThreeInts_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!customs__srv__AddThreeInts_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
customs__srv__AddThreeInts_Request__Sequence__copy(
  const customs__srv__AddThreeInts_Request__Sequence * input,
  customs__srv__AddThreeInts_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(customs__srv__AddThreeInts_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    customs__srv__AddThreeInts_Request * data =
      (customs__srv__AddThreeInts_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!customs__srv__AddThreeInts_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          customs__srv__AddThreeInts_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!customs__srv__AddThreeInts_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
customs__srv__AddThreeInts_Response__init(customs__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
customs__srv__AddThreeInts_Response__fini(customs__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
customs__srv__AddThreeInts_Response__are_equal(const customs__srv__AddThreeInts_Response * lhs, const customs__srv__AddThreeInts_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
customs__srv__AddThreeInts_Response__copy(
  const customs__srv__AddThreeInts_Response * input,
  customs__srv__AddThreeInts_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

customs__srv__AddThreeInts_Response *
customs__srv__AddThreeInts_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Response * msg = (customs__srv__AddThreeInts_Response *)allocator.allocate(sizeof(customs__srv__AddThreeInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customs__srv__AddThreeInts_Response));
  bool success = customs__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
customs__srv__AddThreeInts_Response__destroy(customs__srv__AddThreeInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    customs__srv__AddThreeInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
customs__srv__AddThreeInts_Response__Sequence__init(customs__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Response * data = NULL;

  if (size) {
    data = (customs__srv__AddThreeInts_Response *)allocator.zero_allocate(size, sizeof(customs__srv__AddThreeInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customs__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customs__srv__AddThreeInts_Response__fini(&data[i - 1]);
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
customs__srv__AddThreeInts_Response__Sequence__fini(customs__srv__AddThreeInts_Response__Sequence * array)
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
      customs__srv__AddThreeInts_Response__fini(&array->data[i]);
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

customs__srv__AddThreeInts_Response__Sequence *
customs__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Response__Sequence * array = (customs__srv__AddThreeInts_Response__Sequence *)allocator.allocate(sizeof(customs__srv__AddThreeInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = customs__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
customs__srv__AddThreeInts_Response__Sequence__destroy(customs__srv__AddThreeInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    customs__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
customs__srv__AddThreeInts_Response__Sequence__are_equal(const customs__srv__AddThreeInts_Response__Sequence * lhs, const customs__srv__AddThreeInts_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!customs__srv__AddThreeInts_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
customs__srv__AddThreeInts_Response__Sequence__copy(
  const customs__srv__AddThreeInts_Response__Sequence * input,
  customs__srv__AddThreeInts_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(customs__srv__AddThreeInts_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    customs__srv__AddThreeInts_Response * data =
      (customs__srv__AddThreeInts_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!customs__srv__AddThreeInts_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          customs__srv__AddThreeInts_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!customs__srv__AddThreeInts_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "customs/srv/detail/add_three_ints__functions.h"

bool
customs__srv__AddThreeInts_Event__init(customs__srv__AddThreeInts_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    customs__srv__AddThreeInts_Event__fini(msg);
    return false;
  }
  // request
  if (!customs__srv__AddThreeInts_Request__Sequence__init(&msg->request, 0)) {
    customs__srv__AddThreeInts_Event__fini(msg);
    return false;
  }
  // response
  if (!customs__srv__AddThreeInts_Response__Sequence__init(&msg->response, 0)) {
    customs__srv__AddThreeInts_Event__fini(msg);
    return false;
  }
  return true;
}

void
customs__srv__AddThreeInts_Event__fini(customs__srv__AddThreeInts_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  customs__srv__AddThreeInts_Request__Sequence__fini(&msg->request);
  // response
  customs__srv__AddThreeInts_Response__Sequence__fini(&msg->response);
}

bool
customs__srv__AddThreeInts_Event__are_equal(const customs__srv__AddThreeInts_Event * lhs, const customs__srv__AddThreeInts_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!customs__srv__AddThreeInts_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!customs__srv__AddThreeInts_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
customs__srv__AddThreeInts_Event__copy(
  const customs__srv__AddThreeInts_Event * input,
  customs__srv__AddThreeInts_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!customs__srv__AddThreeInts_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!customs__srv__AddThreeInts_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

customs__srv__AddThreeInts_Event *
customs__srv__AddThreeInts_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Event * msg = (customs__srv__AddThreeInts_Event *)allocator.allocate(sizeof(customs__srv__AddThreeInts_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customs__srv__AddThreeInts_Event));
  bool success = customs__srv__AddThreeInts_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
customs__srv__AddThreeInts_Event__destroy(customs__srv__AddThreeInts_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    customs__srv__AddThreeInts_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
customs__srv__AddThreeInts_Event__Sequence__init(customs__srv__AddThreeInts_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Event * data = NULL;

  if (size) {
    data = (customs__srv__AddThreeInts_Event *)allocator.zero_allocate(size, sizeof(customs__srv__AddThreeInts_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customs__srv__AddThreeInts_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customs__srv__AddThreeInts_Event__fini(&data[i - 1]);
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
customs__srv__AddThreeInts_Event__Sequence__fini(customs__srv__AddThreeInts_Event__Sequence * array)
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
      customs__srv__AddThreeInts_Event__fini(&array->data[i]);
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

customs__srv__AddThreeInts_Event__Sequence *
customs__srv__AddThreeInts_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customs__srv__AddThreeInts_Event__Sequence * array = (customs__srv__AddThreeInts_Event__Sequence *)allocator.allocate(sizeof(customs__srv__AddThreeInts_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = customs__srv__AddThreeInts_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
customs__srv__AddThreeInts_Event__Sequence__destroy(customs__srv__AddThreeInts_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    customs__srv__AddThreeInts_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
customs__srv__AddThreeInts_Event__Sequence__are_equal(const customs__srv__AddThreeInts_Event__Sequence * lhs, const customs__srv__AddThreeInts_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!customs__srv__AddThreeInts_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
customs__srv__AddThreeInts_Event__Sequence__copy(
  const customs__srv__AddThreeInts_Event__Sequence * input,
  customs__srv__AddThreeInts_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(customs__srv__AddThreeInts_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    customs__srv__AddThreeInts_Event * data =
      (customs__srv__AddThreeInts_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!customs__srv__AddThreeInts_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          customs__srv__AddThreeInts_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!customs__srv__AddThreeInts_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
