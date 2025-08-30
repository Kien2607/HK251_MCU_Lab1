/*
 * Exercise2.c
 *
 *  Created on: Aug 28, 2025
 *      Author: Dell
 */

#include <Exercise3.h>

uint16_t yellow_time = YELLOW_TIME;
uint16_t green_time = GREEN_TIME;
uint8_t  light_status = IDLE;
uint8_t ex3_counter = 0;

void Exercise3() {
	///Traffic light will run like describe below:
	///Red: 5s
	///Yellow: 2s
	///Green: 3s

	switch(light_status)
	{
	case IDLE:
		idle();
		light_status = ROAD1_YELLOW;
		ex3_counter = yellow_time/1000;
		break;
	case ROAD1_YELLOW:
		road1_yellow();
		if (!ex3_counter) {
			light_status = ROAD1_GREEN;
			ex3_counter = green_time/1000;
		}
		break;
	case ROAD1_GREEN:
		road1_green();
		if (!ex3_counter) {
			light_status = ROAD2_YELLOW;
			ex3_counter = yellow_time/1000;
		}
		break;
	case ROAD2_YELLOW:
		road2_yellow();
		if (!ex3_counter) {
			light_status = ROAD2_GREEN;
			ex3_counter = green_time/1000;
		}
		break;
	case ROAD2_GREEN:
		road2_green();
		if (!ex3_counter) {
			light_status = ROAD1_YELLOW;
			ex3_counter = yellow_time/1000;
		}
		break;
	default:
		break;
	}
	ex3_counter--;
//	HAL_Delay(1000);
}

void idle() {
	//Road 1 <-> 3
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X3_LED_OFF);
	//Road 2 <-> 4
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, X3_LED_OFF);
}

void road1_yellow() {
	//Road 1 <-> 3
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X3_LED_OFF);
	//Road 2 <-> 4
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, X3_LED_OFF);
}

void road1_green() {
	//Road 1 <-> 3
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X3_LED_OFF);
	//Road 2 <-> 4
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, X3_LED_OFF);
}

void road2_yellow() {
	//Road 2 <-> 4
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, X3_LED_OFF);
	//Road 1 <-> 3
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X3_LED_OFF);
}
void road2_green() {
	//Road 2 <-> 4
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, X3_LED_OFF);
	//Road 1 <-> 3
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X3_LED_ON);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, X3_LED_OFF);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X3_LED_OFF);
}
