#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "PWM.h"
#include "IC.h"

int main(void)
{
	OLED_Init();
	PWM_Init();
	IC_Init();
	
	OLED_ShowString(1, 1, "Freq:00000Hz");
	
	//PWM_SetPrescaler(720- 1);			//Freq = 72M / (PSC + 1) / 100
	PWM_SetCompare1(50);				//Duty = CCR / 100
	
    uint16_t num = 0;
    
	while (1)
	{
        for(num = 0; num<5; num++)
        {
            PWM_SetPrescaler(720 - 1 + num*num*200);			//Freq = 72M / (PSC + 1) / 100
            Delay_ms(1000);
            OLED_ShowNum(1, 6, IC_GetFreq(), 5);
        }
        
		// OLED_ShowNum(1, 6, IC_GetFreq(), 5);
	}
}
