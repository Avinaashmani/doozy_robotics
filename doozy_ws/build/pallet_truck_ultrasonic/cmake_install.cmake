# Install script for directory: /home/avinaash/doozy_robotics/doozy_ws/src/pallet_truck_ultrasonic

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/avinaash/doozy_robotics/doozy_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/avinaash/doozy_robotics/doozy_ws/build/pallet_truck_ultrasonic/catkin_generated/installspace/pallet_truck_ultrasonic.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pallet_truck_ultrasonic/cmake" TYPE FILE FILES
    "/home/avinaash/doozy_robotics/doozy_ws/build/pallet_truck_ultrasonic/catkin_generated/installspace/pallet_truck_ultrasonicConfig.cmake"
    "/home/avinaash/doozy_robotics/doozy_ws/build/pallet_truck_ultrasonic/catkin_generated/installspace/pallet_truck_ultrasonicConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pallet_truck_ultrasonic" TYPE FILE FILES "/home/avinaash/doozy_robotics/doozy_ws/src/pallet_truck_ultrasonic/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pallet_truck_ultrasonic/config" TYPE DIRECTORY FILES "/home/avinaash/doozy_robotics/doozy_ws/src/pallet_truck_ultrasonic/config/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pallet_truck_ultrasonic/launch" TYPE DIRECTORY FILES "/home/avinaash/doozy_robotics/doozy_ws/src/pallet_truck_ultrasonic/launch/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pallet_truck_ultrasonic/meshes" TYPE DIRECTORY FILES "/home/avinaash/doozy_robotics/doozy_ws/src/pallet_truck_ultrasonic/meshes/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pallet_truck_ultrasonic/urdf" TYPE DIRECTORY FILES "/home/avinaash/doozy_robotics/doozy_ws/src/pallet_truck_ultrasonic/urdf/")
endif()

