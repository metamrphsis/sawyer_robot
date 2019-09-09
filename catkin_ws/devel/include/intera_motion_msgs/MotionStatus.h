// Generated by gencpp from file intera_motion_msgs/MotionStatus.msg
// DO NOT EDIT!


#ifndef INTERA_MOTION_MSGS_MESSAGE_MOTIONSTATUS_H
#define INTERA_MOTION_MSGS_MESSAGE_MOTIONSTATUS_H


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
struct MotionStatus_
{
  typedef MotionStatus_<ContainerAllocator> Type;

  MotionStatus_()
    : header()
    , motion_status()
    , current_trajectory()
    , current_waypoint(0)
    , motion_request(0)  {
    }
  MotionStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , motion_status(_alloc)
    , current_trajectory(_alloc)
    , current_waypoint(0)
    , motion_request(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _motion_status_type;
  _motion_status_type motion_status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _current_trajectory_type;
  _current_trajectory_type current_trajectory;

   typedef uint32_t _current_waypoint_type;
  _current_waypoint_type current_waypoint;

   typedef uint32_t _motion_request_type;
  _motion_request_type motion_request;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_IDLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_PENDING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_RUNNING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_STOPPING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_DONE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_PREEMPTED;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MOTION_ERROR;

  typedef boost::shared_ptr< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MotionStatus_

typedef ::intera_motion_msgs::MotionStatus_<std::allocator<void> > MotionStatus;

typedef boost::shared_ptr< ::intera_motion_msgs::MotionStatus > MotionStatusPtr;
typedef boost::shared_ptr< ::intera_motion_msgs::MotionStatus const> MotionStatusConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_IDLE =
        
          "idle"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_PENDING =
        
          "pending"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_RUNNING =
        
          "running"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_STOPPING =
        
          "stopping"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_DONE =
        
          "done"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_PREEMPTED =
        
          "preempted"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MotionStatus_<ContainerAllocator>::MOTION_ERROR =
        
          "error"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_motion_msgs::MotionStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "178c2a9a52d756f9d73396be4ec1a07c";
  }

  static const char* value(const ::intera_motion_msgs::MotionStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x178c2a9a52d756f9ULL;
  static const uint64_t static_value2 = 0xd73396be4ec1a07cULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_motion_msgs/MotionStatus";
  }

  static const char* value(const ::intera_motion_msgs::MotionStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# motion status\n\
Header header\n\
string motion_status\n\
string current_trajectory\n\
uint32 current_waypoint\n\
uint32 motion_request\n\
\n\
# motion_status enum values:\n\
string MOTION_IDLE=idle\n\
string MOTION_PENDING=pending\n\
string MOTION_RUNNING=running\n\
string MOTION_STOPPING=stopping\n\
string MOTION_DONE=done\n\
string MOTION_PREEMPTED=preempted\n\
string MOTION_ERROR=error\n\
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

  static const char* value(const ::intera_motion_msgs::MotionStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.motion_status);
      stream.next(m.current_trajectory);
      stream.next(m.current_waypoint);
      stream.next(m.motion_request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotionStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_motion_msgs::MotionStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_motion_msgs::MotionStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "motion_status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.motion_status);
    s << indent << "current_trajectory: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.current_trajectory);
    s << indent << "current_waypoint: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.current_waypoint);
    s << indent << "motion_request: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.motion_request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_MOTION_MSGS_MESSAGE_MOTIONSTATUS_H
