# CMake generated Testfile for 
# Source directory: /home/avinaash/doozy_robotics/doozy_ws_2/src/AprilTag-ROS-2/apriltag_ros
# Build directory: /home/avinaash/doozy_robotics/doozy_ws_2/build/apriltag_ros
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/apriltag_ros/test_results/apriltag_ros/cppcheck.xunit.xml" "--package-name" "apriltag_ros" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/apriltag_ros/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/galactic/bin/ament_cppcheck" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/apriltag_ros/test_results/apriltag_ros/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/AprilTag-ROS-2/apriltag_ros" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/AprilTag-ROS-2/apriltag_ros/CMakeLists.txt;85;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/AprilTag-ROS-2/apriltag_ros/CMakeLists.txt;0;")
