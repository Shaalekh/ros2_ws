# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shaalekh/Desktop/ros2_ws/src/customs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shaalekh/Desktop/ros2_ws/src/customs/build

# Include any dependencies generated for this target.
include CMakeFiles/customs_s__rosidl_typesupport_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/customs_s__rosidl_typesupport_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/customs_s__rosidl_typesupport_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/customs_s__rosidl_typesupport_c.dir/flags.make

CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o: CMakeFiles/customs_s__rosidl_typesupport_c.dir/flags.make
CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o: rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c
CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o: CMakeFiles/customs_s__rosidl_typesupport_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/shaalekh/Desktop/ros2_ws/src/customs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o"
	/usr/bin/aarch64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o -MF CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o.d -o CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o -c /home/shaalekh/Desktop/ros2_ws/src/customs/build/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c

CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.i"
	/usr/bin/aarch64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shaalekh/Desktop/ros2_ws/src/customs/build/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c > CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.i

CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.s"
	/usr/bin/aarch64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shaalekh/Desktop/ros2_ws/src/customs/build/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c -o CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.s

# Object files for target customs_s__rosidl_typesupport_c
customs_s__rosidl_typesupport_c_OBJECTS = \
"CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o"

# External object files for target customs_s__rosidl_typesupport_c
customs_s__rosidl_typesupport_c_EXTERNAL_OBJECTS =

rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: CMakeFiles/customs_s__rosidl_typesupport_c.dir/rosidl_generator_py/customs/_customs_s.ep.rosidl_typesupport_c.c.o
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: CMakeFiles/customs_s__rosidl_typesupport_c.dir/build.make
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: libcustoms__rosidl_generator_py.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: libcustoms__rosidl_typesupport_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/librmw.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: libcustoms__rosidl_generator_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_typesupport_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libgeometry_msgs__rosidl_generator_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_typesupport_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libstd_msgs__rosidl_generator_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_typesupport_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libservice_msgs__rosidl_generator_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/librosidl_dynamic_typesupport.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/librosidl_typesupport_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/libbuiltin_interfaces__rosidl_generator_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/librosidl_runtime_c.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: /opt/ros/jazzy/lib/librcutils.so
rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so: CMakeFiles/customs_s__rosidl_typesupport_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/shaalekh/Desktop/ros2_ws/src/customs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/customs_s__rosidl_typesupport_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/customs_s__rosidl_typesupport_c.dir/build: rosidl_generator_py/customs/customs_s__rosidl_typesupport_c.so
.PHONY : CMakeFiles/customs_s__rosidl_typesupport_c.dir/build

CMakeFiles/customs_s__rosidl_typesupport_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/customs_s__rosidl_typesupport_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/customs_s__rosidl_typesupport_c.dir/clean

CMakeFiles/customs_s__rosidl_typesupport_c.dir/depend:
	cd /home/shaalekh/Desktop/ros2_ws/src/customs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shaalekh/Desktop/ros2_ws/src/customs /home/shaalekh/Desktop/ros2_ws/src/customs /home/shaalekh/Desktop/ros2_ws/src/customs/build /home/shaalekh/Desktop/ros2_ws/src/customs/build /home/shaalekh/Desktop/ros2_ws/src/customs/build/CMakeFiles/customs_s__rosidl_typesupport_c.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/customs_s__rosidl_typesupport_c.dir/depend

