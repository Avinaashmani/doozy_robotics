// Generated by gencpp from file rb1_base_pad/enable_disable_padRequest.msg
// DO NOT EDIT!


#ifndef RB1_BASE_PAD_MESSAGE_ENABLE_DISABLE_PADREQUEST_H
#define RB1_BASE_PAD_MESSAGE_ENABLE_DISABLE_PADREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rb1_base_pad
{
template <class ContainerAllocator>
struct enable_disable_padRequest_
{
  typedef enable_disable_padRequest_<ContainerAllocator> Type;

  enable_disable_padRequest_()
    : value(false)  {
    }
  enable_disable_padRequest_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> const> ConstPtr;

}; // struct enable_disable_padRequest_

typedef ::rb1_base_pad::enable_disable_padRequest_<std::allocator<void> > enable_disable_padRequest;

typedef boost::shared_ptr< ::rb1_base_pad::enable_disable_padRequest > enable_disable_padRequestPtr;
typedef boost::shared_ptr< ::rb1_base_pad::enable_disable_padRequest const> enable_disable_padRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator1> & lhs, const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator1> & lhs, const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rb1_base_pad

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rb1_base_pad/enable_disable_padRequest";
  }

  static const char* value(const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n"
;
  }

  static const char* value(const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct enable_disable_padRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rb1_base_pad::enable_disable_padRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RB1_BASE_PAD_MESSAGE_ENABLE_DISABLE_PADREQUEST_H
