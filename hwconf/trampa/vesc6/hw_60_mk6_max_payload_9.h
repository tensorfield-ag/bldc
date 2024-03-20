#ifndef HW_60_MK6_MAX_PAYLOAD_9_H_
#define HW_60_MK6_MAX_PAYLOAD_9_H_

// VESC ID
#ifndef APPCONF_CONTROLLER_ID
#define APPCONF_CONTROLLER_ID			9
#endif

// FOC
#ifndef MCCONF_FOC_CURRENT_KP
#define MCCONF_FOC_CURRENT_KP			0.32
#endif
#ifndef MCCONF_FOC_CURRENT_KI
#define MCCONF_FOC_CURRENT_KI			76.39
#endif
#ifndef MCCONF_FOC_MOTOR_L
#define MCCONF_FOC_MOTOR_L				0.00032004
#endif
#ifndef MCCONF_FOC_MOTOR_R
#define MCCONF_FOC_MOTOR_R				0.0764
#endif
#ifndef MCCONF_FOC_MOTOR_FLUX_LINKAGE
#define MCCONF_FOC_MOTOR_FLUX_LINKAGE	0.035847
#endif
#ifndef MCCONF_FOC_MOTOR_LD_LQ_DIFF
#define MCCONF_FOC_MOTOR_LD_LQ_DIFF		6.831e-05
#endif
#ifndef MCCONF_FOC_OBSERVER_GAIN
#define MCCONF_FOC_OBSERVER_GAIN		780000
#endif
#ifndef MCCONF_FOC_OFFSETS_CURRENT_0
#define MCCONF_FOC_OFFSETS_CURRENT_0	1960.24
#endif
#ifndef MCCONF_FOC_OFFSETS_CURRENT_1
#define MCCONF_FOC_OFFSETS_CURRENT_1	1960.12
#endif
#ifndef MCCONF_FOC_OFFSETS_CURRENT_2
#define MCCONF_FOC_OFFSETS_CURRENT_2	1960.14
#endif
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_0
#define MCCONF_FOC_OFFSETS_VOLTAGE_0	-0.0031
#endif
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_1
#define MCCONF_FOC_OFFSETS_VOLTAGE_1	0.0012
#endif
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_2
#define MCCONF_FOC_OFFSETS_VOLTAGE_2	0.0019
#endif

// Position PID
#ifndef MCCONF_P_PID_OFFSET
#define MCCONF_P_PID_OFFSET				248.818
#endif

#include "hw_60_mk6_max_payload.h"

#endif /* HW_60_MK6_MAX_PAYLOAD_9_H_ */

