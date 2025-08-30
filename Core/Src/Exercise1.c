/*
 * Exercise1.c
 *
 *  Created on: Aug 28, 2025
 *      Author: Dell
 */

#include "Exercise1.h"

uint8_t ex1_counter = 2;

uint8_t led_red_state = X1_LED_OFF;
uint8_t led_yellow_state = X1_LED_OFF;

void Exercise1() {
	ex1_counter--;
	if (!ex1_counter) {
		led_red_state = !led_yellow_state;
		if (led_red_state != X1_LED_OFF) {
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X1_LED_ON);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X1_LED_OFF);
			led_yellow_state = !led_yellow_state;
		} else if (led_red_state == X1_LED_OFF) {
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, X1_LED_OFF);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, X1_LED_ON);
			led_yellow_state = !led_yellow_state;
		}
		ex1_counter = 2;
	}
	HAL_Delay(1000);
}

