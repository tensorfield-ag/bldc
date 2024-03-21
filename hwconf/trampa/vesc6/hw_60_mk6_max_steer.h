#ifndef HW_60_MK6_MAX_STEER_H_
#define HW_60_MK6_MAX_STEER_H_

// Limits
#ifndef MCCONF_L_CURRENT_MAX
#define MCCONF_L_CURRENT_MAX			45.0 // Current limit in Amperes (Upper)
#endif
#ifndef MCCONF_L_CURRENT_MIN
#define MCCONF_L_CURRENT_MIN			-45.0 // Current limit in Amperes (Lower)
#endif
#ifndef MCCONF_L_IN_CURRENT_MAX
#define MCCONF_L_IN_CURRENT_MAX			16.0 // Input current limit in Amperes (Upper)
#endif
#ifndef MCCONF_L_IN_CURRENT_MIN
#define MCCONF_L_IN_CURRENT_MIN			-12.0 // Input current limit in Amperes (Lower)
#endif

// Position PID
#ifndef MCCONF_P_PID_KP
#define MCCONF_P_PID_KP					0.05	// Proportional gain
#endif

#include "hw_60_mk6_max_jetty.h"

#endif /* HW_60_MK6_MAX_STEER_H_ */
