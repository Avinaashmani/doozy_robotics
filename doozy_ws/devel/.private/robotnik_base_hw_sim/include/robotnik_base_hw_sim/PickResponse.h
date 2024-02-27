// Generated by gencpp from file robotnik_base_hw_sim/PickResponse.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_BASE_HW_SIM_MESSAGE_PICKRESPONSE_H
#define ROBOTNIK_BASE_HW_SIM_MESSAGE_PICKRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_base_hw_sim
{
template <class ContainerAllocator>
struct PickResponse_
{
  typedef PickResponse_<ContainerAllocator> Type;

  PickResponse_()
    : success(false)
    , msg()  {
    }
  PickResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , msg(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _msg_type;
  _msg_type msg;





  typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PickResponse_

typedef ::robotnik_base_hw_sim::PickResponse_<std::allocator<void> > PickResponse;

typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickResponse > PickResponsePtr;
typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickResponse const> PickResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator1> & lhs, const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.msg == rhs.msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator1> & lhs, const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_base_hw_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e835b04f93d0b30fd8cb71e0967a16db";
  }

  static const char* value(const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe835b04f93d0b30fULL;
  static const uint64_t static_value2 = 0xd8cb71e0967a16dbULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_base_hw_sim/PickResponse";
  }

  static const char* value(const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string msg\n"
"\n"
;
  }

  static const char* value(const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_base_hw_sim::PickResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_BASE_HW_SIM_MESSAGE_PICKRESPONSE_H
