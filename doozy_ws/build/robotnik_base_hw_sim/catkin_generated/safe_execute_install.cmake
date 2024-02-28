execute_process(COMMAND "/home/avinaash/doozy_robotics/doozy_ws/build/robotnik_base_hw_sim/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/avinaash/doozy_robotics/doozy_ws/build/robotnik_base_hw_sim/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
