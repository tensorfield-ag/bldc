#ifndef HW_60_MK6_MAX_PAYLOAD_H_
#define HW_60_MK6_MAX_PAYLOAD_H_

// Limits
#ifndef MCCONF_L_IN_CURRENT_MAX
#define MCCONF_L_IN_CURRENT_MAX			16.0 // Input current limit in Amperes (Upper)
#endif
#ifndef MCCONF_L_IN_CURRENT_MIN
#define MCCONF_L_IN_CURRENT_MIN			-12.0 // Input current limit in Amperes (Lower)
#endif
#ifndef MCCONF_L_CURRENT_MAX_SCALE
#define MCCONF_L_CURRENT_MAX_SCALE		0.2	// Maximum current scale
#endif
#ifndef MCCONF_L_CURRENT_MIN_SCALE
#define MCCONF_L_CURRENT_MIN_SCALE		0.2	// Minimum current scale
#endif

// FOC
#ifndef MCCONF_FOC_ENCODER_INVERTED
#define MCCONF_FOC_ENCODER_INVERTED		true
#endif

// Position PID
#ifndef MCCONF_P_PID_KP
#define MCCONF_P_PID_KP					0.075	// Proportional gain
#endif
#ifndef MCCONF_P_PID_KI
#define MCCONF_P_PID_KI					0.001	// Integral gain
#endif

#include "hw_60_mk6_max_jetty.h"

#endif /* HW_60_MK6_MAX_PAYLOAD_H_ */
