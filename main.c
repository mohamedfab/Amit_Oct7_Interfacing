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
#include "KeyPad.h"
int main(void)
{
	u8 key;
	Lcd_Init();
	KeyPad_Init();
	Lcd_Cmd(_LCD_CURSOR_OFF);
	while(1)
		{
			key = KeyPad_Scan();
			Lcd_GotoRowColumn(0, 0);
			Lcd_DisplayChr(key);
		}
}
