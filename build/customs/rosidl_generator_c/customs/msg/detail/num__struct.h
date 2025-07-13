// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customs:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "customs/msg/num.h"


#ifndef CUSTOMS__MSG__DETAIL__NUM__STRUCT_H_
#define CUSTOMS__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package customs.
typedef struct customs__msg__Num
{
  int64_t num;
} customs__msg__Num;

// Struct for a sequence of customs__msg__Num.
typedef struct customs__msg__Num__Sequence
{
  customs__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customs__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMS__MSG__DETAIL__NUM__STRUCT_H_
