
"use strict";

let MotorsStatusDifferential = require('./MotorsStatusDifferential.js');
let ptz = require('./ptz.js');
let Interfaces = require('./Interfaces.js');
let BoolArray = require('./BoolArray.js');
let MotorHeadingOffset = require('./MotorHeadingOffset.js');
let StringStamped = require('./StringStamped.js');
let MotorReferenceValueArray = require('./MotorReferenceValueArray.js');
let ArmStatus = require('./ArmStatus.js');
let MotorPID = require('./MotorPID.js');
let ElevatorAction = require('./ElevatorAction.js');
let QueryAlarm = require('./QueryAlarm.js');
let SubState = require('./SubState.js');
let PresenceSensorArray = require('./PresenceSensorArray.js');
let encoders = require('./encoders.js');
let BatteryDockingStatusStamped = require('./BatteryDockingStatusStamped.js');
let ReturnMessage = require('./ReturnMessage.js');
let WatchdogStatusArray = require('./WatchdogStatusArray.js');
let LaserStatus = require('./LaserStatus.js');
let PantiltStatus = require('./PantiltStatus.js');
let Alarms = require('./Alarms.js');
let RobotnikMotorsStatus = require('./RobotnikMotorsStatus.js');
let Cartesian_Euler_pose = require('./Cartesian_Euler_pose.js');
let BatteryDockingStatus = require('./BatteryDockingStatus.js');
let SafetyModuleStatus = require('./SafetyModuleStatus.js');
let WatchdogStatus = require('./WatchdogStatus.js');
let BatteryStatusStamped = require('./BatteryStatusStamped.js');
let named_inputs_outputs = require('./named_inputs_outputs.js');
let LaserMode = require('./LaserMode.js');
let StringArray = require('./StringArray.js');
let PantiltStatusStamped = require('./PantiltStatusStamped.js');
let MotorReferenceValue = require('./MotorReferenceValue.js');
let State = require('./State.js');
let alarmsmonitor = require('./alarmsmonitor.js');
let Pose2DStamped = require('./Pose2DStamped.js');
let RecordStatus = require('./RecordStatus.js');
let Data = require('./Data.js');
let PresenceSensor = require('./PresenceSensor.js');
let AlarmSensor = require('./AlarmSensor.js');
let alarmmonitor = require('./alarmmonitor.js');
let OdomCalibrationStatusStamped = require('./OdomCalibrationStatusStamped.js');
let MotorStatus = require('./MotorStatus.js');
let BatteryStatus = require('./BatteryStatus.js');
let Pose2DArray = require('./Pose2DArray.js');
let named_input_output = require('./named_input_output.js');
let ElevatorStatus = require('./ElevatorStatus.js');
let Axis = require('./Axis.js');
let inputs_outputs = require('./inputs_outputs.js');
let MotorCurrent = require('./MotorCurrent.js');
let OdomManualCalibrationStatusStamped = require('./OdomManualCalibrationStatusStamped.js');
let Register = require('./Register.js');
let Logger = require('./Logger.js');
let InverterStatus = require('./InverterStatus.js');
let OdomCalibrationStatus = require('./OdomCalibrationStatus.js');
let OdomManualCalibrationStatus = require('./OdomManualCalibrationStatus.js');
let MotorsStatus = require('./MotorsStatus.js');
let Registers = require('./Registers.js');
let SetElevatorAction = require('./SetElevatorAction.js');
let SetElevatorActionGoal = require('./SetElevatorActionGoal.js');
let SetElevatorActionFeedback = require('./SetElevatorActionFeedback.js');
let SetElevatorResult = require('./SetElevatorResult.js');
let SetElevatorFeedback = require('./SetElevatorFeedback.js');
let SetElevatorGoal = require('./SetElevatorGoal.js');
let SetElevatorActionResult = require('./SetElevatorActionResult.js');

module.exports = {
  MotorsStatusDifferential: MotorsStatusDifferential,
  ptz: ptz,
  Interfaces: Interfaces,
  BoolArray: BoolArray,
  MotorHeadingOffset: MotorHeadingOffset,
  StringStamped: StringStamped,
  MotorReferenceValueArray: MotorReferenceValueArray,
  ArmStatus: ArmStatus,
  MotorPID: MotorPID,
  ElevatorAction: ElevatorAction,
  QueryAlarm: QueryAlarm,
  SubState: SubState,
  PresenceSensorArray: PresenceSensorArray,
  encoders: encoders,
  BatteryDockingStatusStamped: BatteryDockingStatusStamped,
  ReturnMessage: ReturnMessage,
  WatchdogStatusArray: WatchdogStatusArray,
  LaserStatus: LaserStatus,
  PantiltStatus: PantiltStatus,
  Alarms: Alarms,
  RobotnikMotorsStatus: RobotnikMotorsStatus,
  Cartesian_Euler_pose: Cartesian_Euler_pose,
  BatteryDockingStatus: BatteryDockingStatus,
  SafetyModuleStatus: SafetyModuleStatus,
  WatchdogStatus: WatchdogStatus,
  BatteryStatusStamped: BatteryStatusStamped,
  named_inputs_outputs: named_inputs_outputs,
  LaserMode: LaserMode,
  StringArray: StringArray,
  PantiltStatusStamped: PantiltStatusStamped,
  MotorReferenceValue: MotorReferenceValue,
  State: State,
  alarmsmonitor: alarmsmonitor,
  Pose2DStamped: Pose2DStamped,
  RecordStatus: RecordStatus,
  Data: Data,
  PresenceSensor: PresenceSensor,
  AlarmSensor: AlarmSensor,
  alarmmonitor: alarmmonitor,
  OdomCalibrationStatusStamped: OdomCalibrationStatusStamped,
  MotorStatus: MotorStatus,
  BatteryStatus: BatteryStatus,
  Pose2DArray: Pose2DArray,
  named_input_output: named_input_output,
  ElevatorStatus: ElevatorStatus,
  Axis: Axis,
  inputs_outputs: inputs_outputs,
  MotorCurrent: MotorCurrent,
  OdomManualCalibrationStatusStamped: OdomManualCalibrationStatusStamped,
  Register: Register,
  Logger: Logger,
  InverterStatus: InverterStatus,
  OdomCalibrationStatus: OdomCalibrationStatus,
  OdomManualCalibrationStatus: OdomManualCalibrationStatus,
  MotorsStatus: MotorsStatus,
  Registers: Registers,
  SetElevatorAction: SetElevatorAction,
  SetElevatorActionGoal: SetElevatorActionGoal,
  SetElevatorActionFeedback: SetElevatorActionFeedback,
  SetElevatorResult: SetElevatorResult,
  SetElevatorFeedback: SetElevatorFeedback,
  SetElevatorGoal: SetElevatorGoal,
  SetElevatorActionResult: SetElevatorActionResult,
};
