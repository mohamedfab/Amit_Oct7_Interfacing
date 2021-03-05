/************************************
  * main.c
  * Created on: Feb 8, 2021
  * Author: MFawzi
  *********************************/

#include "Dio_Reg.h"
#include "Std_Types.h"
#include "util/delay.h"
#include "Bit_Math.h"
#include "Dio.h"
#include "Lcd.h"
u8 customChar[]={0b00001010,0b00011111,0b00011111,0b00011111,0b00011111,0b00001110,0b00000100,0b00000000};

void Lcd_WriteCustom(void)
{
	u8 index=0;
	Lcd_Cmd(0x40);
	for (index =0; index<8;index++)
	{
		Lcd_DisplayChr(customChar[index]);
	}
}
int main(void)
{
	Lcd_Init();
	Lcd_Cmd(_LCD_CURSOR_OFF);
	Lcd_WriteCustom();
	Lcd_GotoRowColumn(0, 0);
	Lcd_DisplayStr((u8*)"I   AMIT");
	Lcd_GotoRowColumn(0, 2);
	Lcd_DisplayChr(0);
	while(1)
		{

		}
}
