 /**********************************************************************************************************************
 *  File		: Button.c
 *	Module		: BUTTON
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 * 
 *********************************************************************************************************************/

#include "Button.h"
void Button_Init(void)
{
	Dio_ConfigureChannel(DIO_PORTB,CHANNEL0,INPUT);
	Dio_ConfigureChannel(DIO_PORTB,CHANNEL4,INPUT);
	Dio_ConfigureChannel(DIO_PORTD,CHANNEL2,INPUT);
}
boolean Button_Pressed(u8 Button)
{
	boolean loc_ButtonPressed = FALSE;
	switch (Button)
	{
	case BUTTON0:
		if (Dio_ReadChannel(DIO_PORTB,CHANNEL0))
		{
			loc_ButtonPressed = TRUE;
		}
		else
		{
			loc_ButtonPressed = FALSE;
		}
		break;

	case BUTTON1:
		if (Dio_ReadChannel(DIO_PORTB,CHANNEL4))
		{
			loc_ButtonPressed = TRUE;
		}
		else
		{
			loc_ButtonPressed = FALSE;
		}
		break;	
	case BUTTON2:
		if (Dio_ReadChannel(DIO_PORTD,CHANNEL2))
		{
			loc_ButtonPressed = TRUE;
		}
		else
		{
			loc_ButtonPressed = FALSE;
		}
		break;
	}
	return loc_ButtonPressed;
}
