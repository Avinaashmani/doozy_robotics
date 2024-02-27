// Generated by gencpp from file robotnik_base_hw_sim/Pick.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_BASE_HW_SIM_MESSAGE_PICK_H
#define ROBOTNIK_BASE_HW_SIM_MESSAGE_PICK_H

#include <ros/service_traits.h>


#include <robotnik_base_hw_sim/PickRequest.h>
#include <robotnik_base_hw_sim/PickResponse.h>


namespace robotnik_base_hw_sim
{

struct Pick
{

typedef PickRequest Request;
typedef PickResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Pick
} // namespace robotnik_base_hw_sim


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotnik_base_hw_sim::Pick > {
  static const char* value()
  {
    return "3cf02f67e5f48e886033088859c7e58a";
  }

  static const char* value(const ::robotnik_base_hw_sim::Pick&) { return value(); }
};

template<>
struct DataType< ::robotnik_base_hw_sim::Pick > {
  static const char* value()
  {
    return "robotnik_base_hw_sim/Pick";
  }

  static const char* value(const ::robotnik_base_hw_sim::Pick&) { return value(); }
};


// service_traits::MD5Sum< ::robotnik_base_hw_sim::PickRequest> should match
// service_traits::MD5Sum< ::robotnik_base_hw_sim::Pick >
template<>
struct MD5Sum< ::robotnik_base_hw_sim::PickRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_base_hw_sim::Pick >::value();
  }
  static const char* value(const ::robotnik_base_hw_sim::PickRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_base_hw_sim::PickRequest> should match
// service_traits::DataType< ::robotnik_base_hw_sim::Pick >
template<>
struct DataType< ::robotnik_base_hw_sim::PickRequest>
{
  static const char* value()
  {
    return DataType< ::robotnik_base_hw_sim::Pick >::value();
  }
  static const char* value(const ::robotnik_base_hw_sim::PickRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotnik_base_hw_sim::PickResponse> should match
// service_traits::MD5Sum< ::robotnik_base_hw_sim::Pick >
template<>
struct MD5Sum< ::robotnik_base_hw_sim::PickResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_base_hw_sim::Pick >::value();
  }
  static const char* value(const ::robotnik_base_hw_sim::PickResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_base_hw_sim::PickResponse> should match
// service_traits::DataType< ::robotnik_base_hw_sim::Pick >
template<>
struct DataType< ::robotnik_base_hw_sim::PickResponse>
{
  static const char* value()
  {
    return DataType< ::robotnik_base_hw_sim::Pick >::value();
  }
  static const char* value(const ::robotnik_base_hw_sim::PickResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTNIK_BASE_HW_SIM_MESSAGE_PICK_H
