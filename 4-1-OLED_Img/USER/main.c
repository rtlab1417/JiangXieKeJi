//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-10-31
//  ����޸�   : 
//  ��������   : OLED I2C�ӿ���ʾ����(STM32F103ϵ��)
//              ˵��: 
//              ----------------------------------------------------------------
//              GND  ��Դ��
//              VCC  3.3v��Դ
//              D0   PA0��SCL��
//              D1   PA1��SDA��
//              RES  PA2��SPIģ��ĳ�IICģ����Ҫ�Ӵ����ţ�IICģ���û�����ԣ�
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2018-10-31
//All rights reserved
//******************************************************************************/
#include "delay.h"
#include "sys.h"
#include "oled.h"
#include "bmp.h"

int main(void)
{
	u8 t=' ';
	delay_init();
	OLED_Init();
	OLED_ColorTurn(0);//0������ʾ��1 ��ɫ��ʾ
    OLED_DisplayTurn(0);//0������ʾ 1 ��Ļ��ת��ʾ
	while(1)
	{
	//	OLED_ShowPicture(0,0,128,64,BMP2,1);
 //       OLED_ShowPicture(0,0,64,64,BMP4,1);
        //OLED_ShowPicture(64,0,64,64,BMP4,1);
        
        // display �о�԰���Ӽ������޹�˾
        //OLED_ShowPicture(0,0,16,16,BMP5,1);
//        OLED_ShowPicture(18,0,16,16,BMP6,1);
//        OLED_ShowPicture(36,0,16,16,BMP7,1);
//        OLED_ShowPicture(54,0,16,16,BMP8,1);
//        OLED_ShowPicture(72,0,16,16,BMP9,1);
//        OLED_ShowPicture(90,0,16,16,BMP10,1);
//        OLED_ShowPicture(108,0,16,16,BMP11,1);
//        OLED_ShowPicture(0,24,16,16,BMP12,1);
//        OLED_ShowPicture(18,24,16,16,BMP13,1);
//        OLED_ShowPicture(36,24,16,16,BMP14,1);
//        OLED_ShowPicture(54,24,16,16,BMP15,1);
        OLED_ShowPicture(0,0,128,64,BMP19,1);
        
        OLED_Refresh();
//        
//        delay_ms(1000);
//		OLED_Clear();
//		OLED_ShowChinese(0,0,0,16,1);//��
//		OLED_ShowChinese(18,0,1,16,1);//��
//		OLED_ShowChinese(36,0,2,16,1);//԰
//		OLED_ShowChinese(54,0,3,16,1);//��
//		OLED_ShowChinese(72,0,4,16,1);//��
//		OLED_ShowChinese(90,0,5,16,1);//��
//		OLED_ShowChinese(108,0,6,16,1);//��
//		OLED_ShowString(8,16,"ZHONGJINGYUAN",16,1);
//		OLED_ShowString(20,32,"2014/05/01",16,1);
//		OLED_ShowString(0,48,"ASCII:",16,1);  
//		OLED_ShowString(63,48,"CODE:",16,1);
//		OLED_ShowChar(48,48,t,16,1);//��ʾASCII�ַ�	   
//		t++;
//		if(t>'~')t=' ';
//		OLED_ShowNum(103,48,t,3,16,1);
//		OLED_Refresh();
//		delay_ms(1000);
//		OLED_Clear();
//		OLED_ShowChinese(0,0,0,16,1);  //16*16 ��
//        OLED_ShowChinese(16,0,0,24,1); //24*24 ��
//		OLED_ShowChinese(24,20,0,32,1);//32*32 ��
//        OLED_ShowChinese(64,0,0,64,1); //64*64 ��
//		OLED_Refresh();
//        delay_ms(500);
//        OLED_Clear();
//		OLED_ShowString(0,0,"ABC",8,1);//6*8 ��ABC��
//		OLED_ShowString(0,8,"ABC",12,1);//6*12 ��ABC��
//        OLED_ShowString(0,20,"ABC",16,1);//8*16 ��ABC��
//		OLED_ShowString(0,36,"ABC",24,1);//12*24 ��ABC��
//        OLED_Refresh();
//		delay_ms(500);
		//OLED_ScrollDisplay(11,4,1);
//        
	}
}
