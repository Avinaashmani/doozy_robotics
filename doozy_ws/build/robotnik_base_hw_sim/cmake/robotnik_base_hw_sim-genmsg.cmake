# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "robotnik_base_hw_sim: 2 messages, 4 services")

set(MSG_I_FLAGS "-Irobotnik_base_hw_sim:/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(robotnik_base_hw_sim_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" NAME_WE)
add_custom_target(_robotnik_base_hw_sim_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotnik_base_hw_sim" "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" ""
)

get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" NAME_WE)
add_custom_target(_robotnik_base_hw_sim_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotnik_base_hw_sim" "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" "robotnik_base_hw_sim/PickState"
)

get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" NAME_WE)
add_custom_target(_robotnik_base_hw_sim_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotnik_base_hw_sim" "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" "geometry_msgs/Point:geometry_msgs/Pose:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" NAME_WE)
add_custom_target(_robotnik_base_hw_sim_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotnik_base_hw_sim" "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" ""
)

get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" NAME_WE)
add_custom_target(_robotnik_base_hw_sim_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotnik_base_hw_sim" "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" ""
)

get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" NAME_WE)
add_custom_target(_robotnik_base_hw_sim_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "robotnik_base_hw_sim" "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_msg_cpp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg"
  "${MSG_I_FLAGS}"
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Services
_generate_srv_cpp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_cpp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_cpp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_cpp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Module File
_generate_module_cpp(robotnik_base_hw_sim
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(robotnik_base_hw_sim_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(robotnik_base_hw_sim_generate_messages robotnik_base_hw_sim_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_cpp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_cpp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_cpp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_cpp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_cpp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_cpp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotnik_base_hw_sim_gencpp)
add_dependencies(robotnik_base_hw_sim_gencpp robotnik_base_hw_sim_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotnik_base_hw_sim_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_msg_eus(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg"
  "${MSG_I_FLAGS}"
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Services
_generate_srv_eus(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_eus(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_eus(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_eus(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Module File
_generate_module_eus(robotnik_base_hw_sim
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(robotnik_base_hw_sim_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(robotnik_base_hw_sim_generate_messages robotnik_base_hw_sim_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_eus _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_eus _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_eus _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_eus _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_eus _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_eus _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotnik_base_hw_sim_geneus)
add_dependencies(robotnik_base_hw_sim_geneus robotnik_base_hw_sim_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotnik_base_hw_sim_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_msg_lisp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg"
  "${MSG_I_FLAGS}"
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Services
_generate_srv_lisp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_lisp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_lisp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_lisp(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Module File
_generate_module_lisp(robotnik_base_hw_sim
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(robotnik_base_hw_sim_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(robotnik_base_hw_sim_generate_messages robotnik_base_hw_sim_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_lisp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_lisp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_lisp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_lisp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_lisp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_lisp _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotnik_base_hw_sim_genlisp)
add_dependencies(robotnik_base_hw_sim_genlisp robotnik_base_hw_sim_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotnik_base_hw_sim_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_msg_nodejs(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg"
  "${MSG_I_FLAGS}"
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Services
_generate_srv_nodejs(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_nodejs(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_nodejs(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_nodejs(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Module File
_generate_module_nodejs(robotnik_base_hw_sim
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(robotnik_base_hw_sim_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(robotnik_base_hw_sim_generate_messages robotnik_base_hw_sim_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotnik_base_hw_sim_gennodejs)
add_dependencies(robotnik_base_hw_sim_gennodejs robotnik_base_hw_sim_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotnik_base_hw_sim_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_msg_py(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg"
  "${MSG_I_FLAGS}"
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Services
_generate_srv_py(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_py(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_py(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
)
_generate_srv_py(robotnik_base_hw_sim
  "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
)

### Generating Module File
_generate_module_py(robotnik_base_hw_sim
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(robotnik_base_hw_sim_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(robotnik_base_hw_sim_generate_messages robotnik_base_hw_sim_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickState.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_py _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/msg/PickStates.msg" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_py _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Pick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_py _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/Place.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_py _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePick.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_py _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/avinaash/doozy_robotics/doozy_ws/src/robotnik_base_hw_sim/srv/SimplePlace.srv" NAME_WE)
add_dependencies(robotnik_base_hw_sim_generate_messages_py _robotnik_base_hw_sim_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(robotnik_base_hw_sim_genpy)
add_dependencies(robotnik_base_hw_sim_genpy robotnik_base_hw_sim_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS robotnik_base_hw_sim_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/robotnik_base_hw_sim
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(robotnik_base_hw_sim_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(robotnik_base_hw_sim_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/robotnik_base_hw_sim
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(robotnik_base_hw_sim_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(robotnik_base_hw_sim_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/robotnik_base_hw_sim
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(robotnik_base_hw_sim_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(robotnik_base_hw_sim_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/robotnik_base_hw_sim
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(robotnik_base_hw_sim_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
    DESTINATION ${genpy_INSTALL_DIR}
    # skip all init files
    PATTERN "__init__.py" EXCLUDE
    PATTERN "__init__.pyc" EXCLUDE
  )
  # install init files which are not in the root folder of the generated code
  string(REGEX REPLACE "([][+.*()^])" "\\\\\\1" ESCAPED_PATH "${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim")
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/robotnik_base_hw_sim
    DESTINATION ${genpy_INSTALL_DIR}
    FILES_MATCHING
    REGEX "${ESCAPED_PATH}/.+/__init__.pyc?$"
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(robotnik_base_hw_sim_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(robotnik_base_hw_sim_generate_messages_py geometry_msgs_generate_messages_py)
endif()
