
(cl:in-package :asdf)

(defsystem "robotnik_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :robotnik_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "GetBool" :depends-on ("_package_GetBool"))
    (:file "_package_GetBool" :depends-on ("_package"))
    (:file "GetMotorsHeadingOffset" :depends-on ("_package_GetMotorsHeadingOffset"))
    (:file "_package_GetMotorsHeadingOffset" :depends-on ("_package"))
    (:file "GetPOI" :depends-on ("_package_GetPOI"))
    (:file "_package_GetPOI" :depends-on ("_package"))
    (:file "GetPTZ" :depends-on ("_package_GetPTZ"))
    (:file "_package_GetPTZ" :depends-on ("_package"))
    (:file "InsertTask" :depends-on ("_package_InsertTask"))
    (:file "_package_InsertTask" :depends-on ("_package"))
    (:file "LoggerQuery" :depends-on ("_package_LoggerQuery"))
    (:file "_package_LoggerQuery" :depends-on ("_package"))
    (:file "QueryAlarms" :depends-on ("_package_QueryAlarms"))
    (:file "_package_QueryAlarms" :depends-on ("_package"))
    (:file "Record" :depends-on ("_package_Record"))
    (:file "_package_Record" :depends-on ("_package"))
    (:file "ResetFromSubState" :depends-on ("_package_ResetFromSubState"))
    (:file "_package_ResetFromSubState" :depends-on ("_package"))
    (:file "SetBuzzer" :depends-on ("_package_SetBuzzer"))
    (:file "_package_SetBuzzer" :depends-on ("_package"))
    (:file "SetByte" :depends-on ("_package_SetByte"))
    (:file "_package_SetByte" :depends-on ("_package"))
    (:file "SetCurrent" :depends-on ("_package_SetCurrent"))
    (:file "_package_SetCurrent" :depends-on ("_package"))
    (:file "SetElevator" :depends-on ("_package_SetElevator"))
    (:file "_package_SetElevator" :depends-on ("_package"))
    (:file "SetEncoderTurns" :depends-on ("_package_SetEncoderTurns"))
    (:file "_package_SetEncoderTurns" :depends-on ("_package"))
    (:file "SetInt16" :depends-on ("_package_SetInt16"))
    (:file "_package_SetInt16" :depends-on ("_package"))
    (:file "SetLaserMode" :depends-on ("_package_SetLaserMode"))
    (:file "_package_SetLaserMode" :depends-on ("_package"))
    (:file "SetMotorMode" :depends-on ("_package_SetMotorMode"))
    (:file "_package_SetMotorMode" :depends-on ("_package"))
    (:file "SetMotorPID" :depends-on ("_package_SetMotorPID"))
    (:file "_package_SetMotorPID" :depends-on ("_package"))
    (:file "SetMotorStatus" :depends-on ("_package_SetMotorStatus"))
    (:file "_package_SetMotorStatus" :depends-on ("_package"))
    (:file "SetNamedDigitalOutput" :depends-on ("_package_SetNamedDigitalOutput"))
    (:file "_package_SetNamedDigitalOutput" :depends-on ("_package"))
    (:file "SetString" :depends-on ("_package_SetString"))
    (:file "_package_SetString" :depends-on ("_package"))
    (:file "SetTransform" :depends-on ("_package_SetTransform"))
    (:file "_package_SetTransform" :depends-on ("_package"))
    (:file "ack_alarm" :depends-on ("_package_ack_alarm"))
    (:file "_package_ack_alarm" :depends-on ("_package"))
    (:file "axis_record" :depends-on ("_package_axis_record"))
    (:file "_package_axis_record" :depends-on ("_package"))
    (:file "enable_disable" :depends-on ("_package_enable_disable"))
    (:file "_package_enable_disable" :depends-on ("_package"))
    (:file "get_alarms" :depends-on ("_package_get_alarms"))
    (:file "_package_get_alarms" :depends-on ("_package"))
    (:file "get_digital_input" :depends-on ("_package_get_digital_input"))
    (:file "_package_get_digital_input" :depends-on ("_package"))
    (:file "get_modbus_register" :depends-on ("_package_get_modbus_register"))
    (:file "_package_get_modbus_register" :depends-on ("_package"))
    (:file "get_mode" :depends-on ("_package_get_mode"))
    (:file "_package_get_mode" :depends-on ("_package"))
    (:file "home" :depends-on ("_package_home"))
    (:file "_package_home" :depends-on ("_package"))
    (:file "set_CartesianEuler_pose" :depends-on ("_package_set_CartesianEuler_pose"))
    (:file "_package_set_CartesianEuler_pose" :depends-on ("_package"))
    (:file "set_analog_output" :depends-on ("_package_set_analog_output"))
    (:file "_package_set_analog_output" :depends-on ("_package"))
    (:file "set_digital_output" :depends-on ("_package_set_digital_output"))
    (:file "_package_set_digital_output" :depends-on ("_package"))
    (:file "set_float_value" :depends-on ("_package_set_float_value"))
    (:file "_package_set_float_value" :depends-on ("_package"))
    (:file "set_height" :depends-on ("_package_set_height"))
    (:file "_package_set_height" :depends-on ("_package"))
    (:file "set_modbus_register" :depends-on ("_package_set_modbus_register"))
    (:file "_package_set_modbus_register" :depends-on ("_package"))
    (:file "set_modbus_register_bit" :depends-on ("_package_set_modbus_register_bit"))
    (:file "_package_set_modbus_register_bit" :depends-on ("_package"))
    (:file "set_mode" :depends-on ("_package_set_mode"))
    (:file "_package_set_mode" :depends-on ("_package"))
    (:file "set_named_digital_output" :depends-on ("_package_set_named_digital_output"))
    (:file "_package_set_named_digital_output" :depends-on ("_package"))
    (:file "set_odometry" :depends-on ("_package_set_odometry"))
    (:file "_package_set_odometry" :depends-on ("_package"))
    (:file "set_ptz" :depends-on ("_package_set_ptz"))
    (:file "_package_set_ptz" :depends-on ("_package"))
  ))