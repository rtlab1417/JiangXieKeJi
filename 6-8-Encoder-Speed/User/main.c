#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Timer.h"
#include "Encoder.h"

int16_t Speed;

int main(void)
{
	OLED_Init();
	Timer_Init();
	Encoder_Init();
	
//	OLED_ShowString(1, 1, "Speed:");
    	OLED_ShowString(1, 1, "CNT:");
	
	while (1)
	{
		OLED_ShowSignedNum(1, 7, Speed, 5);

	}
}

// this is an internal clock using TIM interrup
// set at 1 second interval.
// within 1 second, the number of encoder count is the speed
// the unit == encoder_cnt / s

void TIM2_IRQHandler(void)
{
	if (TIM_GetITStatus(TIM2, TIM_IT_Update) == SET)
	{
		Speed = Encoder_Get();
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
	}
}
