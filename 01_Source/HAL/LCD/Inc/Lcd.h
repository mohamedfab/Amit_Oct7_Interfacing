/**************************************
 * Lcd.h
 *  Created on: Mar 2, 2021
 *  Author: Eng_Fawzi
 **************************************/
#ifndef _LCD_H_
#define _LCD_H_
#include "util/delay.h"
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Dio.h"

#define	_LCD_CLEAR 				(0x01)
#define _LCD_CURSOR_OFF 		(0x0C)
#define	_LCD_CURSOR_ON      	(0x0F)
#define	_LCD_4BIT_MODE			(0x28)
#define	_LCD_8BIT_MODE			(0x38)
#define	_LCD_ON					(0x0F)
#define	_LCD_CURSOR_UNDERLINE	(0x0E)
#define	_LCD_CURSOR_SHIFT_LEFT 	(0x10)
#define	_LCD_CURSOR_SHIFT_RIGHT (0x14)
#define	_LCD_CURSOR_INCREMENT   (0x06)

void Lcd_Write(u8 data);
void Lcd_Cmd(u8 cmd);
void Lcd_DisplayChr(u8 data);
void Lcd_DisplayStr(u8 *str);
void Lcd_GotoRowColumn(u8 row,u8 column);
void Lcd_Init(void);
#endif /* 01_SOURCE_HAL_LCD_INC_LCD_H_ */
