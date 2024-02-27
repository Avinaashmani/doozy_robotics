// Generated by gencpp from file robotnik_base_hw_sim/PickState.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_BASE_HW_SIM_MESSAGE_PICKSTATE_H
#define ROBOTNIK_BASE_HW_SIM_MESSAGE_PICKSTATE_H


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
struct PickState_
{
  typedef PickState_<ContainerAllocator> Type;

  PickState_()
    : id()
    , robot_link()
    , object_link()  {
    }
  PickState_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , robot_link(_alloc)
    , object_link(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _robot_link_type;
  _robot_link_type robot_link;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _object_link_type;
  _object_link_type object_link;





  typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> const> ConstPtr;

}; // struct PickState_

typedef ::robotnik_base_hw_sim::PickState_<std::allocator<void> > PickState;

typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickState > PickStatePtr;
typedef boost::shared_ptr< ::robotnik_base_hw_sim::PickState const> PickStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_base_hw_sim::PickState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_base_hw_sim::PickState_<ContainerAllocator1> & lhs, const ::robotnik_base_hw_sim::PickState_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.robot_link == rhs.robot_link &&
    lhs.object_link == rhs.object_link;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_base_hw_sim::PickState_<ContainerAllocator1> & lhs, const ::robotnik_base_hw_sim::PickState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_base_hw_sim

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32d0a87c73c7ac6e9560c3de9aff0951";
  }

  static const char* value(const ::robotnik_base_hw_sim::PickState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32d0a87c73c7ac6eULL;
  static const uint64_t static_value2 = 0x9560c3de9aff0951ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_base_hw_sim/PickState";
  }

  static const char* value(const ::robotnik_base_hw_sim::PickState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string id\n"
"string robot_link\n"
"string object_link\n"
;
  }

  static const char* value(const ::robotnik_base_hw_sim::PickState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.robot_link);
      stream.next(m.object_link);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PickState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_base_hw_sim::PickState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_base_hw_sim::PickState_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "robot_link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.robot_link);
    s << indent << "object_link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.object_link);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_BASE_HW_SIM_MESSAGE_PICKSTATE_H
