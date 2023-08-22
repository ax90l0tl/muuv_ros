// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/go_to__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'waypoint'
#include "uuv_control_msgs/msg/detail/waypoint__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GoTo_Request>()
{
  return "uuv_control_msgs::srv::GoTo_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoTo_Request>()
{
  return "uuv_control_msgs/srv/GoTo_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoTo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoTo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GoTo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GoTo_Response>()
{
  return "uuv_control_msgs::srv::GoTo_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoTo_Response>()
{
  return "uuv_control_msgs/srv/GoTo_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoTo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GoTo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GoTo>()
{
  return "uuv_control_msgs::srv::GoTo";
}

template<>
inline const char * name<uuv_control_msgs::srv::GoTo>()
{
  return "uuv_control_msgs/srv/GoTo";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GoTo>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GoTo_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GoTo_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GoTo>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GoTo_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GoTo_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GoTo>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GoTo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GoTo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__TRAITS_HPP_
