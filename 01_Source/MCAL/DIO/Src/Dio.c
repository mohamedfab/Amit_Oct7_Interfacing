/*
 * Dio.c
 *
 *  Created on: Feb 15, 2021
 *      Author: Eng_Fawzi
 */
#include "Dio.h"

void Dio_ConfigureChannel(u8 port, u8 channel, u8 dir)
{
	switch (port)
	{
	case DIO_PORTA:
		if (dir == OUTPUT)
		{
			SET_BIT(DDRA,channel);
		}
		else
		{
			CLR_BIT(DDRA,channel);
		}
		break;
	case DIO_PORTB:
		if (dir == OUTPUT)
		{
			SET_BIT(DDRB,channel);
		}
		else
		{
			CLR_BIT(DDRB,channel);
		}
		break;
	case DIO_PORTC:
		if (dir == OUTPUT)
		{
			SET_BIT(DDRC,channel);
		}
		else
		{
			CLR_BIT(DDRC,channel);
		}
		break;
	case DIO_PORTD:
		if (dir == OUTPUT)
		{
			SET_BIT(DDRD,channel);
		}
		else
		{
			CLR_BIT(DDRD,channel);
		}
		break;
	}
}
void Dio_WriteChannel(u8 port, u8 channel, u8 level)
{
	switch (port)
	{
	case DIO_PORTA:
		if (level == STD_HIGH)
		{
			SET_BIT(PORTA,channel);
		}
		else
		{
			CLR_BIT(PORTA,channel);
		}
		break;
	case DIO_PORTB:
		if (level == STD_HIGH)
		{
			SET_BIT(PORTB,channel);
		}
		else
		{
			CLR_BIT(PORTB,channel);
		}
		break;
	case DIO_PORTC:
		if (level == STD_HIGH)
		{
			SET_BIT(PORTC,channel);
		}
		else
		{
			CLR_BIT(PORTC,channel);
		}
		break;
	case DIO_PORTD:
		if (level == STD_HIGH)
		{
			SET_BIT(PORTD,channel);
		}
		else
		{
			CLR_BIT(PORTD,channel);
		}
		break;
	}
}

void Dio_FlipChannel(u8 port, u8 channel)
{
	switch (port)
	{
	case DIO_PORTA:
		TOG_BIT(PORTA,channel);
		break;
	case DIO_PORTB:
		TOG_BIT(PORTA,channel);
		break;
	case DIO_PORTC:
		TOG_BIT(PORTA,channel);
		break;
	case DIO_PORTD:
		TOG_BIT(PORTA,channel);
		break;
	}
}
u8 Dio_ReadChannel(u8 port, u8 channel)
{
	u8 read=0;
	switch (port)
	{
	case DIO_PORTA:
		read = GET_BIT(PINA,channel);
		break;
	case DIO_PORTB:
		read =  GET_BIT(PINB,channel);
		break;
	case DIO_PORTC:
		read =  GET_BIT(PINC,channel);
		break;
	case DIO_PORTD:
		read =  GET_BIT(PIND,channel);
		break;
	}
	return read;
}
