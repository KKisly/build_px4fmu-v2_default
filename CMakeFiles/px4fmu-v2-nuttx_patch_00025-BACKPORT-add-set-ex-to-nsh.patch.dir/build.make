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

# Utility rule file for px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.

# Include the progress variables for this target.
include CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/progress.make

CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch: px4fmu-v2/NuttX/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.stamp


px4fmu-v2/NuttX/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.stamp: ../nuttx-patches/00025-BACKPORT-add-set-ex-to-nsh.patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "px4fmu-v2: nuttx-patches/00025-BACKPORT-add-set-ex-to-nsh.patch applied"
	/usr/bin/patch --verbose -d /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX -s -p1 -N < /home/intrepid/src1029/Firmware/nuttx-patches/00025-BACKPORT-add-set-ex-to-nsh.patch
	cmake -E touch /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/px4fmu-v2/NuttX/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.stamp

px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch: CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch
px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch: px4fmu-v2/NuttX/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.stamp
px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch: CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/build.make

.PHONY : px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch

# Rule to build all files generated by this target.
CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/build: px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch

.PHONY : CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/build

CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/cmake_clean.cmake
.PHONY : CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/clean

CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/px4fmu-v2-nuttx_patch_00025-BACKPORT-add-set-ex-to-nsh.patch.dir/depend

