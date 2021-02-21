/*
 * Dio.h
 *
 *  Created on: Feb 15, 2021
 *      Author: Eng_Fawzi
 */

#ifndef DIO_H_
#define DIO_H_

/*	Includes	*/
#include "Std_Types.h"
#include "Dio_Reg.h"
#include "Bit_Math.h"

/*	Constant MAcros		*/
#define DIO_PORTA      	0
#define DIO_PORTB	   	1
#define DIO_PORTC		2
#define DIO_PORTD     	3

#define CHANNEL0		0
#define CHANNEL1		1
#define CHANNEL2		2
#define CHANNEL3		3
#define CHANNEL4		4
#define CHANNEL5		5
#define CHANNEL6		6
#define CHANNEL7		7

#define INPUT			0
#define OUTPUT			1

#define STD_HIGH		1
#define STD_LOW			0

/*	Functions prototypes	*/
void Dio_ConfigureChannel(u8 port, u8 channel, u8 dir);
void Dio_WriteChannel(u8 port, u8 channel, u8 level);
u8 Dio_ReadChannel(u8 port, u8 channel);
#endif /* DIO_H_ */
