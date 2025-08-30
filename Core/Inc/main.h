/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
//#define LED_ON SET
//#define LED_OFF RESET
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CLK1_Pin GPIO_PIN_0
#define CLK1_GPIO_Port GPIOA
#define CLK2_Pin GPIO_PIN_1
#define CLK2_GPIO_Port GPIOA
#define CLK3_Pin GPIO_PIN_2
#define CLK3_GPIO_Port GPIOA
#define CLK4_Pin GPIO_PIN_3
#define CLK4_GPIO_Port GPIOA
#define CLK5_Pin GPIO_PIN_4
#define CLK5_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_7
#define LED_GREEN_GPIO_Port GPIOA
#define SEG7_A_Pin GPIO_PIN_0
#define SEG7_A_GPIO_Port GPIOB
#define SEG7_B_Pin GPIO_PIN_1
#define SEG7_B_GPIO_Port GPIOB
#define SEG7_C_Pin GPIO_PIN_2
#define SEG7_C_GPIO_Port GPIOB
#define SEG7_D1_Pin GPIO_PIN_10
#define SEG7_D1_GPIO_Port GPIOB
#define SEG7_E1_Pin GPIO_PIN_11
#define SEG7_E1_GPIO_Port GPIOB
#define SEG7_F1_Pin GPIO_PIN_12
#define SEG7_F1_GPIO_Port GPIOB
#define SEG7_G1_Pin GPIO_PIN_13
#define SEG7_G1_GPIO_Port GPIOB
#define CLK11_Pin GPIO_PIN_14
#define CLK11_GPIO_Port GPIOB
#define CLK12_Pin GPIO_PIN_15
#define CLK12_GPIO_Port GPIOB
#define LED_RED_1_Pin GPIO_PIN_8
#define LED_RED_1_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_9
#define LED_YELLOW_1_GPIO_Port GPIOA
#define LED_GREEN_1_Pin GPIO_PIN_10
#define LED_GREEN_1_GPIO_Port GPIOA
#define CLK6_Pin GPIO_PIN_11
#define CLK6_GPIO_Port GPIOA
#define CLK7_Pin GPIO_PIN_12
#define CLK7_GPIO_Port GPIOA
#define CLK8_Pin GPIO_PIN_13
#define CLK8_GPIO_Port GPIOA
#define CLK9_Pin GPIO_PIN_14
#define CLK9_GPIO_Port GPIOA
#define CLK10_Pin GPIO_PIN_15
#define CLK10_GPIO_Port GPIOA
#define SEG7_D_Pin GPIO_PIN_3
#define SEG7_D_GPIO_Port GPIOB
#define SEG7_E_Pin GPIO_PIN_4
#define SEG7_E_GPIO_Port GPIOB
#define SEG7_F_Pin GPIO_PIN_5
#define SEG7_F_GPIO_Port GPIOB
#define SEG7_G_Pin GPIO_PIN_6
#define SEG7_G_GPIO_Port GPIOB
#define SEG7_A1_Pin GPIO_PIN_7
#define SEG7_A1_GPIO_Port GPIOB
#define SEG7_B1_Pin GPIO_PIN_8
#define SEG7_B1_GPIO_Port GPIOB
#define SEG7_C1_Pin GPIO_PIN_9
#define SEG7_C1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
