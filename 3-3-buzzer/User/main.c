#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	while (1)
	{
        int timelong = 100;
        int timeshort = 100;
        int timeinterval = 700;
        
        // pattern 1 - 1 long 1 short
		GPIO_ResetBits(GPIOB, GPIO_Pin_12); //long
		Delay_ms(timelong);
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(timeshort);
        
		GPIO_ResetBits(GPIOB, GPIO_Pin_12); // short
		Delay_ms(timeshort);   
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(timeshort);
        
        Delay_ms(timeinterval); // interval
        
        
        // pattern 2 - 1 long 2 short
		GPIO_ResetBits(GPIOB, GPIO_Pin_12); //long
		Delay_ms(timelong);
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(timeshort);
        
		GPIO_ResetBits(GPIOB, GPIO_Pin_12); // short
		Delay_ms(timeshort);   
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(timeshort);
        
        GPIO_ResetBits(GPIOB, GPIO_Pin_12); // short
		Delay_ms(timeshort);   
		GPIO_SetBits(GPIOB, GPIO_Pin_12);
		Delay_ms(timeshort);
        
		Delay_ms(timeinterval); // interval
	}
}
