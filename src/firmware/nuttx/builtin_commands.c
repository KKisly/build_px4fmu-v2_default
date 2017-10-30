/* builtin command list - automatically generated, do not edit */
#include <nuttx/config.h>
#include <nuttx/binfmt/builtin.h>
#include <nuttx/config.h>
#if 62
extern int adc_main(int argc, char *argv[]);
extern int tone_alarm_main(int argc, char *argv[]);
extern int fmu_main(int argc, char *argv[]);
extern int px4io_main(int argc, char *argv[]);
extern int rgbled_main(int argc, char *argv[]);
extern int mpu6000_main(int argc, char *argv[]);
extern int mpu9250_main(int argc, char *argv[]);
extern int lsm303d_main(int argc, char *argv[]);
extern int l3gd20_main(int argc, char *argv[]);
extern int hmc5883_main(int argc, char *argv[]);
extern int ms5611_main(int argc, char *argv[]);
extern int sf0x_main(int argc, char *argv[]);
extern int ll40ls_main(int argc, char *argv[]);
extern int trone_main(int argc, char *argv[]);
extern int gps_main(int argc, char *argv[]);
extern int pwm_out_sim_main(int argc, char *argv[]);
extern int ets_airspeed_main(int argc, char *argv[]);
extern int ms4525_airspeed_main(int argc, char *argv[]);
extern int ms5525_airspeed_main(int argc, char *argv[]);
extern int sdp3x_airspeed_main(int argc, char *argv[]);
extern int frsky_telemetry_main(int argc, char *argv[]);
extern int sensors_main(int argc, char *argv[]);
extern int px4flow_main(int argc, char *argv[]);
extern int vmount_main(int argc, char *argv[]);
extern int pwm_input_main(int argc, char *argv[]);
extern int camera_trigger_main(int argc, char *argv[]);
extern int bst_main(int argc, char *argv[]);
extern int lis3mdl_main(int argc, char *argv[]);
extern int ulanding_radar_main(int argc, char *argv[]);
extern int bl_update_main(int argc, char *argv[]);
extern int config_main(int argc, char *argv[]);
extern int hardfault_log_main(int argc, char *argv[]);
extern int mixer_main(int argc, char *argv[]);
extern int mtd_main(int argc, char *argv[]);
extern int nshterm_main(int argc, char *argv[]);
extern int param_main(int argc, char *argv[]);
extern int perf_main(int argc, char *argv[]);
extern int pwm_main(int argc, char *argv[]);
extern int reboot_main(int argc, char *argv[]);
extern int top_main(int argc, char *argv[]);
extern int ver_main(int argc, char *argv[]);
extern int commander_main(int argc, char *argv[]);
extern int send_event_main(int argc, char *argv[]);
extern int load_mon_main(int argc, char *argv[]);
extern int navigator_main(int argc, char *argv[]);
extern int mavlink_main(int argc, char *argv[]);
extern int gpio_led_main(int argc, char *argv[]);
extern int land_detector_main(int argc, char *argv[]);
extern int camera_feedback_main(int argc, char *argv[]);
extern int ekf2_main(int argc, char *argv[]);
extern int fw_att_control_main(int argc, char *argv[]);
extern int fw_pos_control_l1_main(int argc, char *argv[]);
extern int gnd_att_control_main(int argc, char *argv[]);
extern int gnd_pos_control_main(int argc, char *argv[]);
extern int mc_att_control_main(int argc, char *argv[]);
extern int mc_pos_control_main(int argc, char *argv[]);
extern int vtol_att_control_main(int argc, char *argv[]);
extern int logger_main(int argc, char *argv[]);
extern int uorb_main(int argc, char *argv[]);
extern int dataman_main(int argc, char *argv[]);
extern int serdis_main(int argc, char *argv[]);
extern int sercon_main(int argc, char *argv[]);

const struct builtin_s g_builtins[] = {
	{"adc", SCHED_PRIORITY_DEFAULT, 1024, adc_main},
	{"tone_alarm", SCHED_PRIORITY_DEFAULT, 1024, tone_alarm_main},
	{"fmu", SCHED_PRIORITY_DEFAULT, 1200, fmu_main},
	{"px4io", SCHED_PRIORITY_DEFAULT, 1816, px4io_main},
	{"rgbled", SCHED_PRIORITY_DEFAULT, 1024, rgbled_main},
	{"mpu6000", SCHED_PRIORITY_DEFAULT, 1400, mpu6000_main},
	{"mpu9250", SCHED_PRIORITY_DEFAULT, 1200, mpu9250_main},
	{"lsm303d", SCHED_PRIORITY_DEFAULT, 1200, lsm303d_main},
	{"l3gd20", SCHED_PRIORITY_DEFAULT, 1200, l3gd20_main},
	{"hmc5883", SCHED_PRIORITY_DEFAULT, 1200, hmc5883_main},
	{"ms5611", SCHED_PRIORITY_DEFAULT, 1200, ms5611_main},
	{"sf0x", SCHED_PRIORITY_DEFAULT, 1024, sf0x_main},
	{"ll40ls", SCHED_PRIORITY_DEFAULT, 1024, ll40ls_main},
	{"trone", SCHED_PRIORITY_DEFAULT, 1200, trone_main},
	{"gps", SCHED_PRIORITY_DEFAULT, 1200, gps_main},
	{"pwm_out_sim", SCHED_PRIORITY_DEFAULT, 1200, pwm_out_sim_main},
	{"ets_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ets_airspeed_main},
	{"ms4525_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ms4525_airspeed_main},
	{"ms5525_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ms5525_airspeed_main},
	{"sdp3x_airspeed", SCHED_PRIORITY_DEFAULT, 1200, sdp3x_airspeed_main},
	{"frsky_telemetry", SCHED_PRIORITY_DEFAULT, 1200, frsky_telemetry_main},
	{"sensors", SCHED_PRIORITY_MAX-5, 1300, sensors_main},
	{"px4flow", SCHED_PRIORITY_DEFAULT, 1200, px4flow_main},
	{"vmount", SCHED_PRIORITY_DEFAULT, 1024, vmount_main},
	{"pwm_input", SCHED_PRIORITY_DEFAULT, 1024, pwm_input_main},
	{"camera_trigger", SCHED_PRIORITY_DEFAULT, 1200, camera_trigger_main},
	{"bst", SCHED_PRIORITY_DEFAULT, 1200, bst_main},
	{"lis3mdl", SCHED_PRIORITY_DEFAULT, 1200, lis3mdl_main},
	{"ulanding_radar", SCHED_PRIORITY_DEFAULT, 1024, ulanding_radar_main},
	{"bl_update", SCHED_PRIORITY_DEFAULT, 4096, bl_update_main},
	{"config", SCHED_PRIORITY_DEFAULT, 4096, config_main},
	{"hardfault_log", SCHED_PRIORITY_DEFAULT, 2048, hardfault_log_main},
	{"mixer", SCHED_PRIORITY_DEFAULT, 4096, mixer_main},
	{"mtd", SCHED_PRIORITY_DEFAULT, 1024, mtd_main},
	{"nshterm", SCHED_PRIORITY_DEFAULT-30, 1500, nshterm_main},
	{"param", SCHED_PRIORITY_DEFAULT, 2500, param_main},
	{"perf", SCHED_PRIORITY_DEFAULT, 1800, perf_main},
	{"pwm", SCHED_PRIORITY_DEFAULT, 2500, pwm_main},
	{"reboot", SCHED_PRIORITY_DEFAULT, 800, reboot_main},
	{"top", SCHED_PRIORITY_DEFAULT, 1700, top_main},
	{"ver", SCHED_PRIORITY_DEFAULT, 1024, ver_main},
	{"commander", SCHED_PRIORITY_DEFAULT, 4096, commander_main},
	{"send_event", SCHED_PRIORITY_DEFAULT, 2200, send_event_main},
	{"load_mon", SCHED_PRIORITY_DEFAULT, 1200, load_mon_main},
	{"navigator", SCHED_PRIORITY_DEFAULT, 1300, navigator_main},
	{"mavlink", SCHED_PRIORITY_DEFAULT, 1200, mavlink_main},
	{"gpio_led", SCHED_PRIORITY_DEFAULT, 1024, gpio_led_main},
	{"land_detector", SCHED_PRIORITY_DEFAULT, 1200, land_detector_main},
	{"camera_feedback", SCHED_PRIORITY_DEFAULT, 1024, camera_feedback_main},
	{"ekf2", SCHED_PRIORITY_DEFAULT, 2500, ekf2_main},
	{"fw_att_control", SCHED_PRIORITY_DEFAULT, 1200, fw_att_control_main},
	{"fw_pos_control_l1", SCHED_PRIORITY_DEFAULT, 1200, fw_pos_control_l1_main},
	{"gnd_att_control", SCHED_PRIORITY_DEFAULT, 1200, gnd_att_control_main},
	{"gnd_pos_control", SCHED_PRIORITY_DEFAULT, 1200, gnd_pos_control_main},
	{"mc_att_control", SCHED_PRIORITY_DEFAULT, 1200, mc_att_control_main},
	{"mc_pos_control", SCHED_PRIORITY_DEFAULT, 1200, mc_pos_control_main},
	{"vtol_att_control", SCHED_PRIORITY_DEFAULT, 1300, vtol_att_control_main},
	{"logger", SCHED_PRIORITY_MAX-30, 2200, logger_main},
	{"uorb", SCHED_PRIORITY_DEFAULT, 2100, uorb_main},
	{"dataman", SCHED_PRIORITY_DEFAULT, 1200, dataman_main},
	{"serdis", SCHED_PRIORITY_DEFAULT, 2048, serdis_main},
	{"sercon", SCHED_PRIORITY_DEFAULT, 2048, sercon_main},

	{NULL, 0, 0, NULL}
};
const int g_builtin_count = 62;
#endif
