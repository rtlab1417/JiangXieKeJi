#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Serial.h"

uint8_t RxData;

int main(void)
{
	OLED_Init();
	OLED_ShowString(1, 1, "RxData:");
	
	Serial_Init();

// ***************** use interrupt	
	while (1)
	{
		if (Serial_GetRxFlag() == 1)
		{
			RxData = Serial_GetRxData();
			Serial_SendByte(RxData);
			OLED_ShowHexNum(1, 8, RxData, 2);
		}
	}
	
	
// ******** without using interrupt
//		while (1)
//	{
//		// looping to scan USART Rx. 
//		// Interrupt not applied
//		
//		if (USART_GetFlagStatus(USART1, USART_FLAG_RXNE) == SET)
//		{
//			RxData = USART_ReceiveData(USART1);
//			OLED_ShowHexNum(1, 1, RxData, 2);
//		}
//	}
//	
	
	
}

