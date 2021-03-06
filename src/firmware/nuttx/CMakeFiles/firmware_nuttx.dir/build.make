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
include src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/depend.make

# Include the progress variables for this target.
include src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/progress.make

# Include the compile flags for this target's objects.
include src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/flags.make

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/flags.make
src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj: src/firmware/nuttx/builtin_commands.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj   -c /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx/builtin_commands.c

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/firmware_nuttx.dir/builtin_commands.c.i"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx/builtin_commands.c > CMakeFiles/firmware_nuttx.dir/builtin_commands.c.i

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/firmware_nuttx.dir/builtin_commands.c.s"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx && /home/intrepid/gcc-arm-none-eabi-5_4-2016q2/bin/arm-none-eabi-gcc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx/builtin_commands.c -o CMakeFiles/firmware_nuttx.dir/builtin_commands.c.s

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.requires:

.PHONY : src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.requires

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.provides: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.requires
	$(MAKE) -f src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/build.make src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.provides.build
.PHONY : src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.provides

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.provides.build: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj


# Object files for target firmware_nuttx
firmware_nuttx_OBJECTS = \
"CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj"

# External object files for target firmware_nuttx
firmware_nuttx_EXTERNAL_OBJECTS =

src/firmware/nuttx/firmware_nuttx: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj
src/firmware/nuttx/firmware_nuttx: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/build.make
src/firmware/nuttx/firmware_nuttx: src/drivers/device/libdrivers__device.a
src/firmware/nuttx/firmware_nuttx: src/drivers/stm32/libdrivers__stm32.a
src/firmware/nuttx/firmware_nuttx: src/drivers/stm32/adc/libdrivers__stm32__adc.a
src/firmware/nuttx/firmware_nuttx: src/drivers/stm32/tone_alarm/libdrivers__stm32__tone_alarm.a
src/firmware/nuttx/firmware_nuttx: src/drivers/led/libdrivers__led.a
src/firmware/nuttx/firmware_nuttx: src/drivers/px4fmu/libdrivers__px4fmu.a
src/firmware/nuttx/firmware_nuttx: src/drivers/px4io/libdrivers__px4io.a
src/firmware/nuttx/firmware_nuttx: src/drivers/boards/px4fmu-v2/libdrivers__boards__px4fmu-v2.a
src/firmware/nuttx/firmware_nuttx: src/drivers/rgbled/libdrivers__rgbled.a
src/firmware/nuttx/firmware_nuttx: src/drivers/mpu6000/libdrivers__mpu6000.a
src/firmware/nuttx/firmware_nuttx: src/drivers/mpu9250/libdrivers__mpu9250.a
src/firmware/nuttx/firmware_nuttx: src/drivers/lsm303d/libdrivers__lsm303d.a
src/firmware/nuttx/firmware_nuttx: src/drivers/l3gd20/libdrivers__l3gd20.a
src/firmware/nuttx/firmware_nuttx: src/drivers/hmc5883/libdrivers__hmc5883.a
src/firmware/nuttx/firmware_nuttx: src/drivers/ms5611/libdrivers__ms5611.a
src/firmware/nuttx/firmware_nuttx: src/drivers/sf0x/libdrivers__sf0x.a
src/firmware/nuttx/firmware_nuttx: src/drivers/ll40ls/libdrivers__ll40ls.a
src/firmware/nuttx/firmware_nuttx: src/drivers/trone/libdrivers__trone.a
src/firmware/nuttx/firmware_nuttx: src/drivers/gps/libdrivers__gps.a
src/firmware/nuttx/firmware_nuttx: src/drivers/pwm_out_sim/libdrivers__pwm_out_sim.a
src/firmware/nuttx/firmware_nuttx: src/drivers/airspeed/libdrivers__airspeed.a
src/firmware/nuttx/firmware_nuttx: src/drivers/ets_airspeed/libdrivers__ets_airspeed.a
src/firmware/nuttx/firmware_nuttx: src/drivers/ms4525_airspeed/libdrivers__ms4525_airspeed.a
src/firmware/nuttx/firmware_nuttx: src/drivers/ms5525_airspeed/libdrivers__ms5525_airspeed.a
src/firmware/nuttx/firmware_nuttx: src/drivers/sdp3x_airspeed/libdrivers__sdp3x_airspeed.a
src/firmware/nuttx/firmware_nuttx: src/drivers/frsky_telemetry/libdrivers__frsky_telemetry.a
src/firmware/nuttx/firmware_nuttx: src/modules/sensors/libmodules__sensors.a
src/firmware/nuttx/firmware_nuttx: src/drivers/px4flow/libdrivers__px4flow.a
src/firmware/nuttx/firmware_nuttx: src/drivers/vmount/libdrivers__vmount.a
src/firmware/nuttx/firmware_nuttx: src/drivers/pwm_input/libdrivers__pwm_input.a
src/firmware/nuttx/firmware_nuttx: src/drivers/camera_trigger/libdrivers__camera_trigger.a
src/firmware/nuttx/firmware_nuttx: src/drivers/bst/libdrivers__bst.a
src/firmware/nuttx/firmware_nuttx: src/drivers/lis3mdl/libdrivers__lis3mdl.a
src/firmware/nuttx/firmware_nuttx: src/drivers/ulanding/libdrivers__ulanding.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/bl_update/libsystemcmds__bl_update.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/config/libsystemcmds__config.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/hardfault_log/libsystemcmds__hardfault_log.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/mixer/libsystemcmds__mixer.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/mtd/libsystemcmds__mtd.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/nshterm/libsystemcmds__nshterm.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/param/libsystemcmds__param.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/perf/libsystemcmds__perf.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/pwm/libsystemcmds__pwm.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/reboot/libsystemcmds__reboot.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/top/libsystemcmds__top.a
src/firmware/nuttx/firmware_nuttx: src/systemcmds/ver/libsystemcmds__ver.a
src/firmware/nuttx/firmware_nuttx: src/modules/commander/libmodules__commander.a
src/firmware/nuttx/firmware_nuttx: src/modules/events/libmodules__events.a
src/firmware/nuttx/firmware_nuttx: src/modules/load_mon/libmodules__load_mon.a
src/firmware/nuttx/firmware_nuttx: src/modules/navigator/libmodules__navigator.a
src/firmware/nuttx/firmware_nuttx: src/modules/mavlink/libmodules__mavlink.a
src/firmware/nuttx/firmware_nuttx: src/modules/gpio_led/libmodules__gpio_led.a
src/firmware/nuttx/firmware_nuttx: src/modules/land_detector/libmodules__land_detector.a
src/firmware/nuttx/firmware_nuttx: src/modules/camera_feedback/libmodules__camera_feedback.a
src/firmware/nuttx/firmware_nuttx: src/modules/ekf2/libmodules__ekf2.a
src/firmware/nuttx/firmware_nuttx: src/modules/fw_att_control/libmodules__fw_att_control.a
src/firmware/nuttx/firmware_nuttx: src/modules/fw_pos_control_l1/libmodules__fw_pos_control_l1.a
src/firmware/nuttx/firmware_nuttx: src/modules/gnd_att_control/libmodules__gnd_att_control.a
src/firmware/nuttx/firmware_nuttx: src/modules/gnd_pos_control/libmodules__gnd_pos_control.a
src/firmware/nuttx/firmware_nuttx: src/modules/mc_att_control/libmodules__mc_att_control.a
src/firmware/nuttx/firmware_nuttx: src/modules/mc_pos_control/libmodules__mc_pos_control.a
src/firmware/nuttx/firmware_nuttx: src/modules/vtol_att_control/libmodules__vtol_att_control.a
src/firmware/nuttx/firmware_nuttx: src/modules/logger/libmodules__logger.a
src/firmware/nuttx/firmware_nuttx: src/modules/systemlib/param/libmodules__systemlib__param.a
src/firmware/nuttx/firmware_nuttx: src/modules/systemlib/libmodules__systemlib.a
src/firmware/nuttx/firmware_nuttx: src/modules/systemlib/mixer/libmodules__systemlib__mixer.a
src/firmware/nuttx/firmware_nuttx: src/modules/uORB/libmodules__uORB.a
src/firmware/nuttx/firmware_nuttx: src/modules/dataman/libmodules__dataman.a
src/firmware/nuttx/firmware_nuttx: src/lib/controllib/liblib__controllib.a
src/firmware/nuttx/firmware_nuttx: src/lib/mathlib/liblib__mathlib.a
src/firmware/nuttx/firmware_nuttx: src/lib/mathlib/math/filter/liblib__mathlib__math__filter.a
src/firmware/nuttx/firmware_nuttx: src/lib/ecl/liblib__ecl.a
src/firmware/nuttx/firmware_nuttx: src/lib/external_lgpl/liblib__external_lgpl.a
src/firmware/nuttx/firmware_nuttx: src/lib/geo/liblib__geo.a
src/firmware/nuttx/firmware_nuttx: src/lib/geo_lookup/liblib__geo_lookup.a
src/firmware/nuttx/firmware_nuttx: src/lib/conversion/liblib__conversion.a
src/firmware/nuttx/firmware_nuttx: src/lib/launchdetection/liblib__launchdetection.a
src/firmware/nuttx/firmware_nuttx: src/lib/led/liblib__led.a
src/firmware/nuttx/firmware_nuttx: src/lib/terrain_estimation/liblib__terrain_estimation.a
src/firmware/nuttx/firmware_nuttx: src/lib/runway_takeoff/liblib__runway_takeoff.a
src/firmware/nuttx/firmware_nuttx: src/lib/tailsitter_recovery/liblib__tailsitter_recovery.a
src/firmware/nuttx/firmware_nuttx: src/lib/version/liblib__version.a
src/firmware/nuttx/firmware_nuttx: src/lib/DriverFramework/framework/liblib__DriverFramework__framework.a
src/firmware/nuttx/firmware_nuttx: src/platforms/nuttx/libplatforms__nuttx.a
src/firmware/nuttx/firmware_nuttx: src/lib/micro-CDR/src/c/liblib__micro-CDR.a
src/firmware/nuttx/firmware_nuttx: src/platforms/common/libplatforms__common.a
src/firmware/nuttx/firmware_nuttx: src/platforms/nuttx/px4_layer/libplatforms__nuttx__px4_layer.a
src/firmware/nuttx/firmware_nuttx: src/firmware/nuttx/libromfs.a
src/firmware/nuttx/firmware_nuttx: libmsg_gen.a
src/firmware/nuttx/firmware_nuttx: src/lib/DriverFramework/framework/src/libdf_driver_framework.a
src/firmware/nuttx/firmware_nuttx: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/intrepid/src1029/Firmware/build_px4fmu-v2_default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable firmware_nuttx"
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firmware_nuttx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/build: src/firmware/nuttx/firmware_nuttx

.PHONY : src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/build

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/requires: src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/builtin_commands.c.obj.requires

.PHONY : src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/requires

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/clean:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx && $(CMAKE_COMMAND) -P CMakeFiles/firmware_nuttx.dir/cmake_clean.cmake
.PHONY : src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/clean

src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/depend:
	cd /home/intrepid/src1029/Firmware/build_px4fmu-v2_default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/intrepid/src1029/Firmware /home/intrepid/src1029/Firmware/src/firmware/nuttx /home/intrepid/src1029/Firmware/build_px4fmu-v2_default /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx /home/intrepid/src1029/Firmware/build_px4fmu-v2_default/src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/firmware/nuttx/CMakeFiles/firmware_nuttx.dir/depend

