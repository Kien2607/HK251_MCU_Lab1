/*
 * Exercise2.h
 *
 *  Created on: Aug 28, 2025
 *      Author: Dell
 */

#ifndef INC_EXERCISE3_H_
#define INC_EXERCISE3_H_

#include "main.h"

#define X3_LED_ON  1
#define X3_LED_OFF 0

#define YELLOW_TIME 2000
#define GREEN_TIME 3000

enum trafic_status {
	IDLE,
	ROAD1_YELLOW,
	ROAD1_GREEN,
	ROAD2_YELLOW,
	ROAD2_GREEN,
};

extern uint8_t light_status;
extern uint8_t ex3_counter;

extern uint16_t yellow_time;
extern uint16_t green_time;

//states
void idle();
void road1_yellow();
void road1_green();
void road2_yellow();
void road2_green();

void Exercise3();

#endif /* INC_EXERCISE3_H_ */
