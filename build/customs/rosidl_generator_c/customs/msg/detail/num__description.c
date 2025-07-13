// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from customs:msg/Num.idl
// generated code does not contain a copyright notice

#include "customs/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_customs
const rosidl_type_hash_t *
customs__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0x11, 0xae, 0x28, 0x02, 0xc4, 0x03, 0xe1,
      0x3d, 0x3b, 0xb6, 0xee, 0xdd, 0xe4, 0x3a, 0x78,
      0x90, 0x90, 0x05, 0xd7, 0x3b, 0x9c, 0xff, 0x76,
      0x3a, 0x0f, 0xeb, 0x5b, 0xd9, 0x3f, 0x4b, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char customs__msg__Num__TYPE_NAME[] = "customs/msg/Num";

// Define type names, field names, and default values
static char customs__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field customs__msg__Num__FIELDS[] = {
  {
    {customs__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
customs__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {customs__msg__Num__TYPE_NAME, 15, 15},
      {customs__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
customs__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {customs__msg__Num__TYPE_NAME, 15, 15},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
customs__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *customs__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
