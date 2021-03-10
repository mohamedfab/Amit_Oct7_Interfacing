/*****************************
 * Interrupt_Util.h
 *  Created on: Mar 10, 2021
 *  Author: Eng_Fawzi
 *****************************/

#ifndef INTERRUPT_UTIL_H_
#define INTERRUPT_UTIL_H_

#include "Bit_Math.h"
#include "Std_Types.h"

#define INT_SREG_REG					(*(volatile u8*)0x5F)
#define ENABLE_GLOBAL_INTERRUPT()		SET_BIT(INT_SREG_REG,7)
#define DISABLE_GLOBAL_INTERRUPT()		CLR_BIT(INT_SREG_REG,7)

#endif /* 01_SOURCE_LIB_INTERRUPT_UTIL_H_ */
