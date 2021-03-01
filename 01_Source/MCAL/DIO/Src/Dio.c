/*************************************
 * Dio.c
 *  Created on: Feb 15, 2021
 *  Author: Eng_Fawzi
 *************************************/
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

void Dio_ConfigurePort(u8 port,u8 dir,u8 mask)
{
	switch (port)
	{
	case DIO_PORTA:
		DDRA=(DDRA & ~mask)|(dir & mask);
		break;
	case DIO_PORTB:
		DDRB=(DDRB & ~mask)|(dir & mask);
		break;
	case DIO_PORTC:
		DDRC=(DDRC & ~mask)|(dir & mask);
		break;
	case DIO_PORTD:
		DDRD=(DDRD & ~mask)|(dir & mask);
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
void Dio_WritePort(u8 port,u8 data,u8 mask)
{
	switch (port)
	{
	case DIO_PORTA:
		PORTA=(PORTA & ~mask)|(data & mask);
		break;
	case DIO_PORTB:
		PORTB=(PORTB & ~mask)|(data & mask);
		break;
	case DIO_PORTC:
		PORTC=(PORTC & ~mask)|(data & mask);
		break;
	case DIO_PORTD:
		PORTD=(PORTD & ~mask)|(data & mask);
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
u8 Dio_ReadPort(u8 port)
{
	u8 read=0;
	switch (port)
	{
	case DIO_PORTA:
		read = PINA;
		break;
	case DIO_PORTC:
		read = PINA;
		break;
	case DIO_PORTD:
		read = PINA;
		break;
	}
	return read;
}
