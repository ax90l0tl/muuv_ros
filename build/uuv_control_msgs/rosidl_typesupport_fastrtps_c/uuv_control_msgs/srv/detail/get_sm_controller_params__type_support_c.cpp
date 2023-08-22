// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from uuv_control_msgs:srv/GetSMControllerParams.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/get_sm_controller_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_control_msgs/srv/detail/get_sm_controller_params__struct.h"
#include "uuv_control_msgs/srv/detail/get_sm_controller_params__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetSMControllerParams_Request__ros_msg_type = uuv_control_msgs__srv__GetSMControllerParams_Request;

static bool _GetSMControllerParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetSMControllerParams_Request__ros_msg_type * ros_message = static_cast<const _GetSMControllerParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetSMControllerParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetSMControllerParams_Request__ros_msg_type * ros_message = static_cast<_GetSMControllerParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetSMControllerParams_Request__ros_msg_type * ros_message = static_cast<const _GetSMControllerParams_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetSMControllerParams_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetSMControllerParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetSMControllerParams_Request = {
  "uuv_control_msgs::srv",
  "GetSMControllerParams_Request",
  _GetSMControllerParams_Request__cdr_serialize,
  _GetSMControllerParams_Request__cdr_deserialize,
  _GetSMControllerParams_Request__get_serialized_size,
  _GetSMControllerParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetSMControllerParams_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetSMControllerParams_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetSMControllerParams_Request)() {
  return &_GetSMControllerParams_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_sm_controller_params__struct.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_sm_controller_params__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // k, kd, ki, slope
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // k, kd, ki, slope

// forward declare type support functions


using _GetSMControllerParams_Response__ros_msg_type = uuv_control_msgs__srv__GetSMControllerParams_Response;

static bool _GetSMControllerParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetSMControllerParams_Response__ros_msg_type * ros_message = static_cast<const _GetSMControllerParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: k
  {
    size_t size = ros_message->k.size;
    auto array_ptr = ros_message->k.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: kd
  {
    size_t size = ros_message->kd.size;
    auto array_ptr = ros_message->kd.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ki
  {
    size_t size = ros_message->ki.size;
    auto array_ptr = ros_message->ki.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: slope
  {
    size_t size = ros_message->slope.size;
    auto array_ptr = ros_message->slope.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetSMControllerParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetSMControllerParams_Response__ros_msg_type * ros_message = static_cast<_GetSMControllerParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: k
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->k.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->k);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->k, size)) {
      return "failed to create array for field 'k'";
    }
    auto array_ptr = ros_message->k.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: kd
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->kd.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->kd);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->kd, size)) {
      return "failed to create array for field 'kd'";
    }
    auto array_ptr = ros_message->kd.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ki
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ki.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ki);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ki, size)) {
      return "failed to create array for field 'ki'";
    }
    auto array_ptr = ros_message->ki.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: slope
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->slope.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->slope);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->slope, size)) {
      return "failed to create array for field 'slope'";
    }
    auto array_ptr = ros_message->slope.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t get_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetSMControllerParams_Response__ros_msg_type * ros_message = static_cast<const _GetSMControllerParams_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name k
  {
    size_t array_size = ros_message->k.size;
    auto array_ptr = ros_message->k.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t array_size = ros_message->kd.size;
    auto array_ptr = ros_message->kd.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ki
  {
    size_t array_size = ros_message->ki.size;
    auto array_ptr = ros_message->ki.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slope
  {
    size_t array_size = ros_message->slope.size;
    auto array_ptr = ros_message->slope.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetSMControllerParams_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_uuv_control_msgs
size_t max_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: k
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kd
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ki
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: slope
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetSMControllerParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_uuv_control_msgs__srv__GetSMControllerParams_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetSMControllerParams_Response = {
  "uuv_control_msgs::srv",
  "GetSMControllerParams_Response",
  _GetSMControllerParams_Response__cdr_serialize,
  _GetSMControllerParams_Response__cdr_deserialize,
  _GetSMControllerParams_Response__get_serialized_size,
  _GetSMControllerParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetSMControllerParams_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetSMControllerParams_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetSMControllerParams_Response)() {
  return &_GetSMControllerParams_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "uuv_control_msgs/srv/get_sm_controller_params.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetSMControllerParams__callbacks = {
  "uuv_control_msgs::srv",
  "GetSMControllerParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetSMControllerParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetSMControllerParams_Response)(),
};

static rosidl_service_type_support_t GetSMControllerParams__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetSMControllerParams__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_control_msgs, srv, GetSMControllerParams)() {
  return &GetSMControllerParams__handle;
}

#if defined(__cplusplus)
}
#endif
