// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from customs:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include "customs/msg/detail/address_book__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_customs
const rosidl_type_hash_t *
customs__msg__AddressBook__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0xbd, 0xe1, 0x4e, 0x0c, 0x21, 0x01, 0xb7,
      0xc2, 0xaf, 0xc2, 0x77, 0xe9, 0x98, 0x7d, 0x48,
      0x28, 0x45, 0xaa, 0x96, 0x69, 0x87, 0x4e, 0x25,
      0xf7, 0x41, 0x70, 0x11, 0xff, 0x85, 0x99, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char customs__msg__AddressBook__TYPE_NAME[] = "customs/msg/AddressBook";

// Define type names, field names, and default values
static char customs__msg__AddressBook__FIELD_NAME__first_name[] = "first_name";
static char customs__msg__AddressBook__FIELD_NAME__last_name[] = "last_name";
static char customs__msg__AddressBook__FIELD_NAME__phone_number[] = "phone_number";
static char customs__msg__AddressBook__FIELD_NAME__phone_type[] = "phone_type";

static rosidl_runtime_c__type_description__Field customs__msg__AddressBook__FIELDS[] = {
  {
    {customs__msg__AddressBook__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {customs__msg__AddressBook__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {customs__msg__AddressBook__FIELD_NAME__phone_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {customs__msg__AddressBook__FIELD_NAME__phone_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
customs__msg__AddressBook__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {customs__msg__AddressBook__TYPE_NAME, 23, 23},
      {customs__msg__AddressBook__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 PHONE_TYPE_HOME=0\n"
  "uint8 PHONE_TYPE_WORK=1\n"
  "uint8 PHONE_TYPE_MOBILE=2\n"
  "\n"
  "string first_name\n"
  "string last_name\n"
  "string phone_number\n"
  "string phone_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
customs__msg__AddressBook__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {customs__msg__AddressBook__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 147, 147},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
customs__msg__AddressBook__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *customs__msg__AddressBook__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
