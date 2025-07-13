// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customs:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "customs/msg/address_book.hpp"


#ifndef CUSTOMS__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
#define CUSTOMS__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "customs/msg/detail/address_book__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace customs
{

namespace msg
{

namespace builder
{

class Init_AddressBook_phone_type
{
public:
  explicit Init_AddressBook_phone_type(::customs::msg::AddressBook & msg)
  : msg_(msg)
  {}
  ::customs::msg::AddressBook phone_type(::customs::msg::AddressBook::_phone_type_type arg)
  {
    msg_.phone_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customs::msg::AddressBook msg_;
};

class Init_AddressBook_phone_number
{
public:
  explicit Init_AddressBook_phone_number(::customs::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_type phone_number(::customs::msg::AddressBook::_phone_number_type arg)
  {
    msg_.phone_number = std::move(arg);
    return Init_AddressBook_phone_type(msg_);
  }

private:
  ::customs::msg::AddressBook msg_;
};

class Init_AddressBook_last_name
{
public:
  explicit Init_AddressBook_last_name(::customs::msg::AddressBook & msg)
  : msg_(msg)
  {}
  Init_AddressBook_phone_number last_name(::customs::msg::AddressBook::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_AddressBook_phone_number(msg_);
  }

private:
  ::customs::msg::AddressBook msg_;
};

class Init_AddressBook_first_name
{
public:
  Init_AddressBook_first_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddressBook_last_name first_name(::customs::msg::AddressBook::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_AddressBook_last_name(msg_);
  }

private:
  ::customs::msg::AddressBook msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::customs::msg::AddressBook>()
{
  return customs::msg::builder::Init_AddressBook_first_name();
}

}  // namespace customs

#endif  // CUSTOMS__MSG__DETAIL__ADDRESS_BOOK__BUILDER_HPP_
