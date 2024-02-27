# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from robotnik_msgs/OdomManualCalibrationStatusStamped.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import robotnik_msgs.msg
import std_msgs.msg

class OdomManualCalibrationStatusStamped(genpy.Message):
  _md5sum = "040580a8054e03204d303892affeca19"
  _type = "robotnik_msgs/OdomManualCalibrationStatusStamped"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """Header header
OdomManualCalibrationStatus status

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: robotnik_msgs/OdomManualCalibrationStatus
geometry_msgs/Pose odom_increment             # odometry increment since last reset
geometry_msgs/Pose real_increment             # real increment since last reset

float32 linear_error            # linear error between odom and real since last reset
float32 angular_error           # angular error between odom and real since last reset

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['header','status']
  _slot_types = ['std_msgs/Header','robotnik_msgs/OdomManualCalibrationStatus']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,status

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(OdomManualCalibrationStatusStamped, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = robotnik_msgs.msg.OdomManualCalibrationStatus()
    else:
      self.header = std_msgs.msg.Header()
      self.status = robotnik_msgs.msg.OdomManualCalibrationStatus()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_14d2f().pack(_x.status.odom_increment.position.x, _x.status.odom_increment.position.y, _x.status.odom_increment.position.z, _x.status.odom_increment.orientation.x, _x.status.odom_increment.orientation.y, _x.status.odom_increment.orientation.z, _x.status.odom_increment.orientation.w, _x.status.real_increment.position.x, _x.status.real_increment.position.y, _x.status.real_increment.position.z, _x.status.real_increment.orientation.x, _x.status.real_increment.orientation.y, _x.status.real_increment.orientation.z, _x.status.real_increment.orientation.w, _x.status.linear_error, _x.status.angular_error))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = robotnik_msgs.msg.OdomManualCalibrationStatus()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 120
      (_x.status.odom_increment.position.x, _x.status.odom_increment.position.y, _x.status.odom_increment.position.z, _x.status.odom_increment.orientation.x, _x.status.odom_increment.orientation.y, _x.status.odom_increment.orientation.z, _x.status.odom_increment.orientation.w, _x.status.real_increment.position.x, _x.status.real_increment.position.y, _x.status.real_increment.position.z, _x.status.real_increment.orientation.x, _x.status.real_increment.orientation.y, _x.status.real_increment.orientation.z, _x.status.real_increment.orientation.w, _x.status.linear_error, _x.status.angular_error,) = _get_struct_14d2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_14d2f().pack(_x.status.odom_increment.position.x, _x.status.odom_increment.position.y, _x.status.odom_increment.position.z, _x.status.odom_increment.orientation.x, _x.status.odom_increment.orientation.y, _x.status.odom_increment.orientation.z, _x.status.odom_increment.orientation.w, _x.status.real_increment.position.x, _x.status.real_increment.position.y, _x.status.real_increment.position.z, _x.status.real_increment.orientation.x, _x.status.real_increment.orientation.y, _x.status.real_increment.orientation.z, _x.status.real_increment.orientation.w, _x.status.linear_error, _x.status.angular_error))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = robotnik_msgs.msg.OdomManualCalibrationStatus()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 120
      (_x.status.odom_increment.position.x, _x.status.odom_increment.position.y, _x.status.odom_increment.position.z, _x.status.odom_increment.orientation.x, _x.status.odom_increment.orientation.y, _x.status.odom_increment.orientation.z, _x.status.odom_increment.orientation.w, _x.status.real_increment.position.x, _x.status.real_increment.position.y, _x.status.real_increment.position.z, _x.status.real_increment.orientation.x, _x.status.real_increment.orientation.y, _x.status.real_increment.orientation.z, _x.status.real_increment.orientation.w, _x.status.linear_error, _x.status.angular_error,) = _get_struct_14d2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_14d2f = None
def _get_struct_14d2f():
    global _struct_14d2f
    if _struct_14d2f is None:
        _struct_14d2f = struct.Struct("<14d2f")
    return _struct_14d2f
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
