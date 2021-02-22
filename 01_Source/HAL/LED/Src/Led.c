/*
 * Led.c
 *
 *  Created on: Feb 22, 2021
 *      Author: Eng_Fawzi
 */
#include "Led.h"


void Led_Init(void)
{
	Dio_ConfigureChannel(DIO_PORTC, CHANNEL2, OUTPUT);
	Dio_ConfigureChannel(DIO_PORTC, CHANNEL7, OUTPUT);
	Dio_ConfigureChannel(DIO_PORTD, CHANNEL3, OUTPUT);
}

void Led_ON(u8 LedNo)
{
	switch (LedNo)
	{
	case LED0:
		Dio_WriteChannel(DIO_PORTC, CHANNEL2, STD_HIGH);
		break;

	case LED1:
		Dio_WriteChannel(DIO_PORTC, CHANNEL7, STD_HIGH);
		break;

	case LED2:
		Dio_WriteChannel(DIO_PORTD, CHANNEL3, STD_HIGH);
		break;
	}
}
void Led_OFF(u8 LedNo)
{
	switch (LedNo)
	{
	case LED0:
		Dio_WriteChannel(DIO_PORTC, CHANNEL2, STD_LOW);
		break;

	case LED1:
		Dio_WriteChannel(DIO_PORTC, CHANNEL7, STD_LOW);
		break;

	case LED2:
		Dio_WriteChannel(DIO_PORTD, CHANNEL3, STD_LOW);
		break;
	}
}
void Led_Toggle(u8 LedNo)
{

	switch (LedNo)
	{
	case LED0:
		Dio_FlipChannel(DIO_PORTC, CHANNEL2);
		break;

	case LED1:
		Dio_FlipChannel(DIO_PORTC, CHANNEL7);
		break;

	case LED2:
		Dio_FlipChannel(DIO_PORTD, CHANNEL3);
		break;
	}
}
