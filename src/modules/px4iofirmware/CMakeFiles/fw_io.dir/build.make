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

# Utility rule file for fw_io.

# Include the progress variables for this target.
include src/modules/px4iofirmware/CMakeFiles/fw_io.dir/progress.make

src/modules/px4iofirmware/CMakeFiles/fw_io: src/modules/px4iofirmware/px4io-v2.bin


src/modules/px4iofirmware/px4io-v2.bin: src/modules/px4iofirmware/px4io-v2
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating px4io-v2.bin"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/px4iofirmware && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-objcopy -O binary px4io-v2 px4io-v2.bin

fw_io: src/modules/px4iofirmware/CMakeFiles/fw_io
fw_io: src/modules/px4iofirmware/px4io-v2.bin
fw_io: src/modules/px4iofirmware/CMakeFiles/fw_io.dir/build.make

.PHONY : fw_io

# Rule to build all files generated by this target.
src/modules/px4iofirmware/CMakeFiles/fw_io.dir/build: fw_io

.PHONY : src/modules/px4iofirmware/CMakeFiles/fw_io.dir/build

src/modules/px4iofirmware/CMakeFiles/fw_io.dir/clean:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/px4iofirmware && $(CMAKE_COMMAND) -P CMakeFiles/fw_io.dir/cmake_clean.cmake
.PHONY : src/modules/px4iofirmware/CMakeFiles/fw_io.dir/clean

src/modules/px4iofirmware/CMakeFiles/fw_io.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/src/modules/px4iofirmware /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/px4iofirmware /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/modules/px4iofirmware/CMakeFiles/fw_io.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/px4iofirmware/CMakeFiles/fw_io.dir/depend

