// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customs:msg/Sphere.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "customs/msg/sphere.hpp"


#ifndef CUSTOMS__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define CUSTOMS__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "customs/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace customs
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::customs::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::customs::msg::Sphere radius(::customs::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customs::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::customs::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::customs::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::customs::msg::Sphere>()
{
  return customs::msg::builder::Init_Sphere_center();
}

}  // namespace customs

#endif  // CUSTOMS__MSG__DETAIL__SPHERE__BUILDER_HPP_
