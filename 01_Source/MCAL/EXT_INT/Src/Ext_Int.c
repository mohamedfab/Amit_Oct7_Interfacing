/***************************************
 * 	Ext_Int.c
 *  Created on: Mar 10, 2021
 *  Author: Eng_Fawzi
 *********************************/
#include "Ext_Int.h"

void Ext_Int_Enable(u8 extIntSrc)
{
	switch (extIntSrc)
	{
	case EXT_INT0:
		SET_BIT(INT_GICR_REG,6);
		break;
	case EXT_INT1:
		SET_BIT(INT_GICR_REG,7);
		break;
	case EXT_INT2:
		SET_BIT(INT_GICR_REG,5);
		break;
	}
}
void Ext_Int_Int0Sence(u8 intSence)
{
	INT_MCUCR_REG|=intSence;
}
void Ext_Int_Int1Sence(u8 intSence)
{
	INT_MCUCR_REG|=intSence;
}
void Ext_Int_Int2Sence(u8 intSence)
{
	INT_MCUCSR_REG|=intSence;
}
