// Generated by gencpp from file dolly_action_msgs/amrDockFeedback.msg
// DO NOT EDIT!


#ifndef DOLLY_ACTION_MSGS_MESSAGE_AMRDOCKFEEDBACK_H
#define DOLLY_ACTION_MSGS_MESSAGE_AMRDOCKFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dolly_action_msgs
{
template <class ContainerAllocator>
struct amrDockFeedback_
{
  typedef amrDockFeedback_<ContainerAllocator> Type;

  amrDockFeedback_()
    : dist_to_pallet(0.0)  {
    }
  amrDockFeedback_(const ContainerAllocator& _alloc)
    : dist_to_pallet(0.0)  {
  (void)_alloc;
    }



   typedef double _dist_to_pallet_type;
  _dist_to_pallet_type dist_to_pallet;





  typedef boost::shared_ptr< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct amrDockFeedback_

typedef ::dolly_action_msgs::amrDockFeedback_<std::allocator<void> > amrDockFeedback;

typedef boost::shared_ptr< ::dolly_action_msgs::amrDockFeedback > amrDockFeedbackPtr;
typedef boost::shared_ptr< ::dolly_action_msgs::amrDockFeedback const> amrDockFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator1> & lhs, const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.dist_to_pallet == rhs.dist_to_pallet;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator1> & lhs, const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dolly_action_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf332c4cd7d1f3d307d37e1a19b0c83e";
  }

  static const char* value(const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf332c4cd7d1f3d3ULL;
  static const uint64_t static_value2 = 0x07d37e1a19b0c83eULL;
};

template<class ContainerAllocator>
struct DataType< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dolly_action_msgs/amrDockFeedback";
  }

  static const char* value(const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"float64 dist_to_pallet\n"
"\n"
"\n"
;
  }

  static const char* value(const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dist_to_pallet);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct amrDockFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dolly_action_msgs::amrDockFeedback_<ContainerAllocator>& v)
  {
    s << indent << "dist_to_pallet: ";
    Printer<double>::stream(s, indent + "  ", v.dist_to_pallet);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOLLY_ACTION_MSGS_MESSAGE_AMRDOCKFEEDBACK_H
