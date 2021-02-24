/*
 * SSD.c
 *
 *  Created on: Feb 24, 2021
 *      Author: Eng_Fawzi
 */
#include "SSD.h"

void SSD_Init(void)
{
	Dio_ConfigureChannel(DIO_PORTB, CHANNEL1,OUTPUT); /*EN1*/
	Dio_ConfigureChannel(DIO_PORTB, CHANNEL2,OUTPUT); /*En2*/
	Dio_ConfigurePort(DIO_PORTA, 0xF0, 0xF0);
}
void SSD_DisplayNum(u8 num)
{
	Dio_WriteChannel(DIO_PORTB, CHANNEL1,STD_HIGH);   	/* Turn ON SSD1*/
	Dio_WriteChannel(DIO_PORTB, CHANNEL2,STD_LOW); 		/* Turn OFF SSD2*/
	Dio_WritePort(DIO_PORTA, num%10<<4, 0xF0);
	_delay_ms(1);
	Dio_WriteChannel(DIO_PORTB, CHANNEL1,STD_LOW);   	/* Turn OFF SSD1*/
	Dio_WriteChannel(DIO_PORTB, CHANNEL2,STD_HIGH); 	/* Turn ON SSD2*/
	Dio_WritePort(DIO_PORTA, num/10<<4, 0xF0);
	_delay_ms(1);
}
