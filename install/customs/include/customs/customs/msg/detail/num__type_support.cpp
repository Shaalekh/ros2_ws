// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from customs:msg/Num.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "customs/msg/detail/num__functions.h"
#include "customs/msg/detail/num__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace customs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Num_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) customs::msg::Num(_init);
}

void Num_fini_function(void * message_memory)
{
  auto typed_message = static_cast<customs::msg::Num *>(message_memory);
  typed_message->~Num();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Num_message_member_array[1] = {
  {
    "num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(customs::msg::Num, num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Num_message_members = {
  "customs::msg",  // message namespace
  "Num",  // message name
  1,  // number of fields
  sizeof(customs::msg::Num),
  false,  // has_any_key_member_
  Num_message_member_array,  // message members
  Num_init_function,  // function to initialize message memory (memory has to be allocated)
  Num_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Num_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Num_message_members,
  get_message_typesupport_handle_function,
  &customs__msg__Num__get_type_hash,
  &customs__msg__Num__get_type_description,
  &customs__msg__Num__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace customs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<customs::msg::Num>()
{
  return &::customs::msg::rosidl_typesupport_introspection_cpp::Num_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, customs, msg, Num)() {
  return &::customs::msg::rosidl_typesupport_introspection_cpp::Num_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
