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
include src/modules/events/CMakeFiles/modules__events.dir/depend.make

# Include the progress variables for this target.
include src/modules/events/CMakeFiles/modules__events.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/events/CMakeFiles/modules__events.dir/flags.make

src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj: src/modules/events/CMakeFiles/modules__events.dir/flags.make
src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj: ../src/modules/events/send_event.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__events.dir/send_event.cpp.obj -c /home/intrepid/src1029/Firmware/src/modules/events/send_event.cpp

src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__events.dir/send_event.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/modules/events/send_event.cpp > CMakeFiles/modules__events.dir/send_event.cpp.i

src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__events.dir/send_event.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/modules/events/send_event.cpp -o CMakeFiles/modules__events.dir/send_event.cpp.s

src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.requires:

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.requires

src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.provides: src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.requires
	$(MAKE) -f src/modules/events/CMakeFiles/modules__events.dir/build.make src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.provides.build
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.provides

src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.provides.build: src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj


src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj: src/modules/events/CMakeFiles/modules__events.dir/flags.make
src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj: ../src/modules/events/temperature_calibration/accel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj -c /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/accel.cpp

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/accel.cpp > CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.i

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/accel.cpp -o CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.s

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.requires:

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.requires

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.provides: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.requires
	$(MAKE) -f src/modules/events/CMakeFiles/modules__events.dir/build.make src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.provides.build
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.provides

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.provides.build: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj


src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj: src/modules/events/CMakeFiles/modules__events.dir/flags.make
src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj: ../src/modules/events/temperature_calibration/baro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj -c /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/baro.cpp

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/baro.cpp > CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.i

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/baro.cpp -o CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.s

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.requires:

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.requires

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.provides: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.requires
	$(MAKE) -f src/modules/events/CMakeFiles/modules__events.dir/build.make src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.provides.build
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.provides

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.provides.build: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj


src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj: src/modules/events/CMakeFiles/modules__events.dir/flags.make
src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj: ../src/modules/events/temperature_calibration/gyro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj -c /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/gyro.cpp

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/gyro.cpp > CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.i

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/gyro.cpp -o CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.s

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.requires:

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.requires

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.provides: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.requires
	$(MAKE) -f src/modules/events/CMakeFiles/modules__events.dir/build.make src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.provides.build
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.provides

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.provides.build: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj


src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj: src/modules/events/CMakeFiles/modules__events.dir/flags.make
src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj: ../src/modules/events/temperature_calibration/task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj -c /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/task.cpp

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/task.cpp > CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.i

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/intrepid/src1029/Firmware/src/modules/events/temperature_calibration/task.cpp -o CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.s

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.requires:

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.requires

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.provides: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.requires
	$(MAKE) -f src/modules/events/CMakeFiles/modules__events.dir/build.make src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.provides.build
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.provides

src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.provides.build: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj


# Object files for target modules__events
modules__events_OBJECTS = \
"CMakeFiles/modules__events.dir/send_event.cpp.obj" \
"CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj" \
"CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj" \
"CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj" \
"CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj"

# External object files for target modules__events
modules__events_EXTERNAL_OBJECTS =

src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj
src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj
src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj
src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj
src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj
src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/build.make
src/modules/events/libmodules__events.a: src/modules/events/CMakeFiles/modules__events.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libmodules__events.a"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && $(CMAKE_COMMAND) -P CMakeFiles/modules__events.dir/cmake_clean_target.cmake
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modules__events.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/events/CMakeFiles/modules__events.dir/build: src/modules/events/libmodules__events.a

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/build

src/modules/events/CMakeFiles/modules__events.dir/requires: src/modules/events/CMakeFiles/modules__events.dir/send_event.cpp.obj.requires
src/modules/events/CMakeFiles/modules__events.dir/requires: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/accel.cpp.obj.requires
src/modules/events/CMakeFiles/modules__events.dir/requires: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/baro.cpp.obj.requires
src/modules/events/CMakeFiles/modules__events.dir/requires: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/gyro.cpp.obj.requires
src/modules/events/CMakeFiles/modules__events.dir/requires: src/modules/events/CMakeFiles/modules__events.dir/temperature_calibration/task.cpp.obj.requires

.PHONY : src/modules/events/CMakeFiles/modules__events.dir/requires

src/modules/events/CMakeFiles/modules__events.dir/clean:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events && $(CMAKE_COMMAND) -P CMakeFiles/modules__events.dir/cmake_clean.cmake
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/clean

src/modules/events/CMakeFiles/modules__events.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/src/modules/events /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/events/CMakeFiles/modules__events.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/events/CMakeFiles/modules__events.dir/depend

