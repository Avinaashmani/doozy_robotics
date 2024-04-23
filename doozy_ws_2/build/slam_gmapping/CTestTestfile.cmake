# CMake generated Testfile for 
# Source directory: /home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping
# Build directory: /home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/cppcheck.xunit.xml" "--package-name" "slam_gmapping" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/galactic/bin/ament_cppcheck" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/cppcheck.xunit.xml" "--include_dirs" "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/galactic/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;63;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/flake8.xunit.xml" "--package-name" "slam_gmapping" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/ament_flake8/flake8.txt" "--command" "/opt/ros/galactic/bin/ament_flake8" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_flake8.cmake;48;ament_add_test;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/galactic/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;63;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/lint_cmake.xunit.xml" "--package-name" "slam_gmapping" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/galactic/bin/ament_lint_cmake" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;63;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/pep257.xunit.xml" "--package-name" "slam_gmapping" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/ament_pep257/pep257.txt" "--command" "/opt/ros/galactic/bin/ament_pep257" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/galactic/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;63;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/uncrustify.xunit.xml" "--package-name" "slam_gmapping" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/galactic/bin/ament_uncrustify" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/galactic/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;63;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/xmllint.xunit.xml" "--package-name" "slam_gmapping" "--output-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/ament_xmllint/xmllint.txt" "--command" "/opt/ros/galactic/bin/ament_xmllint" "--xunit-file" "/home/avinaash/doozy_robotics/doozy_ws_2/build/slam_gmapping/test_results/slam_gmapping/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;63;ament_package;/home/avinaash/doozy_robotics/doozy_ws_2/src/slam_gmapping/slam_gmapping/CMakeLists.txt;0;")
