/*
 * Exercise2.h
 *
 *  Created on: Aug 29, 2025
 *      Author: Dell
 */

#ifndef INC_EXERCISE2_H_
#define INC_EXERCISE2_H_

#include "main.h"

#define X2_LED_ON  0
#define X2_LED_OFF 1

extern uint8_t ex2_counter;
extern uint8_t traffic_light_status;

enum traffic_light_state {
	IDLE_EX2,
	RED,
	YELLOW,
	GREEN
};
//extern uint8_t led_red_state;
//extern uint8_t led_yellow_state;
//extern uint8_t led_green_state;

void Exercise2();

void Idle();
void Red_on();
void Yellow_on();
void Green_on();

#endif /* INC_EXERCISE2_H_ */
