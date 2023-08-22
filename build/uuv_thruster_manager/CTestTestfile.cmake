# CMake generated Testfile for 
# Source directory: /home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager
# Build directory: /home/isopodin-time/ros2_ws/build/uuv_thruster_manager
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_thrusters "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thrusters.xunit.xml" "--package-name" "uuv_thruster_manager" "--output-file" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/ament_cmake_pytest/test_thrusters.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/test/test_thrusters.py" "-o" "cache_dir=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/ament_cmake_pytest/test_thrusters/.cache" "--junit-xml=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thrusters.xunit.xml" "--junit-prefix=uuv_thruster_manager")
set_tests_properties(test_thrusters PROPERTIES  LABELS "pytest" TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;63;ament_add_pytest_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;0;")
add_test(test_thruster_allocator_x_axis "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_allocator_x_axis.xunit.xml" "--package-name" "uuv_thruster_manager" "--output-file" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/launch_test/CHANGEME.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/test/test_thruster_allocator_x_axis.test.py" "--junit-xml=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_allocator_x_axis.xunit.xml" "--package-name=uuv_thruster_manager")
set_tests_properties(test_thruster_allocator_x_axis PROPERTIES  TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;81;add_launch_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;0;")
add_test(test_thruster_allocator_y_axis "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_allocator_y_axis.xunit.xml" "--package-name" "uuv_thruster_manager" "--output-file" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/launch_test/CHANGEME.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/test/test_thruster_allocator_y_axis.test.py" "--junit-xml=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_allocator_y_axis.xunit.xml" "--package-name=uuv_thruster_manager")
set_tests_properties(test_thruster_allocator_y_axis PROPERTIES  TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;81;add_launch_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;0;")
add_test(test_thruster_allocator_z_axis "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_allocator_z_axis.xunit.xml" "--package-name" "uuv_thruster_manager" "--output-file" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/launch_test/CHANGEME.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/test/test_thruster_allocator_z_axis.test.py" "--junit-xml=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_allocator_z_axis.xunit.xml" "--package-name=uuv_thruster_manager")
set_tests_properties(test_thruster_allocator_z_axis PROPERTIES  TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;81;add_launch_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;0;")
add_test(test_thruster_manager_proportional_correct "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_manager_proportional_correct.xunit.xml" "--package-name" "uuv_thruster_manager" "--output-file" "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/launch_test/CHANGEME.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/test/test_thruster_manager_proportional_correct.test.py" "--junit-xml=/home/isopodin-time/ros2_ws/build/uuv_thruster_manager/test_results/uuv_thruster_manager/test_thruster_manager_proportional_correct.xunit.xml" "--package-name=uuv_thruster_manager")
set_tests_properties(test_thruster_manager_proportional_correct PROPERTIES  TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/uuv_thruster_manager" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;125;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;81;add_launch_test;/home/isopodin-time/ros2_ws/src/Plankton/uuv_control/uuv_thruster_manager/CMakeLists.txt;0;")
subdirs("uuv_thruster_manager__py")
