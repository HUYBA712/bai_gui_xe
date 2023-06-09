/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
//void delay_us(uint16_t us);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DHT11_Pin GPIO_PIN_0
#define DHT11_GPIO_Port GPIOA
#define Echo1_Pin GPIO_PIN_1
#define Echo1_GPIO_Port GPIOA
#define Echo1_EXTI_IRQn EXTI1_IRQn
#define Echo2_Pin GPIO_PIN_2
#define Echo2_GPIO_Port GPIOA
#define Echo2_EXTI_IRQn EXTI2_IRQn
#define Trig1_Pin GPIO_PIN_3
#define Trig1_GPIO_Port GPIOA
#define Trig2_Pin GPIO_PIN_4
#define Trig2_GPIO_Port GPIOA
#define ViTri1_Pin GPIO_PIN_12
#define ViTri1_GPIO_Port GPIOB
#define ViTri2_Pin GPIO_PIN_13
#define ViTri2_GPIO_Port GPIOB
#define ViTri3_Pin GPIO_PIN_14
#define ViTri3_GPIO_Port GPIOB
#define ViTri4_Pin GPIO_PIN_15
#define ViTri4_GPIO_Port GPIOB
#define ViTri5_Pin GPIO_PIN_8
#define ViTri5_GPIO_Port GPIOA
#define Flame_Pin GPIO_PIN_9
#define Flame_GPIO_Port GPIOA
#define Coi_Pin GPIO_PIN_3
#define Coi_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
