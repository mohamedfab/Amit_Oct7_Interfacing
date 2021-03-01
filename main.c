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


int main(void)
{
	Lcd_Init();
	Lcd_DisplayStr((u8*)"Hello LCD.........");
	while(1)
	{

	}
}
