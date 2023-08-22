// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_control_msgs:srv/SetMBSMControllerParams.idl
// generated code does not contain a copyright notice
#include "uuv_control_msgs/srv/detail/set_mbsm_controller_params__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_control_msgs/srv/detail/set_mbsm_controller_params__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_control_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
cdr_serialize(
  const uuv_control_msgs::srv::SetMBSMControllerParams_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lambda_array
  {
    cdr << ros_message.lambda_array;
  }
  // Member: rho_constant
  {
    cdr << ros_message.rho_constant;
  }
  // Member: k
  {
    cdr << ros_message.k;
  }
  // Member: c
  {
    cdr << ros_message.c;
  }
  // Member: adapt_slope
  {
    cdr << ros_message.adapt_slope;
  }
  // Member: rho_0
  {
    cdr << ros_message.rho_0;
  }
  // Member: drift_prevent
  cdr << ros_message.drift_prevent;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_control_msgs::srv::SetMBSMControllerParams_Request & ros_message)
{
  // Member: lambda_array
  {
    cdr >> ros_message.lambda_array;
  }

  // Member: rho_constant
  {
    cdr >> ros_message.rho_constant;
  }

  // Member: k
  {
    cdr >> ros_message.k;
  }

  // Member: c
  {
    cdr >> ros_message.c;
  }

  // Member: adapt_slope
  {
    cdr >> ros_message.adapt_slope;
  }

  // Member: rho_0
  {
    cdr >> ros_message.rho_0;
  }

  // Member: drift_prevent
  cdr >> ros_message.drift_prevent;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
get_serialized_size(
  const uuv_control_msgs::srv::SetMBSMControllerParams_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lambda_array
  {
    size_t array_size = ros_message.lambda_array.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.lambda_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rho_constant
  {
    size_t array_size = ros_message.rho_constant.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rho_constant[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: k
  {
    size_t array_size = ros_message.k.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.k[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: c
  {
    size_t array_size = ros_message.c.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.c[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adapt_slope
  {
    size_t array_size = ros_message.adapt_slope.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.adapt_slope[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rho_0
  {
    size_t array_size = ros_message.rho_0.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rho_0[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drift_prevent
  {
    size_t item_size = sizeof(ros_message.drift_prevent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
max_serialized_size_SetMBSMControllerParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lambda_array
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rho_constant
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: k
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: c
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: adapt_slope
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rho_0
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: drift_prevent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SetMBSMControllerParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_control_msgs::srv::SetMBSMControllerParams_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMBSMControllerParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_control_msgs::srv::SetMBSMControllerParams_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMBSMControllerParams_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_control_msgs::srv::SetMBSMControllerParams_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMBSMControllerParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetMBSMControllerParams_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetMBSMControllerParams_Request__callbacks = {
  "uuv_control_msgs::srv",
  "SetMBSMControllerParams_Request",
  _SetMBSMControllerParams_Request__cdr_serialize,
  _SetMBSMControllerParams_Request__cdr_deserialize,
  _SetMBSMControllerParams_Request__get_serialized_size,
  _SetMBSMControllerParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMBSMControllerParams_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMBSMControllerParams_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams_Request>()
{
  return &uuv_control_msgs::srv::typesupport_fastrtps_cpp::_SetMBSMControllerParams_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_control_msgs, srv, SetMBSMControllerParams_Request)() {
  return &uuv_control_msgs::srv::typesupport_fastrtps_cpp::_SetMBSMControllerParams_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace uuv_control_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
cdr_serialize(
  const uuv_control_msgs::srv::SetMBSMControllerParams_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_control_msgs::srv::SetMBSMControllerParams_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
get_serialized_size(
  const uuv_control_msgs::srv::SetMBSMControllerParams_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
max_serialized_size_SetMBSMControllerParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SetMBSMControllerParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_control_msgs::srv::SetMBSMControllerParams_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetMBSMControllerParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_control_msgs::srv::SetMBSMControllerParams_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetMBSMControllerParams_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_control_msgs::srv::SetMBSMControllerParams_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetMBSMControllerParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetMBSMControllerParams_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetMBSMControllerParams_Response__callbacks = {
  "uuv_control_msgs::srv",
  "SetMBSMControllerParams_Response",
  _SetMBSMControllerParams_Response__cdr_serialize,
  _SetMBSMControllerParams_Response__cdr_deserialize,
  _SetMBSMControllerParams_Response__get_serialized_size,
  _SetMBSMControllerParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMBSMControllerParams_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMBSMControllerParams_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams_Response>()
{
  return &uuv_control_msgs::srv::typesupport_fastrtps_cpp::_SetMBSMControllerParams_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_control_msgs, srv, SetMBSMControllerParams_Response)() {
  return &uuv_control_msgs::srv::typesupport_fastrtps_cpp::_SetMBSMControllerParams_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace uuv_control_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetMBSMControllerParams__callbacks = {
  "uuv_control_msgs::srv",
  "SetMBSMControllerParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_control_msgs, srv, SetMBSMControllerParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_control_msgs, srv, SetMBSMControllerParams_Response)(),
};

static rosidl_service_type_support_t _SetMBSMControllerParams__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetMBSMControllerParams__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace uuv_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams>()
{
  return &uuv_control_msgs::srv::typesupport_fastrtps_cpp::_SetMBSMControllerParams__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_control_msgs, srv, SetMBSMControllerParams)() {
  return &uuv_control_msgs::srv::typesupport_fastrtps_cpp::_SetMBSMControllerParams__handle;
}

#ifdef __cplusplus
}
#endif
