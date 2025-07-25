// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from customs:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#include "customs/srv/detail/add_three_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_customs
const rosidl_type_hash_t *
customs__srv__AddThreeInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x2c, 0xc4, 0xde, 0xd5, 0x59, 0x8f, 0xb6,
      0x81, 0x5c, 0xac, 0x06, 0x11, 0x6e, 0x58, 0x06,
      0x92, 0x0e, 0x37, 0x4a, 0xf1, 0x7a, 0x5b, 0x2e,
      0x9b, 0x67, 0xdd, 0x6f, 0x48, 0xa9, 0x13, 0xbd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_customs
const rosidl_type_hash_t *
customs__srv__AddThreeInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x94, 0x50, 0x3a, 0xcd, 0x19, 0x26, 0x66,
      0x32, 0x13, 0xfc, 0xf4, 0x22, 0x29, 0x71, 0x98,
      0x04, 0x78, 0xe3, 0xa1, 0x10, 0x45, 0x9d, 0x31,
      0xb1, 0x92, 0x86, 0xec, 0x5c, 0x25, 0x52, 0x24,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_customs
const rosidl_type_hash_t *
customs__srv__AddThreeInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x2c, 0xa0, 0xd3, 0x7f, 0x11, 0x0b, 0x7a,
      0xc7, 0xe4, 0x94, 0x93, 0x05, 0x05, 0xab, 0x91,
      0x71, 0xd0, 0x36, 0xdc, 0x2d, 0x5d, 0x9c, 0xc6,
      0xd4, 0x0e, 0xd2, 0xfc, 0x1d, 0xb0, 0x05, 0xbb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_customs
const rosidl_type_hash_t *
customs__srv__AddThreeInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0xce, 0xad, 0x0c, 0x5e, 0x0f, 0x6c, 0x76,
      0x8d, 0x37, 0x70, 0xea, 0xd2, 0xd3, 0xd9, 0xbd,
      0x5f, 0xe7, 0xa2, 0x7d, 0x50, 0xe4, 0x37, 0x86,
      0x0f, 0xe5, 0x6b, 0x17, 0x94, 0xf9, 0xcb, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char customs__srv__AddThreeInts__TYPE_NAME[] = "customs/srv/AddThreeInts";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char customs__srv__AddThreeInts_Event__TYPE_NAME[] = "customs/srv/AddThreeInts_Event";
static char customs__srv__AddThreeInts_Request__TYPE_NAME[] = "customs/srv/AddThreeInts_Request";
static char customs__srv__AddThreeInts_Response__TYPE_NAME[] = "customs/srv/AddThreeInts_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char customs__srv__AddThreeInts__FIELD_NAME__request_message[] = "request_message";
static char customs__srv__AddThreeInts__FIELD_NAME__response_message[] = "response_message";
static char customs__srv__AddThreeInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field customs__srv__AddThreeInts__FIELDS[] = {
  {
    {customs__srv__AddThreeInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {customs__srv__AddThreeInts_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {customs__srv__AddThreeInts_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {customs__srv__AddThreeInts_Event__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription customs__srv__AddThreeInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Event__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
customs__srv__AddThreeInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {customs__srv__AddThreeInts__TYPE_NAME, 24, 24},
      {customs__srv__AddThreeInts__FIELDS, 3, 3},
    },
    {customs__srv__AddThreeInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = customs__srv__AddThreeInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = customs__srv__AddThreeInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = customs__srv__AddThreeInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char customs__srv__AddThreeInts_Request__FIELD_NAME__a[] = "a";
static char customs__srv__AddThreeInts_Request__FIELD_NAME__b[] = "b";
static char customs__srv__AddThreeInts_Request__FIELD_NAME__c[] = "c";

static rosidl_runtime_c__type_description__Field customs__srv__AddThreeInts_Request__FIELDS[] = {
  {
    {customs__srv__AddThreeInts_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Request__FIELD_NAME__c, 1, 1},
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
customs__srv__AddThreeInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {customs__srv__AddThreeInts_Request__TYPE_NAME, 32, 32},
      {customs__srv__AddThreeInts_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char customs__srv__AddThreeInts_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field customs__srv__AddThreeInts_Response__FIELDS[] = {
  {
    {customs__srv__AddThreeInts_Response__FIELD_NAME__sum, 3, 3},
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
customs__srv__AddThreeInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {customs__srv__AddThreeInts_Response__TYPE_NAME, 33, 33},
      {customs__srv__AddThreeInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char customs__srv__AddThreeInts_Event__FIELD_NAME__info[] = "info";
static char customs__srv__AddThreeInts_Event__FIELD_NAME__request[] = "request";
static char customs__srv__AddThreeInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field customs__srv__AddThreeInts_Event__FIELDS[] = {
  {
    {customs__srv__AddThreeInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {customs__srv__AddThreeInts_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {customs__srv__AddThreeInts_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription customs__srv__AddThreeInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {customs__srv__AddThreeInts_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
customs__srv__AddThreeInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {customs__srv__AddThreeInts_Event__TYPE_NAME, 30, 30},
      {customs__srv__AddThreeInts_Event__FIELDS, 3, 3},
    },
    {customs__srv__AddThreeInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = customs__srv__AddThreeInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = customs__srv__AddThreeInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b\n"
  "int64 c\n"
  "---\n"
  "int64 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
customs__srv__AddThreeInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {customs__srv__AddThreeInts__TYPE_NAME, 24, 24},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
customs__srv__AddThreeInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {customs__srv__AddThreeInts_Request__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
customs__srv__AddThreeInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {customs__srv__AddThreeInts_Response__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
customs__srv__AddThreeInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {customs__srv__AddThreeInts_Event__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
customs__srv__AddThreeInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *customs__srv__AddThreeInts__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *customs__srv__AddThreeInts_Event__get_individual_type_description_source(NULL);
    sources[3] = *customs__srv__AddThreeInts_Request__get_individual_type_description_source(NULL);
    sources[4] = *customs__srv__AddThreeInts_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
customs__srv__AddThreeInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *customs__srv__AddThreeInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
customs__srv__AddThreeInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *customs__srv__AddThreeInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
customs__srv__AddThreeInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *customs__srv__AddThreeInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *customs__srv__AddThreeInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *customs__srv__AddThreeInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
