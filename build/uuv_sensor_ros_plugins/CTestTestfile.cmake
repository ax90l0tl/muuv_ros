# CMake generated Testfile for 
# Source directory: /home/isopodin-time/ros2_ws/src/Plankton/uuv_sensor_plugins/uuv_sensor_ros_plugins
# Build directory: /home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_urdf_files "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins/test_results/uuv_sensor_ros_plugins/test_urdf_files.xunit.xml" "--package-name" "uuv_sensor_ros_plugins" "--output-file" "/home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins/ament_cmake_pytest/test_urdf_files.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/isopodin-time/ros2_ws/src/Plankton/uuv_sensor_plugins/uuv_sensor_ros_plugins/test/test_urdf_files.py" "-o" "cache_dir=/home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins/ament_cmake_pytest/test_urdf_files/.cache" "--junit-xml=/home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins/test_results/uuv_sensor_ros_plugins/test_urdf_files.xunit.xml" "--junit-prefix=uuv_sensor_ros_plugins")
set_tests_properties(test_urdf_files PROPERTIES  LABELS "pytest" TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/uuv_sensor_ros_plugins" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_sensor_plugins/uuv_sensor_ros_plugins/CMakeLists.txt;444;ament_add_pytest_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_sensor_plugins/uuv_sensor_ros_plugins/CMakeLists.txt;0;")
