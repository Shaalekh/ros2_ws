#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "customs::customs__rosidl_typesupport_fastrtps_cpp" for configuration "Debug"
set_property(TARGET customs::customs__rosidl_typesupport_fastrtps_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(customs::customs__rosidl_typesupport_fastrtps_cpp PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libcustoms__rosidl_typesupport_fastrtps_cpp.so"
  IMPORTED_SONAME_DEBUG "libcustoms__rosidl_typesupport_fastrtps_cpp.so"
  )

list(APPEND _cmake_import_check_targets customs::customs__rosidl_typesupport_fastrtps_cpp )
list(APPEND _cmake_import_check_files_for_customs::customs__rosidl_typesupport_fastrtps_cpp "${_IMPORT_PREFIX}/lib/libcustoms__rosidl_typesupport_fastrtps_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
