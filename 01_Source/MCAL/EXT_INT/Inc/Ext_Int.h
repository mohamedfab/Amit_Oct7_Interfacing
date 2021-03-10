/**********************************
 * Ext_Int.h
 * Created on: Mar 10, 2021
 * Author: Eng_Fawzi
 *******************************/

#ifndef EXT_INT_H_
#define EXT_INT_H_
#include "Bit_Math.h"
#include "Std_Types.h"
#include "Ext_Int_Reg.h"

#define EXT_INT0						(0)
#define EXT_INT1						(1)
#define EXT_INT2						(2)

#define INT0_LOW_LEVEL 					(0<<0)
#define INT0_ANY_LOGICAL_CHANGE 		(1<<0)
#define INT0_RISING_EDGE 				(3<<0)
#define INT0_FAILING_EDGE				(2<<0)

#define INT1_LOW_LEVEL 					(0<<2)
#define INT1_ANY_LOGICAL_CHANGE 		(1<<2)
#define INT1_RISING_EDGE 				(3<<2)
#define INT1_FAILING_EDGE				(2<<2)

#define INT2_RISING_EDGE 				(1<<6)
#define INT2_FAILING_EDGE				(0<<6)
void Ext_Int_Enable(u8 extIntSrc);
void Ext_Int_Int0Sence(u8 intSence);
void Ext_Int_Int1Sence(u8 intSence);
#endif
