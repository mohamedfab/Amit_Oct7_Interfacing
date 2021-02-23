 /**********************************************************************************************************************
 *  File		: Buzzer.c
 *	Module		: BUZZER
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 * 
 *********************************************************************************************************************/

#include "Buzzer.h"
void Buzzer_Init(void)
{
	Dio_ConfigureChannel(DIO_PORTA,CHANNEL3,OUTPUT);
}
void Buzzer_TurnON(void)
{
	Dio_WriteChannel(DIO_PORTA,CHANNEL3,STD_HIGH);
}
void Buzzer_TurnOFF(void)
{
	Dio_WriteChannel(DIO_PORTA,CHANNEL3,STD_LOW);
}
void Buzzer_Toggle(void)
{
	Dio_FlipChannel(DIO_PORTA,CHANNEL3);
}
/**********************************************************************************************************************
 *  END OF FILE: LED.c
 *********************************************************************************************************************/
