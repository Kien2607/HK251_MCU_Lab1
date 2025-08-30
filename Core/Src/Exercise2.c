/*
 * Exercise2.c
 *
 *  Created on: Aug 29, 2025
 *      Author: Dell
 */

#include "Exercise2.h"

uint8_t traffic_light_status = IDLE_EX2;
uint8_t ex2_counter = 1;

void Exercise2() {
	switch(traffic_light_status)
	{
		case IDLE_EX2:
			Idle();
			if (!ex2_counter) {
				traffic_light_status = RED;
				ex2_counter = 5;
			}
			break;
		case RED:
			Red_on();
			if (!ex2_counter) {
				traffic_light_status = YELLOW;
				ex2_counter = 2;
			}
			break;
		case YELLOW:
			Yellow_on();
			if (!ex2_counter) {
				traffic_light_status = GREEN;
				ex2_counter = 3;
			}
			break;
		case GREEN:
			Green_on();
			if (!ex2_counter) {
				traffic_light_status = RED;
				ex2_counter = 5;
			}
			break;
		default:
			break;

	}
	ex2_counter--;
	HAL_Delay(1000);
}

void Idle() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X2_LED_OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X2_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X2_LED_OFF);
}

void Red_on() {
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X2_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X2_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X2_LED_OFF);
}

void Yellow_on() {
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X2_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X2_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X2_LED_OFF);
}

void Green_on() {
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X2_LED_ON);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X2_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X2_LED_OFF);
}
