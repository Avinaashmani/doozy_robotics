# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "rb1_base_pad: 0 messages, 1 services")

set(MSG_I_FLAGS "-Irobotnik_msgs:/home/avinaash/doozy_ws/src/robotnik_msgs/msg;-Irobotnik_msgs:/home/avinaash/doozy_ws/devel/.private/robotnik_msgs/share/robotnik_msgs/msg;-Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(rb1_base_pad_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" NAME_WE)
add_custom_target(_rb1_base_pad_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "rb1_base_pad" "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(rb1_base_pad
  "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rb1_base_pad
)

### Generating Module File
_generate_module_cpp(rb1_base_pad
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rb1_base_pad
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(rb1_base_pad_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(rb1_base_pad_generate_messages rb1_base_pad_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" NAME_WE)
add_dependencies(rb1_base_pad_generate_messages_cpp _rb1_base_pad_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rb1_base_pad_gencpp)
add_dependencies(rb1_base_pad_gencpp rb1_base_pad_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rb1_base_pad_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages

### Generating Services
_generate_srv_eus(rb1_base_pad
  "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rb1_base_pad
)

### Generating Module File
_generate_module_eus(rb1_base_pad
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rb1_base_pad
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(rb1_base_pad_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(rb1_base_pad_generate_messages rb1_base_pad_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" NAME_WE)
add_dependencies(rb1_base_pad_generate_messages_eus _rb1_base_pad_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rb1_base_pad_geneus)
add_dependencies(rb1_base_pad_geneus rb1_base_pad_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rb1_base_pad_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(rb1_base_pad
  "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rb1_base_pad
)

### Generating Module File
_generate_module_lisp(rb1_base_pad
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rb1_base_pad
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(rb1_base_pad_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(rb1_base_pad_generate_messages rb1_base_pad_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" NAME_WE)
add_dependencies(rb1_base_pad_generate_messages_lisp _rb1_base_pad_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rb1_base_pad_genlisp)
add_dependencies(rb1_base_pad_genlisp rb1_base_pad_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rb1_base_pad_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages

### Generating Services
_generate_srv_nodejs(rb1_base_pad
  "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rb1_base_pad
)

### Generating Module File
_generate_module_nodejs(rb1_base_pad
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rb1_base_pad
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(rb1_base_pad_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(rb1_base_pad_generate_messages rb1_base_pad_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" NAME_WE)
add_dependencies(rb1_base_pad_generate_messages_nodejs _rb1_base_pad_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rb1_base_pad_gennodejs)
add_dependencies(rb1_base_pad_gennodejs rb1_base_pad_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rb1_base_pad_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(rb1_base_pad
  "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rb1_base_pad
)

### Generating Module File
_generate_module_py(rb1_base_pad
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rb1_base_pad
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(rb1_base_pad_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(rb1_base_pad_generate_messages rb1_base_pad_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_ws/src/rb1_base_common/rb1_base_pad/srv/enable_disable_pad.srv" NAME_WE)
add_dependencies(rb1_base_pad_generate_messages_py _rb1_base_pad_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(rb1_base_pad_genpy)
add_dependencies(rb1_base_pad_genpy rb1_base_pad_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rb1_base_pad_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rb1_base_pad)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rb1_base_pad
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET robotnik_msgs_generate_messages_cpp)
  add_dependencies(rb1_base_pad_generate_messages_cpp robotnik_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(rb1_base_pad_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rb1_base_pad)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/rb1_base_pad
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET robotnik_msgs_generate_messages_eus)
  add_dependencies(rb1_base_pad_generate_messages_eus robotnik_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(rb1_base_pad_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rb1_base_pad)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rb1_base_pad
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET robotnik_msgs_generate_messages_lisp)
  add_dependencies(rb1_base_pad_generate_messages_lisp robotnik_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(rb1_base_pad_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rb1_base_pad)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/rb1_base_pad
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET robotnik_msgs_generate_messages_nodejs)
  add_dependencies(rb1_base_pad_generate_messages_nodejs robotnik_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(rb1_base_pad_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rb1_base_pad)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rb1_base_pad\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rb1_base_pad
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET robotnik_msgs_generate_messages_py)
  add_dependencies(rb1_base_pad_generate_messages_py robotnik_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(rb1_base_pad_generate_messages_py sensor_msgs_generate_messages_py)
endif()
