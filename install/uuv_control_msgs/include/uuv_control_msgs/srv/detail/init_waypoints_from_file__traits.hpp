// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/InitWaypointsFromFile.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/init_waypoints_from_file__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'filename'
// Member 'interpolator'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointsFromFile_Request>()
{
  return "uuv_control_msgs::srv::InitWaypointsFromFile_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointsFromFile_Request>()
{
  return "uuv_control_msgs/srv/InitWaypointsFromFile_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointsFromFile_Response>()
{
  return "uuv_control_msgs::srv::InitWaypointsFromFile_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointsFromFile_Response>()
{
  return "uuv_control_msgs/srv/InitWaypointsFromFile_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::InitWaypointsFromFile>()
{
  return "uuv_control_msgs::srv::InitWaypointsFromFile";
}

template<>
inline const char * name<uuv_control_msgs::srv::InitWaypointsFromFile>()
{
  return "uuv_control_msgs/srv/InitWaypointsFromFile";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::InitWaypointsFromFile_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::InitWaypointsFromFile>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::InitWaypointsFromFile_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::InitWaypointsFromFile_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__INIT_WAYPOINTS_FROM_FILE__TRAITS_HPP_
