// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef UUV_THRUSTER_MANAGER__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define UUV_THRUSTER_MANAGER__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_uuv_thruster_manager __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_uuv_thruster_manager __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_uuv_thruster_manager
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_uuv_thruster_manager
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_thruster_manager __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_uuv_thruster_manager
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_thruster_manager
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // UUV_THRUSTER_MANAGER__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
