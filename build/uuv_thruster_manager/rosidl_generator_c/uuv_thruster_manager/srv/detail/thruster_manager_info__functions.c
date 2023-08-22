// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uuv_thruster_manager:srv/ThrusterManagerInfo.idl
// generated code does not contain a copyright notice
#include "uuv_thruster_manager/srv/detail/thruster_manager_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__init(uuv_thruster_manager__srv__ThrusterManagerInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__fini(uuv_thruster_manager__srv__ThrusterManagerInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__are_equal(const uuv_thruster_manager__srv__ThrusterManagerInfo_Request * lhs, const uuv_thruster_manager__srv__ThrusterManagerInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__copy(
  const uuv_thruster_manager__srv__ThrusterManagerInfo_Request * input,
  uuv_thruster_manager__srv__ThrusterManagerInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

uuv_thruster_manager__srv__ThrusterManagerInfo_Request *
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__ThrusterManagerInfo_Request * msg = (uuv_thruster_manager__srv__ThrusterManagerInfo_Request *)allocator.allocate(sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Request));
  bool success = uuv_thruster_manager__srv__ThrusterManagerInfo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__destroy(uuv_thruster_manager__srv__ThrusterManagerInfo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_thruster_manager__srv__ThrusterManagerInfo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__init(uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__ThrusterManagerInfo_Request * data = NULL;

  if (size) {
    data = (uuv_thruster_manager__srv__ThrusterManagerInfo_Request *)allocator.zero_allocate(size, sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_thruster_manager__srv__ThrusterManagerInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_thruster_manager__srv__ThrusterManagerInfo_Request__fini(&data[i - 1]);
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
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__fini(uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * array)
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
      uuv_thruster_manager__srv__ThrusterManagerInfo_Request__fini(&array->data[i]);
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

uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence *
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * array = (uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence *)allocator.allocate(sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__destroy(uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__are_equal(const uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * lhs, const uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_thruster_manager__srv__ThrusterManagerInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence__copy(
  const uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * input,
  uuv_thruster_manager__srv__ThrusterManagerInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Request);
    uuv_thruster_manager__srv__ThrusterManagerInfo_Request * data =
      (uuv_thruster_manager__srv__ThrusterManagerInfo_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_thruster_manager__srv__ThrusterManagerInfo_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_thruster_manager__srv__ThrusterManagerInfo_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_thruster_manager__srv__ThrusterManagerInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `allocation_matrix`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `reference_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__init(uuv_thruster_manager__srv__ThrusterManagerInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // n_thrusters
  // allocation_matrix
  if (!rosidl_runtime_c__double__Sequence__init(&msg->allocation_matrix, 0)) {
    uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(msg);
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__init(&msg->reference_frame)) {
    uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(uuv_thruster_manager__srv__ThrusterManagerInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // n_thrusters
  // allocation_matrix
  rosidl_runtime_c__double__Sequence__fini(&msg->allocation_matrix);
  // reference_frame
  rosidl_runtime_c__String__fini(&msg->reference_frame);
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__are_equal(const uuv_thruster_manager__srv__ThrusterManagerInfo_Response * lhs, const uuv_thruster_manager__srv__ThrusterManagerInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // n_thrusters
  if (lhs->n_thrusters != rhs->n_thrusters) {
    return false;
  }
  // allocation_matrix
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->allocation_matrix), &(rhs->allocation_matrix)))
  {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reference_frame), &(rhs->reference_frame)))
  {
    return false;
  }
  return true;
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__copy(
  const uuv_thruster_manager__srv__ThrusterManagerInfo_Response * input,
  uuv_thruster_manager__srv__ThrusterManagerInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // n_thrusters
  output->n_thrusters = input->n_thrusters;
  // allocation_matrix
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->allocation_matrix), &(output->allocation_matrix)))
  {
    return false;
  }
  // reference_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->reference_frame), &(output->reference_frame)))
  {
    return false;
  }
  return true;
}

uuv_thruster_manager__srv__ThrusterManagerInfo_Response *
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__ThrusterManagerInfo_Response * msg = (uuv_thruster_manager__srv__ThrusterManagerInfo_Response *)allocator.allocate(sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Response));
  bool success = uuv_thruster_manager__srv__ThrusterManagerInfo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__destroy(uuv_thruster_manager__srv__ThrusterManagerInfo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__init(uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__ThrusterManagerInfo_Response * data = NULL;

  if (size) {
    data = (uuv_thruster_manager__srv__ThrusterManagerInfo_Response *)allocator.zero_allocate(size, sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uuv_thruster_manager__srv__ThrusterManagerInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(&data[i - 1]);
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
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__fini(uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * array)
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
      uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(&array->data[i]);
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

uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence *
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * array = (uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence *)allocator.allocate(sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__destroy(uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__are_equal(const uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * lhs, const uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uuv_thruster_manager__srv__ThrusterManagerInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence__copy(
  const uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * input,
  uuv_thruster_manager__srv__ThrusterManagerInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uuv_thruster_manager__srv__ThrusterManagerInfo_Response);
    uuv_thruster_manager__srv__ThrusterManagerInfo_Response * data =
      (uuv_thruster_manager__srv__ThrusterManagerInfo_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uuv_thruster_manager__srv__ThrusterManagerInfo_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          uuv_thruster_manager__srv__ThrusterManagerInfo_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uuv_thruster_manager__srv__ThrusterManagerInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
