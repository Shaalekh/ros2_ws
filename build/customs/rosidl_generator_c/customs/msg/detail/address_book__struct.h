// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customs:msg/AddressBook.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "customs/msg/address_book.h"


#ifndef CUSTOMS__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
#define CUSTOMS__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PHONE_TYPE_HOME'.
enum
{
  customs__msg__AddressBook__PHONE_TYPE_HOME = 0
};

/// Constant 'PHONE_TYPE_WORK'.
enum
{
  customs__msg__AddressBook__PHONE_TYPE_WORK = 1
};

/// Constant 'PHONE_TYPE_MOBILE'.
enum
{
  customs__msg__AddressBook__PHONE_TYPE_MOBILE = 2
};

// Include directives for member types
// Member 'first_name'
// Member 'last_name'
// Member 'phone_number'
// Member 'phone_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AddressBook in the package customs.
typedef struct customs__msg__AddressBook
{
  rosidl_runtime_c__String first_name;
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String phone_number;
  rosidl_runtime_c__String phone_type;
} customs__msg__AddressBook;

// Struct for a sequence of customs__msg__AddressBook.
typedef struct customs__msg__AddressBook__Sequence
{
  customs__msg__AddressBook * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customs__msg__AddressBook__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMS__MSG__DETAIL__ADDRESS_BOOK__STRUCT_H_
