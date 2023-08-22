# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget uuv_world_ros_plugins::uuv_sc_ros_interface_plugin)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target uuv_world_ros_plugins::uuv_sc_ros_interface_plugin
add_library(uuv_world_ros_plugins::uuv_sc_ros_interface_plugin SHARED IMPORTED)

set_target_properties(uuv_world_ros_plugins::uuv_sc_ros_interface_plugin PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "/home/isopodin-time/ros2_ws/install/uuv_world_plugins/include;/opt/ros/foxy/include;/usr/include;/usr/include/gazebo-11;/usr/include/bullet;/usr/include/simbody;/usr/include/sdformat-9.10;/usr/include/ignition/math6;/usr/include/OGRE;/usr/include/OGRE/Terrain;/usr/include/OGRE/Paging;/usr/include/ignition/transport8;/usr/include/ignition/msgs5;/usr/include/ignition/common3;/usr/include/ignition/fuel_tools4"
  INTERFACE_LINK_LIBRARIES "uuv_world_ros_plugins_msgs::uuv_world_ros_plugins_msgs__rosidl_generator_c;uuv_world_ros_plugins_msgs::uuv_world_ros_plugins_msgs__rosidl_typesupport_introspection_c;uuv_world_ros_plugins_msgs::uuv_world_ros_plugins_msgs__rosidl_typesupport_c;uuv_world_ros_plugins_msgs::uuv_world_ros_plugins_msgs__rosidl_generator_cpp;uuv_world_ros_plugins_msgs::uuv_world_ros_plugins_msgs__rosidl_typesupport_introspection_cpp;uuv_world_ros_plugins_msgs::uuv_world_ros_plugins_msgs__rosidl_typesupport_cpp;gazebo_msgs::gazebo_msgs__rosidl_generator_c;gazebo_msgs::gazebo_msgs__rosidl_typesupport_introspection_c;gazebo_msgs::gazebo_msgs__rosidl_typesupport_c;gazebo_msgs::gazebo_msgs__rosidl_generator_cpp;gazebo_msgs::gazebo_msgs__rosidl_typesupport_introspection_cpp;gazebo_msgs::gazebo_msgs__rosidl_typesupport_cpp;geometry_msgs::geometry_msgs__rosidl_generator_c;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_c;geometry_msgs::geometry_msgs__rosidl_typesupport_c;geometry_msgs::geometry_msgs__rosidl_generator_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_cpp;rclcpp::rclcpp;/opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so;/opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so;/opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so;/opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so;/opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so;/opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so;/opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so;/opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so;/opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so;/opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so;/opt/ros/foxy/lib/libgeometry_msgs__rosidl_generator_c.so;/opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so;/opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_c.so;/opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so;/opt/ros/foxy/lib/libgeometry_msgs__rosidl_typesupport_cpp.so;/opt/ros/foxy/lib/libtrajectory_msgs__rosidl_generator_c.so;/opt/ros/foxy/lib/libtrajectory_msgs__rosidl_typesupport_introspection_c.so;/opt/ros/foxy/lib/libtrajectory_msgs__rosidl_typesupport_c.so;/opt/ros/foxy/lib/libtrajectory_msgs__rosidl_typesupport_introspection_cpp.so;/opt/ros/foxy/lib/libtrajectory_msgs__rosidl_typesupport_cpp.so;/opt/ros/foxy/lib/librcutils.so;dl;/opt/ros/foxy/lib/librcpputils.so;/opt/ros/foxy/lib/librosidl_typesupport_c.so;rcpputils::rcpputils;/opt/ros/foxy/lib/librosidl_typesupport_cpp.so;/opt/ros/foxy/lib/librosidl_runtime_c.so;/opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so;/opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so;/opt/ros/foxy/lib/libgazebo_msgs__rosidl_generator_c.so;rcutils::rcutils;/opt/ros/foxy/lib/libgazebo_msgs__rosidl_typesupport_introspection_c.so;gazebo_msgs::gazebo_msgs__rosidl_generator_c;rosidl_typesupport_introspection_c::rosidl_typesupport_introspection_c;/opt/ros/foxy/lib/libgazebo_msgs__rosidl_typesupport_c.so;rosidl_typesupport_c::rosidl_typesupport_c;/opt/ros/foxy/lib/libgazebo_msgs__rosidl_typesupport_introspection_cpp.so;rosidl_typesupport_introspection_cpp::rosidl_typesupport_introspection_cpp;/opt/ros/foxy/lib/libgazebo_msgs__rosidl_typesupport_cpp.so;rosidl_runtime_c::rosidl_runtime_c;rosidl_runtime_cpp::rosidl_runtime_cpp;rosidl_typesupport_cpp::rosidl_typesupport_cpp;rosidl_typesupport_interface::rosidl_typesupport_interface;builtin_interfaces::builtin_interfaces__rosidl_generator_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_generator_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_cpp;std_msgs::std_msgs__rosidl_generator_c;std_msgs::std_msgs__rosidl_typesupport_introspection_c;std_msgs::std_msgs__rosidl_typesupport_c;std_msgs::std_msgs__rosidl_generator_cpp;std_msgs::std_msgs__rosidl_typesupport_introspection_cpp;std_msgs::std_msgs__rosidl_typesupport_cpp;geometry_msgs::geometry_msgs__rosidl_generator_c;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_c;geometry_msgs::geometry_msgs__rosidl_typesupport_c;geometry_msgs::geometry_msgs__rosidl_generator_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_cpp;trajectory_msgs::trajectory_msgs__rosidl_generator_c;trajectory_msgs::trajectory_msgs__rosidl_typesupport_introspection_c;trajectory_msgs::trajectory_msgs__rosidl_typesupport_c;trajectory_msgs::trajectory_msgs__rosidl_generator_cpp;trajectory_msgs::trajectory_msgs__rosidl_typesupport_introspection_cpp;trajectory_msgs::trajectory_msgs__rosidl_typesupport_cpp;/home/isopodin-time/ros2_ws/install/uuv_world_plugins/lib/libuuv_underwater_current_plugin.so;BulletSoftBody;BulletDynamics;BulletCollision;LinearMath;SimTKcommon;SimTKmath;SimTKsimbody;dart;/usr/lib/x86_64-linux-gnu/libgazebo.so;/usr/lib/x86_64-linux-gnu/libgazebo_client.so;/usr/lib/x86_64-linux-gnu/libgazebo_gui.so;/usr/lib/x86_64-linux-gnu/libgazebo_sensors.so;/usr/lib/x86_64-linux-gnu/libgazebo_rendering.so;/usr/lib/x86_64-linux-gnu/libgazebo_physics.so;/usr/lib/x86_64-linux-gnu/libgazebo_ode.so;/usr/lib/x86_64-linux-gnu/libgazebo_transport.so;/usr/lib/x86_64-linux-gnu/libgazebo_msgs.so;/usr/lib/x86_64-linux-gnu/libgazebo_util.so;/usr/lib/x86_64-linux-gnu/libgazebo_common.so;/usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so;/usr/lib/x86_64-linux-gnu/libgazebo_opcode.so;/usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so;Boost::system;Boost::filesystem;Boost::program_options;Boost::regex;Boost::iostreams;/usr/lib/x86_64-linux-gnu/libprotobuf.so;-lpthread;sdformat9::sdformat9;\$<\$<NOT:\$<CONFIG:DEBUG>>:/usr/lib/x86_64-linux-gnu/libOgreMain.so>;\$<\$<CONFIG:DEBUG>:/usr/lib/x86_64-linux-gnu/libOgreMain.so>;Boost::thread;Boost::date_time;\$<\$<NOT:\$<CONFIG:DEBUG>>:/usr/lib/x86_64-linux-gnu/libOgreTerrain.so>;\$<\$<CONFIG:DEBUG>:/usr/lib/x86_64-linux-gnu/libOgreTerrain.so>;\$<\$<NOT:\$<CONFIG:DEBUG>>:/usr/lib/x86_64-linux-gnu/libOgrePaging.so>;\$<\$<CONFIG:DEBUG>:/usr/lib/x86_64-linux-gnu/libOgrePaging.so>;ignition-math6::requested;ignition-transport8::requested;ignition-msgs5::requested;ignition-common3::ignition-common3-graphics;ignition-fuel_tools4::requested"
)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/export_uuv_sc_ros_interface_pluginExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
