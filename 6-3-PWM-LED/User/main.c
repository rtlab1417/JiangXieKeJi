#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "PWM.h"

uint16_t i;

int main(void)
{
	OLED_Init();
	PWM_Init();
	int delayTime = 10;
    
	while (1)
	{
		for (i = 0; i <= 100; i++)
		{
			PWM_SetCompare1(i);
			Delay_ms(delayTime);
		}
		for (i = 0; i <= 100; i++)
		{
			PWM_SetCompare1(100 - i);
			Delay_ms(delayTime);
		}
	}
}
