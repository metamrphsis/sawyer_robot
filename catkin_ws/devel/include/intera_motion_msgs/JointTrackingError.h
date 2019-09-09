// Generated by gencpp from file intera_motion_msgs/JointTrackingError.msg
// DO NOT EDIT!


#ifndef INTERA_MOTION_MSGS_MESSAGE_JOINTTRACKINGERROR_H
#define INTERA_MOTION_MSGS_MESSAGE_JOINTTRACKINGERROR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace intera_motion_msgs
{
template <class ContainerAllocator>
struct JointTrackingError_
{
  typedef JointTrackingError_<ContainerAllocator> Type;

  JointTrackingError_()
    : header()
    , trajectory_id(0)
    , trajectory_time(0.0)
    , joint_names()
    , position_error()
    , velocity_error()
    , position_command()
    , velocity_command()  {
    }
  JointTrackingError_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , trajectory_id(0)
    , trajectory_time(0.0)
    , joint_names(_alloc)
    , position_error(_alloc)
    , velocity_error(_alloc)
    , position_command(_alloc)
    , velocity_command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _trajectory_id_type;
  _trajectory_id_type trajectory_id;

   typedef double _trajectory_time_type;
  _trajectory_time_type trajectory_time;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_error_type;
  _position_error_type position_error;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_error_type;
  _velocity_error_type velocity_error;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_command_type;
  _position_command_type position_command;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _velocity_command_type;
  _velocity_command_type velocity_command;





  typedef boost::shared_ptr< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> const> ConstPtr;

}; // struct JointTrackingError_

typedef ::intera_motion_msgs::JointTrackingError_<std::allocator<void> > JointTrackingError;

typedef boost::shared_ptr< ::intera_motion_msgs::JointTrackingError > JointTrackingErrorPtr;
typedef boost::shared_ptr< ::intera_motion_msgs::JointTrackingError const> JointTrackingErrorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_motion_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'intera_core_msgs': ['/home/sytasch/ROS/sawyer_robot/catkin_ws/src/intera_common/intera_core_msgs/msg', '/home/sytasch/ROS/sawyer_robot/catkin_ws/devel/share/intera_core_msgs/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'intera_motion_msgs': ['/home/sytasch/ROS/sawyer_robot/catkin_ws/src/intera_common/intera_motion_msgs/msg', '/home/sytasch/ROS/sawyer_robot/catkin_ws/devel/share/intera_motion_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a564fcc23df67e287d3c4c2aa3aef83b";
  }

  static const char* value(const ::intera_motion_msgs::JointTrackingError_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa564fcc23df67e28ULL;
  static const uint64_t static_value2 = 0x7d3c4c2aa3aef83bULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_motion_msgs/JointTrackingError";
  }

  static const char* value(const ::intera_motion_msgs::JointTrackingError_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message will be published from TrackingErrorPlugin.\n\
# It contains the joint-space tracking error data for diagnostics.\n\
Header header\n\
\n\
# ID for the trajectory.\n\
uint32 trajectory_id\n\
\n\
# Reference time since start of trajectory in seconds.\n\
float64 trajectory_time\n\
\n\
# name associated with each element for the vectors in this message\n\
string[] joint_names\n\
\n\
# position_error = position_measured - position_command\n\
# units:  radians\n\
float64[] position_error\n\
\n\
# velocity_error = velocity_measured - velocity_command\n\
# units:  radians per second\n\
float64[] velocity_error\n\
\n\
# joint position that is commanded for each joint, in radians\n\
float64[] position_command\n\
\n\
# joint velocity that is commanded for each joint, in radians per second\n\
float64[] velocity_command\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::intera_motion_msgs::JointTrackingError_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.trajectory_id);
      stream.next(m.trajectory_time);
      stream.next(m.joint_names);
      stream.next(m.position_error);
      stream.next(m.velocity_error);
      stream.next(m.position_command);
      stream.next(m.velocity_command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointTrackingError_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_motion_msgs::JointTrackingError_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_motion_msgs::JointTrackingError_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "trajectory_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.trajectory_id);
    s << indent << "trajectory_time: ";
    Printer<double>::stream(s, indent + "  ", v.trajectory_time);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "position_error[]" << std::endl;
    for (size_t i = 0; i < v.position_error.size(); ++i)
    {
      s << indent << "  position_error[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position_error[i]);
    }
    s << indent << "velocity_error[]" << std::endl;
    for (size_t i = 0; i < v.velocity_error.size(); ++i)
    {
      s << indent << "  velocity_error[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity_error[i]);
    }
    s << indent << "position_command[]" << std::endl;
    for (size_t i = 0; i < v.position_command.size(); ++i)
    {
      s << indent << "  position_command[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position_command[i]);
    }
    s << indent << "velocity_command[]" << std::endl;
    for (size_t i = 0; i < v.velocity_command.size(); ++i)
    {
      s << indent << "  velocity_command[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.velocity_command[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_MOTION_MSGS_MESSAGE_JOINTTRACKINGERROR_H
