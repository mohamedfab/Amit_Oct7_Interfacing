 /****************************************
 *  File		: Wdg.c
 *	Module		: WDG
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 *
 *****************************************/
#include "Wdg.h"
void WDG_ON(void)
{
	/*	Set Watchdog Timer Window to 2.1 Sec	*/
	WDG_WDTCR_REG |= WDG_WINDOW_5V_2POINT1_SEC;
	/*	Enable Watchdog Timer	*/
	SET_BIT(WDG_WDTCR_REG,WDG_ENABLE_BIT);
}
void WDG_OFF(void)
{
	WDG_WDTCR_REG =(WDG_ENABLE)|(WDG_TURN_OFF_ENABLE);
	CLR_BIT(WDG_WDTCR_REG,WDG_ENABLE_BIT);
}
void WDG_Refresh(void)
{
	asm("WDR");
}
