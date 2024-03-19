/*
	Copyright 2019 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#include "app.h"
#include "buffer.h"
#include "comm_can.h"
#include "encoder.h"
#include "mc_interface.h"
#include "timeout.h"
#include <string.h>
#include <stdio.h>

#define POSITION_FIXED_SCALE	50.0
#define ENCODER_ERROR_THRESHOLD	0.001
#define ENCODER_ERROR_BIT_POS	15

// Threads
static THD_FUNCTION(can_send_encoder_thread, arg);
static THD_WORKING_AREA(can_send_encoder_wa, 1024);

// Private variables
static volatile bool stop_now = true;
static volatile bool is_running = false;

// Private functions
void app_custom_start(void) {
	stop_now = false;
	chThdCreateStatic(can_send_encoder_wa, sizeof(can_send_encoder_wa),
			NORMALPRIO, can_send_encoder_thread, NULL);
}

void app_custom_stop(void) {
	stop_now = true;
	while (is_running) {
		chThdSleepMilliseconds(1);
	}
}

void app_custom_configure(app_configuration *conf) {
	(void)conf;
}

void can_send_encoder(const uint8_t id, const int16_t position) {
	int32_t send_index = 0;
	uint8_t buffer[2];
	buffer_append_int16(buffer, position, &send_index);
	comm_can_transmit_sid(id | ((uint32_t)CAN_PACKET_STATUS << 8),
			buffer, send_index);
}

static THD_FUNCTION(can_send_encoder_thread, arg) {
	(void)arg;

	chRegSetThreadName("CAN send encoder");

	is_running = true;

	for(;;) {
		if (stop_now) {
			is_running = false;
			return;
		}

		const app_configuration *conf = app_get_configuration();

		if (conf->can_mode == CAN_MODE_VESC) {
			} else {
				const float position = mc_interface_get_pid_pos_now();
				const int16_t position_fixed = position * POSITION_FIXED_SCALE;
				const float error_rate = encoder_get_error_rate();
				const int is_error = (error_rate > ENCODER_ERROR_THRESHOLD);
				const int16_t error_bit = is_error << ENCODER_ERROR_BIT_POS;

				can_send_encoder(
					conf->controller_id, error_bit | position_fixed);
		}

		chThdSleepMilliseconds(1);
	}
}
