// Auto-generated. Do not edit!

// (in-package dolly_action_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class amrDockFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dist_to_pallet = null;
    }
    else {
      if (initObj.hasOwnProperty('dist_to_pallet')) {
        this.dist_to_pallet = initObj.dist_to_pallet
      }
      else {
        this.dist_to_pallet = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type amrDockFeedback
    // Serialize message field [dist_to_pallet]
    bufferOffset = _serializer.float64(obj.dist_to_pallet, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type amrDockFeedback
    let len;
    let data = new amrDockFeedback(null);
    // Deserialize message field [dist_to_pallet]
    data.dist_to_pallet = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dolly_action_msgs/amrDockFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bf332c4cd7d1f3d307d37e1a19b0c83e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    float64 dist_to_pallet
    
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new amrDockFeedback(null);
    if (msg.dist_to_pallet !== undefined) {
      resolved.dist_to_pallet = msg.dist_to_pallet;
    }
    else {
      resolved.dist_to_pallet = 0.0
    }

    return resolved;
    }
};

module.exports = amrDockFeedback;
