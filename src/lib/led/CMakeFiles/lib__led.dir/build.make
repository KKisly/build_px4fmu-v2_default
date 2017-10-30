# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/intrepid/src1029/Firmware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/intrepid/src1029/Firmware/build_px4fmu-v2_default

# Include any dependencies generated for this target.
include src/lib/led/CMakeFiles/lib__led.dir/depend.make

# Include the progress variables for this target.
include src/lib/led/CMakeFiles/lib__led.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/led/CMakeFiles/lib__led.dir/flags.make

src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj: src/lib/led/CMakeFiles/lib__led.dir/flags.make
src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj: ../src/lib/led/led.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib__led.dir/led.cpp.obj -c /home/intrepid/src1029/Firmware/src/lib/led/led.cpp

src/lib/led/CMakeFiles/lib__led.dir/led.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib__led.dir/led.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/lib/led/led.cpp > CMakeFiles/lib__led.dir/led.cpp.i

src/lib/led/CMakeFiles/lib__led.dir/led.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib__led.dir/led.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/lib/led/led.cpp -o CMakeFiles/lib__led.dir/led.cpp.s

src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.requires:

.PHONY : src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.requires

src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.provides: src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.requires
	$(MAKE) -f src/lib/led/CMakeFiles/lib__led.dir/build.make src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.provides.build
.PHONY : src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.provides

src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.provides.build: src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj


# Object files for target lib__led
lib__led_OBJECTS = \
"CMakeFiles/lib__led.dir/led.cpp.obj"

# External object files for target lib__led
lib__led_EXTERNAL_OBJECTS =

src/lib/led/liblib__led.a: src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj
src/lib/led/liblib__led.a: src/lib/led/CMakeFiles/lib__led.dir/build.make
src/lib/led/liblib__led.a: src/lib/led/CMakeFiles/lib__led.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblib__led.a"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led && $(CMAKE_COMMAND) -P CMakeFiles/lib__led.dir/cmake_clean_target.cmake
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib__led.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/led/CMakeFiles/lib__led.dir/build: src/lib/led/liblib__led.a

.PHONY : src/lib/led/CMakeFiles/lib__led.dir/build

src/lib/led/CMakeFiles/lib__led.dir/requires: src/lib/led/CMakeFiles/lib__led.dir/led.cpp.obj.requires

.PHONY : src/lib/led/CMakeFiles/lib__led.dir/requires

src/lib/led/CMakeFiles/lib__led.dir/clean:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led && $(CMAKE_COMMAND) -P CMakeFiles/lib__led.dir/cmake_clean.cmake
.PHONY : src/lib/led/CMakeFiles/lib__led.dir/clean

src/lib/led/CMakeFiles/lib__led.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/src/lib/led /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/lib/led/CMakeFiles/lib__led.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/led/CMakeFiles/lib__led.dir/depend

