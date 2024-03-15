#ifndef HW_60_MK6_MAX_JETTY_H_
#define HW_60_MK6_MAX_JETTY_H_

// Application
#ifndef APPCONF_APP_TO_USE
#define APPCONF_APP_TO_USE				APP_CUSTOM
#endif
#ifndef APP_CUSTOM_TO_USE
#define APP_CUSTOM_TO_USE				"app_jetty.c"
#endif

// Limits
#ifndef MCCONF_L_CURRENT_MAX
#define MCCONF_L_CURRENT_MAX			120.0 // Current limit in Amperes (Upper)
#endif
#ifndef MCCONF_L_CURRENT_MIN
#define MCCONF_L_CURRENT_MIN			-120.0 // Current limit in Amperes (Lower)
#endif
#ifndef MCCONF_L_MAX_ABS_CURRENT
#define MCCONF_L_MAX_ABS_CURRENT		160.0 // The maximum absolute current above which a fault is generated
#endif
#ifndef MCCONF_L_MAX_VOLTAGE
#define MCCONF_L_MAX_VOLTAGE			60.0 // Maximum input voltage
#endif
#ifndef MCCONF_L_SLOW_ABS_OVERCURRENT
#define MCCONF_L_SLOW_ABS_OVERCURRENT	true // Use the filtered (and hence slower) current for the overcurrent fault detection
#endif
#ifndef MCCONF_L_LIM_TEMP_MOTOR_START
#define MCCONF_L_LIM_TEMP_MOTOR_START	100.0 // MOTOR temperature where current limiting should begin
#endif
#ifndef MCCONF_L_LIM_TEMP_MOTOR_END
#define MCCONF_L_LIM_TEMP_MOTOR_END		120.0 // MOTOR temperature where everything should be shut off
#endif

// FOC
#ifndef MCCONF_FOC_SENSOR_MODE
#define MCCONF_FOC_SENSOR_MODE			FOC_SENSOR_MODE_HALL
#endif
#ifndef MCCONF_FOC_HALL_TAB_0
#define MCCONF_FOC_HALL_TAB_0			255
#endif
#ifndef MCCONF_FOC_HALL_TAB_1
#define MCCONF_FOC_HALL_TAB_1			168
#endif
#ifndef MCCONF_FOC_HALL_TAB_2
#define MCCONF_FOC_HALL_TAB_2			34
#endif
#ifndef MCCONF_FOC_HALL_TAB_3
#define MCCONF_FOC_HALL_TAB_3			198
#endif
#ifndef MCCONF_FOC_HALL_TAB_4
#define MCCONF_FOC_HALL_TAB_4			97
#endif
#ifndef MCCONF_FOC_HALL_TAB_5
#define MCCONF_FOC_HALL_TAB_5			134
#endif
#ifndef MCCONF_FOC_HALL_TAB_6
#define MCCONF_FOC_HALL_TAB_6			66
#endif
#ifndef MCCONF_FOC_HALL_TAB_7
#define MCCONF_FOC_HALL_TAB_7			255
#endif

// Misc
#ifndef MCCONF_M_NTC_MOTOR_BETA
#define MCCONF_M_NTC_MOTOR_BETA			3950.0 // Beta value for motor termistor
#endif
#ifndef MCCONF_M_MOTOR_TEMP_SENS_TYPE
#define MCCONF_M_MOTOR_TEMP_SENS_TYPE	TEMP_SENSOR_NTC_100K_25C // Motor temperature sensor type
#endif
#ifndef MCCONF_M_NTCX_PTCX_RES
#define MCCONF_M_NTCX_PTCX_RES			100000.0 // Custom NTC/PTC resistance
#endif
#ifndef MCCONF_M_NTCX_PTCX_BASE_TEMP
#define MCCONF_M_NTCX_PTCX_BASE_TEMP	25.0 // Custom NTC/PTC base temperature
#endif

// Setup Info
#ifndef MCCONF_SI_MOTOR_POLES
#define MCCONF_SI_MOTOR_POLES			8 // Motor pole count
#endif
#ifndef MCCONF_SI_GEAR_RATIO
#define MCCONF_SI_GEAR_RATIO			90 // Gear ratio
#endif
#ifndef MCCONF_SI_WHEEL_DIAMETER
#define MCCONF_SI_WHEEL_DIAMETER		0.77 // Wheel Diameter
#endif
#ifndef MCCONF_SI_BATTERY_TYPE
#define MCCONF_SI_BATTERY_TYPE			BATTERY_TYPE_LIIRON_2_6__3_6 // Battery Type
#endif
#ifndef MCCONF_SI_BATTERY_CELLS
#define MCCONF_SI_BATTERY_CELLS			16 // Battery Cells
#endif
#ifndef MCCONF_SI_BATTERY_AH
#define MCCONF_SI_BATTERY_AH			6.0 // Battery amp hours
#endif

#include "hw_60_mk6_max.h"

#endif /* HW_60_MK6_MAX_JETTY_H_ */
