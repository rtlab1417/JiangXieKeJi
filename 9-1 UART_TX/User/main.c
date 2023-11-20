#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Serial.h"

int main(void)
{
	OLED_Init();
	
	Serial_Init();
	
    // fundamental function
   // Serial_SendByte(0x41);  // 'A'
	
    // deploy fundamental function to send an array of byte data
    // create Serial_SendArray()
//  	uint8_t MyArray[] = {'B', 'C', 'D', 'E'};//{0x42, 0x43, 0x44, 0x45};
//	Serial_SendArray(MyArray, 4); // length of array == 4
//	
//    Serial_SendArray(MyArray, sizeof(MyArray) / sizeof(MyArray[0])); // use sizeof to determine the length
//    
//    
//    
//	Serial_SendString("Hello World!\r\n");                  //("\r\nNum1=");
	
//	Serial_SendNumber(1234556, 7);      // send number in the form of ascii code
	
//	printf("\r\nNum2=%d", 222);         // standard C function.

//	if we have multiple uart, use sprintf  --> to save in an array, then
//  transfer to specific uart port
//	char String[100];
//	sprintf(String, "\r\nNum3=%d", 333);
//	Serial_SendString(String);
//	
//	Serial_Printf("\r\nNum4=%d", 444);
//	Serial_Printf("\r\n");

// type Chinese
 
    Serial_Printf("ÄãºÃ£¬ ÊÀ½ç");
	Serial_Printf("\r\n");
	
	while (1)
	{
		
	}
}

