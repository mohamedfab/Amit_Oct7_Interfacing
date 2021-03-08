/**************************************
 * Lcd.h
 *  Created on: Mar 2, 2021
 *  Author: Eng_Fawzi
 **************************************/
#ifndef _KEYPAD_H_
#define _KEYPAD_H_
#include "util/delay.h"
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Dio.h"

#define KEYPAD_PORT      		DIO_PORTC

#define KEYPAD_ROW1_CHANNEL 	CHANNEL0
#define KEYPAD_ROW2_CHANNEL  	CHANNEL1
#define KEYPAD_ROW3_CHANNEL  	CHANNEL2
#define KEYPAD_ROW4_CHANNEL  	CHANNEL3

#define KEYPAD_COL1_CHANNEL 	CHANNEL4
#define KEYPAD_COL2_CHANNEL 	CHANNEL5
#define KEYPAD_COL3_CHANNEL 	CHANNEL6
#define KEYPAD_COL4_CHANNEL 	CHANNEL7

void KeyPad_Init(void);
void KeyPad_SelectRow(u8 row);
u8 KeyPad_Scan(void);
#endif /* 01_SOURCE_HAL_LCD_INC_LCD_H_ */
