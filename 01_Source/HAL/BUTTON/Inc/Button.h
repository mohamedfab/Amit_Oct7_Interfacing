 /********************************************************************************************************************
 *  File		: Button.h
 *	Module		: BUTTON
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 *********************************************************************************************************************/
#ifndef BUTTON_H_
#define BUTTON_H_

#include "Dio.h"

#define BUTTON0				(0)
#define BUTTON1				(1)
#define BUTTON2				(2)

void Button_Init(void);
boolean Button_Pressed(u8 ButtonID);
#endif
