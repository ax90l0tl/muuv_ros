# CMake generated Testfile for 
# Source directory: /home/isopodin-time/ros2_ws/src/Plankton/plankton_utils
# Build directory: /home/isopodin-time/ros2_ws/build/plankton_utils
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_time "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/plankton_utils/test_results/plankton_utils/test_time.xunit.xml" "--package-name" "plankton_utils" "--output-file" "/home/isopodin-time/ros2_ws/build/plankton_utils/ament_cmake_pytest/test_time.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/plankton_utils" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/isopodin-time/ros2_ws/src/Plankton/plankton_utils/test/test_time.py" "-o" "cache_dir=/home/isopodin-time/ros2_ws/build/plankton_utils/ament_cmake_pytest/test_time/.cache" "--junit-xml=/home/isopodin-time/ros2_ws/build/plankton_utils/test_results/plankton_utils/test_time.xunit.xml" "--junit-prefix=plankton_utils" "-We")
set_tests_properties(test_time PROPERTIES  LABELS "pytest" TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/plankton_utils" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/plankton_utils/CMakeLists.txt;57;ament_add_pytest_test;/home/isopodin-time/ros2_ws/src/Plankton/plankton_utils/CMakeLists.txt;0;")
add_test(test_param_helper "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/isopodin-time/ros2_ws/build/plankton_utils/test_results/plankton_utils/test_param_helper.xunit.xml" "--package-name" "plankton_utils" "--output-file" "/home/isopodin-time/ros2_ws/build/plankton_utils/ament_cmake_pytest/test_param_helper.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/isopodin-time/ros2_ws/build/plankton_utils" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/isopodin-time/ros2_ws/src/Plankton/plankton_utils/test/test_param_helper.py" "-o" "cache_dir=/home/isopodin-time/ros2_ws/build/plankton_utils/ament_cmake_pytest/test_param_helper/.cache" "--junit-xml=/home/isopodin-time/ros2_ws/build/plankton_utils/test_results/plankton_utils/test_param_helper.xunit.xml" "--junit-prefix=plankton_utils" "-We")
set_tests_properties(test_param_helper PROPERTIES  LABELS "pytest" TIMEOUT "120" WORKING_DIRECTORY "/home/isopodin-time/ros2_ws/build/plankton_utils" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;165;ament_add_test;/home/isopodin-time/ros2_ws/src/Plankton/plankton_utils/CMakeLists.txt;57;ament_add_pytest_test;/home/isopodin-time/ros2_ws/src/Plankton/plankton_utils/CMakeLists.txt;0;")
