#include "hr04.h"
#include "stm32f1xx_hal.h"
#include "MyDelay.h"
#include "stdbool.h"
#include "Util.h"


uint8_t flagHRCDone1 =0;
uint8_t flagHRCDone2 =0;

uint32_t timeOutHr04_1 = 0;
uint32_t timeOutHr04_2 = 0;

uint32_t pulseWidthEcho1 = 0;
uint32_t pulseWidthEcho2 = 0;

float hr04_getDistance1()
{
	HAL_GPIO_WritePin(Trig1_GPIO_Port,Trig1_Pin,1);
	delay_us(15);
	HAL_GPIO_WritePin(Trig1_GPIO_Port,Trig1_Pin,0);
	flagHRCDone1 =0;
	uint32_t timeOut = get_tick_us();
	while(flagHRCDone1 ==0)
	{
		if(elapsedTime(get_tick_us(),timeOut)>=100000)
		{
			return 0;
		}
	}
	if(pulseWidthEcho1 > 26470)
	{
			return 0;
	}
	return 0.017*pulseWidthEcho1;
}

float hr04_getDistance2()
{
	HAL_GPIO_WritePin(Trig2_GPIO_Port,Trig2_Pin,1);
	delay_us(15);
	HAL_GPIO_WritePin(Trig2_GPIO_Port,Trig2_Pin,0);
	flagHRCDone2 =0;
	uint32_t timeOu2 = get_tick_us();
	while(flagHRCDone2 ==0)
	{
		if(elapsedTime(get_tick_us(),timeOu2)>=100000)
		{
			return 0;
		}
	}
	if(pulseWidthEcho2 > 26470)
	{
			return 0;
	}
	return 0.017*pulseWidthEcho2;
}





void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
		//ngat canh len
		if(HAL_GPIO_ReadPin(Echo1_GPIO_Port,Echo1_Pin)==1)
		{
				timeOutHr04_1 = get_tick_us();
		}
		else //ngat canh xuong
		{
				flagHRCDone1 = 1;
				pulseWidthEcho1 = elapsedTime(get_tick_us(),timeOutHr04_1);
		}
		
		//ngat canh len
		if(HAL_GPIO_ReadPin(Echo2_GPIO_Port,Echo2_Pin)==1)
		{
				timeOutHr04_2 = get_tick_us();
		}
		else //ngat canh xuong
		{
				flagHRCDone2 = 1;
				pulseWidthEcho2 = elapsedTime(get_tick_us(),timeOutHr04_2);
		}
}





