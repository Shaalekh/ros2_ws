// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from customs:msg/Num.idl
// generated code does not contain a copyright notice
#ifndef CUSTOMS__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CUSTOMS__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "customs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "customs/msg/detail/num__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
bool cdr_serialize_customs__msg__Num(
  const customs__msg__Num * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
bool cdr_deserialize_customs__msg__Num(
  eprosima::fastcdr::Cdr &,
  customs__msg__Num * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
size_t get_serialized_size_customs__msg__Num(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
size_t max_serialized_size_customs__msg__Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
bool cdr_serialize_key_customs__msg__Num(
  const customs__msg__Num * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
size_t get_serialized_size_key_customs__msg__Num(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
size_t max_serialized_size_key_customs__msg__Num(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customs, msg, Num)();

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMS__MSG__DETAIL__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
