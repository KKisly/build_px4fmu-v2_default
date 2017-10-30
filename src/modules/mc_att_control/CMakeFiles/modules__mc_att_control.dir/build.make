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
include src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/depend.make

# Include the progress variables for this target.
include src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/flags.make

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/flags.make
src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj: ../src/modules/mc_att_control/mc_att_control_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj -c /home/intrepid/src1029/Firmware/src/modules/mc_att_control/mc_att_control_main.cpp

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/modules/mc_att_control/mc_att_control_main.cpp > CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.i

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/modules/mc_att_control/mc_att_control_main.cpp -o CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.s

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.requires:

.PHONY : src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.requires

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.provides: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.requires
	$(MAKE) -f src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/build.make src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.provides.build
.PHONY : src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.provides

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.provides.build: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj


# Object files for target modules__mc_att_control
modules__mc_att_control_OBJECTS = \
"CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj"

# External object files for target modules__mc_att_control
modules__mc_att_control_EXTERNAL_OBJECTS =

src/modules/mc_att_control/libmodules__mc_att_control.a: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj
src/modules/mc_att_control/libmodules__mc_att_control.a: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/build.make
src/modules/mc_att_control/libmodules__mc_att_control.a: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmodules__mc_att_control.a"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control && $(CMAKE_COMMAND) -P CMakeFiles/modules__mc_att_control.dir/cmake_clean_target.cmake
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modules__mc_att_control.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/build: src/modules/mc_att_control/libmodules__mc_att_control.a

.PHONY : src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/build

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/requires: src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/mc_att_control_main.cpp.obj.requires

.PHONY : src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/requires

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/clean:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control && $(CMAKE_COMMAND) -P CMakeFiles/modules__mc_att_control.dir/cmake_clean.cmake
.PHONY : src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/clean

src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/src/modules/mc_att_control /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/mc_att_control/CMakeFiles/modules__mc_att_control.dir/depend

