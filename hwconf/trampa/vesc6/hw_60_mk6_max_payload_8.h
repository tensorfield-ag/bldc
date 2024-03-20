#ifndef HW_60_MK6_MAX_PAYLOAD_8_H_
#define HW_60_MK6_MAX_PAYLOAD_8_H_

// VESC ID
#ifndef APPCONF_CONTROLLER_ID
#define APPCONF_CONTROLLER_ID			8
#endif

// FOC
#ifndef MCCONF_FOC_CURRENT_KP
#define MCCONF_FOC_CURRENT_KP			0.3192
#endif
#ifndef MCCONF_FOC_CURRENT_KI
#define MCCONF_FOC_CURRENT_KI			73.72
#endif
#ifndef MCCONF_FOC_MOTOR_L
#define MCCONF_FOC_MOTOR_L				0.00031922
#endif
#ifndef MCCONF_FOC_MOTOR_R
#define MCCONF_FOC_MOTOR_R				0.0737
#endif
#ifndef MCCONF_FOC_MOTOR_FLUX_LINKAGE
#define MCCONF_FOC_MOTOR_FLUX_LINKAGE	0.036207
#endif
#ifndef MCCONF_FOC_MOTOR_LD_LQ_DIFF
#define MCCONF_FOC_MOTOR_LD_LQ_DIFF		6.461e-05
#endif
#ifndef MCCONF_FOC_OBSERVER_GAIN
#define MCCONF_FOC_OBSERVER_GAIN		760000
#endif
#ifndef MCCONF_FOC_OFFSETS_CURRENT_0
#define MCCONF_FOC_OFFSETS_CURRENT_0	1965.57
#endif
#ifndef MCCONF_FOC_OFFSETS_CURRENT_1
#define MCCONF_FOC_OFFSETS_CURRENT_1	1965.34
#endif
#ifndef MCCONF_FOC_OFFSETS_CURRENT_2
#define MCCONF_FOC_OFFSETS_CURRENT_2	1965.56
#endif
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_0
#define MCCONF_FOC_OFFSETS_VOLTAGE_0	-0.0046
#endif
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_1
#define MCCONF_FOC_OFFSETS_VOLTAGE_1	-0.0019
#endif
#ifndef MCCONF_FOC_OFFSETS_VOLTAGE_2
#define MCCONF_FOC_OFFSETS_VOLTAGE_2	0.0066
#endif

// Position PID
#ifndef MCCONF_P_PID_OFFSET
#define MCCONF_P_PID_OFFSET				302.168
#endif

#include "hw_60_mk6_max_payload.h"

#endif /* HW_60_MK6_MAX_PAYLOAD_8_H_ */
