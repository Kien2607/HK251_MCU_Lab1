/*
 * Exercise5.c
 *
 *  Created on: Aug 29, 2025
 *      Author: Dell
 */

#include "Exercise5.h"

//uint8_t road1_time_cnt = 1;
//uint8_t road2_time_cnt = 1;
//
//void Exercise5() {
//	switch(light_status)
//	{
//		case IDLE:
//			display7SEG(SEG7_MAT[road1_time_cnt]);
//			display7SEG_1(SEG7_MAT[road2_time_cnt]);
//			if (road1_time_cnt == 1) {
//				light_status = ROAD1_YELLOW;
//				road1_time_cnt = (yellow_time + 1000) / 1000;
//				road2_time_cnt = (yellow_time + green_time + 1000) / 1000;
//			}
//			break;
//		case ROAD1_YELLOW:
//			display7SEG(SEG7_MAT[road1_time_cnt]);
//			display7SEG_1(SEG7_MAT[road2_time_cnt]);
//			if(road1_time_cnt == 1) {
//				light_status = ROAD1_GREEN;
//				road1_time_cnt = (green_time + 1000) / 1000;
//				road2_time_cnt = (green_time + 1000) / 1000;
//			}
//			break;
//		case ROAD1_GREEN:
//			display7SEG(SEG7_MAT[road1_time_cnt]);
//			display7SEG_1(SEG7_MAT[road2_time_cnt]);
//			if(road1_time_cnt == 1) {
//				light_status = ROAD2_YELLOW;
//				road2_time_cnt = (yellow_time + 1000) / 1000;
//				road1_time_cnt = (yellow_time + green_time + 1000) / 1000;
//			}
//			break;
//		case ROAD2_YELLOW:
//			display7SEG(SEG7_MAT[road1_time_cnt]);
//			display7SEG_1(SEG7_MAT[road2_time_cnt]);
//			if(road2_time_cnt == 1) {
//				light_status = ROAD2_GREEN;
//				road2_time_cnt = (green_time + 1000) / 1000;
//				road1_time_cnt = (green_time + 1000) / 1000;
//			}
//			break;
//		case ROAD2_GREEN:
//			display7SEG(SEG7_MAT[road1_time_cnt]);
//			display7SEG_1(SEG7_MAT[road2_time_cnt]);
//			if (road2_time_cnt == 1) {
//				light_status = ROAD1_YELLOW;
//				road1_time_cnt = (yellow_time + 1000) / 1000;
//				road2_time_cnt = (yellow_time + green_time + 1000) / 1000;
//			}
//			break;
//		default:
//			break;
//	}
//	road1_time_cnt--;
//	road2_time_cnt--;
////	HAL_Delay(1000);
//}




uint8_t ex5_light_status = IDLE;
uint8_t ex5_counter = 1;

void Exercise5() {
	switch(ex5_light_status)
	{
	case IDLE:
		idle();
		display7SEG(SEG7_MAT[0]);
		display7SEG_1(SEG7_MAT[0]);
		if (ex5_counter == 1) {
			ex5_light_status = ROAD1_YELLOW;
			ex5_counter = (yellow_time + 1000)/1000;
		}
		break;
	case ROAD1_YELLOW:
		road1_yellow();
		display7SEG(SEG7_MAT[ex5_counter]);
		display7SEG_1(SEG7_MAT[ex5_counter + 3]);
		if (ex5_counter == 1) {
			ex5_light_status = ROAD1_GREEN;
			ex5_counter = (green_time + 1000) / 1000;
		}
		break;
	case ROAD1_GREEN:
		road1_green();
		display7SEG(SEG7_MAT[ex5_counter]);
		display7SEG_1(SEG7_MAT[ex5_counter]);
		if (ex5_counter == 1) {
			ex5_light_status = ROAD2_YELLOW;
			ex5_counter = (yellow_time + 1000) / 1000;
		}
		break;
	case ROAD2_YELLOW:
		road2_yellow();
		display7SEG(SEG7_MAT[ex5_counter + 3]);
		display7SEG_1(SEG7_MAT[ex5_counter]);
		if (ex5_counter == 1) {
			ex5_light_status = ROAD2_GREEN;
			ex5_counter = (green_time + 1000) / 1000;
		}
		break;
	case ROAD2_GREEN:
		road2_green();
		display7SEG(SEG7_MAT[ex5_counter]);
		display7SEG_1(SEG7_MAT[ex5_counter]);
		if (ex5_counter == 1) {
			ex5_light_status = ROAD1_YELLOW;
			ex5_counter = (yellow_time + 1000) / 1000;
		}
		break;
	default:
		break;
	}
	ex5_counter--;
//	HAL_Delay(1000);
}
