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

# Utility rule file for menuconfig_px4fmu-v2.

# Include the progress variables for this target.
include CMakeFiles/menuconfig_px4fmu-v2.dir/progress.make

CMakeFiles/menuconfig_px4fmu-v2:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running NuttX make menuconfig for px4fmu-v2 with nsh"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX/nuttx && /usr/bin/make --no-print-directory -C /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX/nuttx CONFIG_ARCH_BOARD=px4fmu-v2 menuconfig
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX/nuttx && /bin/cp /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX/nuttx/.config /home/intrepid/src1029/Firmware/nuttx-configs/px4fmu-v2/nsh/defconfig
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX/nuttx && /home/intrepid/src1029/Firmware/Tools/nuttx_defconf_tool.sh /home/intrepid/src1029/Firmware/nuttx-configs/px4fmu-v2/nsh/defconfig

menuconfig_px4fmu-v2: CMakeFiles/menuconfig_px4fmu-v2
menuconfig_px4fmu-v2: CMakeFiles/menuconfig_px4fmu-v2.dir/build.make

.PHONY : menuconfig_px4fmu-v2

# Rule to build all files generated by this target.
CMakeFiles/menuconfig_px4fmu-v2.dir/build: menuconfig_px4fmu-v2

.PHONY : CMakeFiles/menuconfig_px4fmu-v2.dir/build

CMakeFiles/menuconfig_px4fmu-v2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/menuconfig_px4fmu-v2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/menuconfig_px4fmu-v2.dir/clean

CMakeFiles/menuconfig_px4fmu-v2.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles/menuconfig_px4fmu-v2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/menuconfig_px4fmu-v2.dir/depend

