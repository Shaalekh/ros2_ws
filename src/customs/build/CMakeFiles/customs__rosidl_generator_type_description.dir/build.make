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

# Utility rule file for customs__rosidl_generator_type_description.

# Include any custom commands dependencies for this target.
include CMakeFiles/customs__rosidl_generator_type_description.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/customs__rosidl_generator_type_description.dir/progress.make

CMakeFiles/customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/msg/Num.json
CMakeFiles/customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/msg/Sphere.json
CMakeFiles/customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/msg/AddressBook.json
CMakeFiles/customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/srv/AddThreeInts.json

rosidl_generator_type_description/customs/msg/Num.json: /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description
rosidl_generator_type_description/customs/msg/Num.json: /opt/ros/jazzy/lib/python3.12/site-packages/rosidl_generator_type_description/__init__.py
rosidl_generator_type_description/customs/msg/Num.json: rosidl_adapter/customs/msg/Num.idl
rosidl_generator_type_description/customs/msg/Num.json: rosidl_adapter/customs/msg/Sphere.idl
rosidl_generator_type_description/customs/msg/Num.json: rosidl_adapter/customs/msg/AddressBook.idl
rosidl_generator_type_description/customs/msg/Num.json: rosidl_adapter/customs/srv/AddThreeInts.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/shaalekh/Desktop/ros2_ws/src/customs/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating type hashes for ROS interfaces"
	/usr/bin/python3 /opt/ros/jazzy/lib/rosidl_generator_type_description/rosidl_generator_type_description --generator-arguments-file /home/shaalekh/Desktop/ros2_ws/src/customs/build/rosidl_generator_type_description__arguments.json

rosidl_generator_type_description/customs/msg/Sphere.json: rosidl_generator_type_description/customs/msg/Num.json
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_type_description/customs/msg/Sphere.json

rosidl_generator_type_description/customs/msg/AddressBook.json: rosidl_generator_type_description/customs/msg/Num.json
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_type_description/customs/msg/AddressBook.json

rosidl_generator_type_description/customs/srv/AddThreeInts.json: rosidl_generator_type_description/customs/msg/Num.json
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_type_description/customs/srv/AddThreeInts.json

customs__rosidl_generator_type_description: CMakeFiles/customs__rosidl_generator_type_description
customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/msg/AddressBook.json
customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/msg/Num.json
customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/msg/Sphere.json
customs__rosidl_generator_type_description: rosidl_generator_type_description/customs/srv/AddThreeInts.json
customs__rosidl_generator_type_description: CMakeFiles/customs__rosidl_generator_type_description.dir/build.make
.PHONY : customs__rosidl_generator_type_description

# Rule to build all files generated by this target.
CMakeFiles/customs__rosidl_generator_type_description.dir/build: customs__rosidl_generator_type_description
.PHONY : CMakeFiles/customs__rosidl_generator_type_description.dir/build

CMakeFiles/customs__rosidl_generator_type_description.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/customs__rosidl_generator_type_description.dir/cmake_clean.cmake
.PHONY : CMakeFiles/customs__rosidl_generator_type_description.dir/clean

CMakeFiles/customs__rosidl_generator_type_description.dir/depend:
	cd /home/shaalekh/Desktop/ros2_ws/src/customs/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shaalekh/Desktop/ros2_ws/src/customs /home/shaalekh/Desktop/ros2_ws/src/customs /home/shaalekh/Desktop/ros2_ws/src/customs/build /home/shaalekh/Desktop/ros2_ws/src/customs/build /home/shaalekh/Desktop/ros2_ws/src/customs/build/CMakeFiles/customs__rosidl_generator_type_description.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/customs__rosidl_generator_type_description.dir/depend

