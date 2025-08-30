/*
 * Exercise4.c
 *
 *  Created on: Aug 29, 2025
 *      Author: Dell
 */

#include "Exercise4.h"

uint8_t ex4_counter = 0;

const uint8_t SEG7_MAT[10] = {
	0X3F, // 0: a b c d e f
	0x06, // 1:   b c
	0x5B, // 2: a b   d e   g
	0x4F, // 3: a b c d     g
	0x66, // 4:   b c   f   g
	0x6D, // 5: a   c d   f g
	0x7D, // 6: a   c d e f g
	0x07, // 7: a b c
	0x7F, // 8: a b c d e f g
	0x6F  // 9: a b c d   f g
};

void display7SEG(uint8_t num) {
	HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, (num & (1u<<0)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, (num & (1u<<1)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, (num & (1u<<2)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, (num & (1u<<3)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, (num & (1u<<4)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, (num & (1u<<5)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, (num & (1u<<6)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void display7SEG_1(uint8_t num) {
	HAL_GPIO_WritePin(SEG7_A1_GPIO_Port, SEG7_A1_Pin, (num & (1u<<0)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_B1_GPIO_Port, SEG7_B1_Pin, (num & (1u<<1)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_C1_GPIO_Port, SEG7_C1_Pin, (num & (1u<<2)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_D1_GPIO_Port, SEG7_D1_Pin, (num & (1u<<3)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_E1_GPIO_Port, SEG7_E1_Pin, (num & (1u<<4)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_F1_GPIO_Port, SEG7_F1_Pin, (num & (1u<<5)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG7_G1_GPIO_Port, SEG7_G1_Pin, (num & (1u<<6)) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void Exercise4() {
	if (ex4_counter >= 0 && ex4_counter <= 9) {
		display7SEG(SEG7_MAT[ex4_counter]);
		if (ex4_counter == 9) ex4_counter = -1;
	}
	ex4_counter++;
	HAL_Delay(1000);
}
