// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customs:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "customs/msg/num.hpp"


#ifndef CUSTOMS__MSG__DETAIL__NUM__BUILDER_HPP_
#define CUSTOMS__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "customs/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace customs
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customs::msg::Num num(::customs::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customs::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::customs::msg::Num>()
{
  return customs::msg::builder::Init_Num_num();
}

}  // namespace customs

#endif  // CUSTOMS__MSG__DETAIL__NUM__BUILDER_HPP_
