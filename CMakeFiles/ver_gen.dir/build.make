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

# Utility rule file for ver_gen.

# Include the progress variables for this target.
include CMakeFiles/ver_gen.dir/progress.make

CMakeFiles/ver_gen: build_git_version.h


build_git_version.h: ../Tools/px_update_git_header.py
build_git_version.h: ../.git/index
build_git_version.h: ../.git/HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating git hash header"
	cd /home/intrepid/src1029/Firmware && /home/intrepid/src1029/Firmware/Tools/px_update_git_header.py /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/build_git_version.h > /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/git_header.log

ver_gen: CMakeFiles/ver_gen
ver_gen: build_git_version.h
ver_gen: CMakeFiles/ver_gen.dir/build.make

.PHONY : ver_gen

# Rule to build all files generated by this target.
CMakeFiles/ver_gen.dir/build: ver_gen

.PHONY : CMakeFiles/ver_gen.dir/build

CMakeFiles/ver_gen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ver_gen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ver_gen.dir/clean

CMakeFiles/ver_gen.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles/ver_gen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ver_gen.dir/depend

