
"use strict";

let GetPTZ = require('./GetPTZ.js')
let SetMotorMode = require('./SetMotorMode.js')
let get_digital_input = require('./get_digital_input.js')
let set_CartesianEuler_pose = require('./set_CartesianEuler_pose.js')
let SetCurrent = require('./SetCurrent.js')
let InsertTask = require('./InsertTask.js')
let set_float_value = require('./set_float_value.js')
let SetEncoderTurns = require('./SetEncoderTurns.js')
let get_mode = require('./get_mode.js')
let set_analog_output = require('./set_analog_output.js')
let set_modbus_register = require('./set_modbus_register.js')
let SetString = require('./SetString.js')
let set_ptz = require('./set_ptz.js')
let set_odometry = require('./set_odometry.js')
let SetBuzzer = require('./SetBuzzer.js')
let GetMotorsHeadingOffset = require('./GetMotorsHeadingOffset.js')
let set_modbus_register_bit = require('./set_modbus_register_bit.js')
let set_digital_output = require('./set_digital_output.js')
let GetPOI = require('./GetPOI.js')
let SetElevator = require('./SetElevator.js')
let SetMotorStatus = require('./SetMotorStatus.js')
let LoggerQuery = require('./LoggerQuery.js')
let SetByte = require('./SetByte.js')
let ResetFromSubState = require('./ResetFromSubState.js')
let enable_disable = require('./enable_disable.js')
let set_mode = require('./set_mode.js')
let SetTransform = require('./SetTransform.js')
let SetLaserMode = require('./SetLaserMode.js')
let axis_record = require('./axis_record.js')
let set_named_digital_output = require('./set_named_digital_output.js')
let ack_alarm = require('./ack_alarm.js')
let set_height = require('./set_height.js')
let QueryAlarms = require('./QueryAlarms.js')
let get_alarms = require('./get_alarms.js')
let get_modbus_register = require('./get_modbus_register.js')
let SetNamedDigitalOutput = require('./SetNamedDigitalOutput.js')
let SetMotorPID = require('./SetMotorPID.js')
let SetInt16 = require('./SetInt16.js')
let home = require('./home.js')
let GetBool = require('./GetBool.js')
let Record = require('./Record.js')

module.exports = {
  GetPTZ: GetPTZ,
  SetMotorMode: SetMotorMode,
  get_digital_input: get_digital_input,
  set_CartesianEuler_pose: set_CartesianEuler_pose,
  SetCurrent: SetCurrent,
  InsertTask: InsertTask,
  set_float_value: set_float_value,
  SetEncoderTurns: SetEncoderTurns,
  get_mode: get_mode,
  set_analog_output: set_analog_output,
  set_modbus_register: set_modbus_register,
  SetString: SetString,
  set_ptz: set_ptz,
  set_odometry: set_odometry,
  SetBuzzer: SetBuzzer,
  GetMotorsHeadingOffset: GetMotorsHeadingOffset,
  set_modbus_register_bit: set_modbus_register_bit,
  set_digital_output: set_digital_output,
  GetPOI: GetPOI,
  SetElevator: SetElevator,
  SetMotorStatus: SetMotorStatus,
  LoggerQuery: LoggerQuery,
  SetByte: SetByte,
  ResetFromSubState: ResetFromSubState,
  enable_disable: enable_disable,
  set_mode: set_mode,
  SetTransform: SetTransform,
  SetLaserMode: SetLaserMode,
  axis_record: axis_record,
  set_named_digital_output: set_named_digital_output,
  ack_alarm: ack_alarm,
  set_height: set_height,
  QueryAlarms: QueryAlarms,
  get_alarms: get_alarms,
  get_modbus_register: get_modbus_register,
  SetNamedDigitalOutput: SetNamedDigitalOutput,
  SetMotorPID: SetMotorPID,
  SetInt16: SetInt16,
  home: home,
  GetBool: GetBool,
  Record: Record,
};
