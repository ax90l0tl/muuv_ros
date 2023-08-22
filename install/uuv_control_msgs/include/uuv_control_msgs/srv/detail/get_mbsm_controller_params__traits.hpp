// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__TRAITS_HPP_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__TRAITS_HPP_

#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GetMBSMControllerParams_Request>()
{
  return "uuv_control_msgs::srv::GetMBSMControllerParams_Request";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetMBSMControllerParams_Request>()
{
  return "uuv_control_msgs/srv/GetMBSMControllerParams_Request";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GetMBSMControllerParams_Response>()
{
  return "uuv_control_msgs::srv::GetMBSMControllerParams_Response";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetMBSMControllerParams_Response>()
{
  return "uuv_control_msgs/srv/GetMBSMControllerParams_Response";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_control_msgs::srv::GetMBSMControllerParams>()
{
  return "uuv_control_msgs::srv::GetMBSMControllerParams";
}

template<>
inline const char * name<uuv_control_msgs::srv::GetMBSMControllerParams>()
{
  return "uuv_control_msgs/srv/GetMBSMControllerParams";
}

template<>
struct has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>::value &&
    has_fixed_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Request>::value &&
    has_bounded_size<uuv_control_msgs::srv::GetMBSMControllerParams_Response>::value
  >
{
};

template<>
struct is_service<uuv_control_msgs::srv::GetMBSMControllerParams>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_control_msgs::srv::GetMBSMControllerParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_control_msgs::srv::GetMBSMControllerParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__TRAITS_HPP_
