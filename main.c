/***********************************
 * 	main.c
 *  Created on: Mar 15, 2021
 *  Author: Eng_Fawzi
 **********************************/
#include "Dio_Reg.h"
#include "Std_Types.h"
#include "stdlib.h"
#include "stdio.h"
#include "util/delay.h"
#include "Bit_Math.h"
#include "Dio.h"
#include "Lcd.h"
#include "Led.h"
#include "KeyPad.h"
#include <avr/interrupt.h>
#include "Interrupt_Util.h"
#include "Ext_Int.h"
#include "avr/io.h"
#include "Eeprom24C16.h"
int main()
{
	u8 chr;
	Lcd_Init();
	Lcd_Cmd(_LCD_CURSOR_OFF);
	Eeprom24C32_Init();
	Eeprom24C32_WriteByte(0, 'A');
	chr = Eeprom24C32_ReadByte(0);
	Lcd_GotoRowColumn(0, 0);
	Lcd_DisplayChr(chr);
	while(1)
		{
			;
		}
	return 0;
}
