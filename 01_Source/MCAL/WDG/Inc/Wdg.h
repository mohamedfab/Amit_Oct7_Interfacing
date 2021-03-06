 /**********************************************
 *  File		: Wdg.h
 *	Module		: WDG
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 ***********************************************/
#ifndef WDG_H_
#define WDG_H_

#include "Std_Types.h"
#include "Wdg_Private.h"
#include "Bit_Math.h"

#define WDG_WINDOW_3V_17POINT1_MS			(0<<0)
#define WDG_WINDOW_3V_34POINT3_MS			(1<<0)
#define WDG_WINDOW_3V_68POINT5_MS			(2<<0)
#define WDG_WINDOW_3V_0POINT14_SEC			(3<<0)
#define WDG_WINDOW_3V_0POINT27_SEC			(4<<0)
#define WDG_WINDOW_3V_0POINT55_SEC			(5<<0)
#define WDG_WINDOW_3V_1POINT1_SEC			(6<<0)
#define WDG_WINDOW_3V_2POINT2_SEC			(7<<0)

#define WDG_WINDOW_5V_16POINT3_MS			(0<<0)
#define WDG_WINDOW_5V_32POINT5_MS			(1<<0)
#define WDG_WINDOW_5V_65_MS					(2<<0)
#define WDG_WINDOW_5V_0POINT13_SEC			(3<<0)
#define WDG_WINDOW_5V_0POINT26_SEC			(4<<0)
#define WDG_WINDOW_5V_0POINT52_SEC			(5<<0)
#define WDG_WINDOW_5V_1POINT0_SEC			(6<<0)
#define WDG_WINDOW_5V_2POINT1_SEC			(7<<0)

#define WDG_ENABLE							(1<<3)
#define WDG_ENABLE_BIT						(3)
#define WDG_TURN_OFF_ENABLE					(1<<4)

void WDG_ON(void);
void WDG_OFF(void);
void WDG_Refresh(void);
#endif  /* WDG_H_ */
