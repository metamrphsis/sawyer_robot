
"use strict";

let IODeviceConfiguration = require('./IODeviceConfiguration.js');
let JointLimits = require('./JointLimits.js');
let HomingCommand = require('./HomingCommand.js');
let NavigatorState = require('./NavigatorState.js');
let URDFConfiguration = require('./URDFConfiguration.js');
let IONodeStatus = require('./IONodeStatus.js');
let RobotAssemblyState = require('./RobotAssemblyState.js');
let CollisionDetectionState = require('./CollisionDetectionState.js');
let HomingState = require('./HomingState.js');
let IOComponentConfiguration = require('./IOComponentConfiguration.js');
let IOComponentStatus = require('./IOComponentStatus.js');
let NavigatorStates = require('./NavigatorStates.js');
let EndpointState = require('./EndpointState.js');
let AnalogIOStates = require('./AnalogIOStates.js');
let InteractionControlCommand = require('./InteractionControlCommand.js');
let IODeviceStatus = require('./IODeviceStatus.js');
let DigitalIOState = require('./DigitalIOState.js');
let DigitalIOStates = require('./DigitalIOStates.js');
let DigitalOutputCommand = require('./DigitalOutputCommand.js');
let SEAJointState = require('./SEAJointState.js');
let HeadPanCommand = require('./HeadPanCommand.js');
let EndpointStates = require('./EndpointStates.js');
let CameraSettings = require('./CameraSettings.js');
let IODataStatus = require('./IODataStatus.js');
let HeadState = require('./HeadState.js');
let InteractionControlState = require('./InteractionControlState.js');
let AnalogIOState = require('./AnalogIOState.js');
let CollisionAvoidanceState = require('./CollisionAvoidanceState.js');
let CameraControl = require('./CameraControl.js');
let IOComponentCommand = require('./IOComponentCommand.js');
let IOStatus = require('./IOStatus.js');
let JointCommand = require('./JointCommand.js');
let IONodeConfiguration = require('./IONodeConfiguration.js');
let EndpointNamesArray = require('./EndpointNamesArray.js');
let AnalogOutputCommand = require('./AnalogOutputCommand.js');
let CalibrationCommandAction = require('./CalibrationCommandAction.js');
let CalibrationCommandActionGoal = require('./CalibrationCommandActionGoal.js');
let CalibrationCommandActionFeedback = require('./CalibrationCommandActionFeedback.js');
let CalibrationCommandActionResult = require('./CalibrationCommandActionResult.js');
let CalibrationCommandResult = require('./CalibrationCommandResult.js');
let CalibrationCommandFeedback = require('./CalibrationCommandFeedback.js');
let CalibrationCommandGoal = require('./CalibrationCommandGoal.js');

module.exports = {
  IODeviceConfiguration: IODeviceConfiguration,
  JointLimits: JointLimits,
  HomingCommand: HomingCommand,
  NavigatorState: NavigatorState,
  URDFConfiguration: URDFConfiguration,
  IONodeStatus: IONodeStatus,
  RobotAssemblyState: RobotAssemblyState,
  CollisionDetectionState: CollisionDetectionState,
  HomingState: HomingState,
  IOComponentConfiguration: IOComponentConfiguration,
  IOComponentStatus: IOComponentStatus,
  NavigatorStates: NavigatorStates,
  EndpointState: EndpointState,
  AnalogIOStates: AnalogIOStates,
  InteractionControlCommand: InteractionControlCommand,
  IODeviceStatus: IODeviceStatus,
  DigitalIOState: DigitalIOState,
  DigitalIOStates: DigitalIOStates,
  DigitalOutputCommand: DigitalOutputCommand,
  SEAJointState: SEAJointState,
  HeadPanCommand: HeadPanCommand,
  EndpointStates: EndpointStates,
  CameraSettings: CameraSettings,
  IODataStatus: IODataStatus,
  HeadState: HeadState,
  InteractionControlState: InteractionControlState,
  AnalogIOState: AnalogIOState,
  CollisionAvoidanceState: CollisionAvoidanceState,
  CameraControl: CameraControl,
  IOComponentCommand: IOComponentCommand,
  IOStatus: IOStatus,
  JointCommand: JointCommand,
  IONodeConfiguration: IONodeConfiguration,
  EndpointNamesArray: EndpointNamesArray,
  AnalogOutputCommand: AnalogOutputCommand,
  CalibrationCommandAction: CalibrationCommandAction,
  CalibrationCommandActionGoal: CalibrationCommandActionGoal,
  CalibrationCommandActionFeedback: CalibrationCommandActionFeedback,
  CalibrationCommandActionResult: CalibrationCommandActionResult,
  CalibrationCommandResult: CalibrationCommandResult,
  CalibrationCommandFeedback: CalibrationCommandFeedback,
  CalibrationCommandGoal: CalibrationCommandGoal,
};
