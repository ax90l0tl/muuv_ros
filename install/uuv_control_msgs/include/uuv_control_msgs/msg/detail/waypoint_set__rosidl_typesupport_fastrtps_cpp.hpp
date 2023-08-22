// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from uuv_control_msgs:msg/WaypointSet.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "uuv_control_msgs/msg/detail/waypoint_set__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace uuv_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
cdr_serialize(
  const uuv_control_msgs::msg::WaypointSet & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_control_msgs::msg::WaypointSet & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
get_serialized_size(
  const uuv_control_msgs::msg::WaypointSet & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
max_serialized_size_WaypointSet(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace uuv_control_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_control_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_control_msgs, msg, WaypointSet)();

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__MSG__DETAIL__WAYPOINT_SET__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
