/************************************
 * Ext_Int_Private.h
 *  Created on: Mar 10, 2021
 *  Author: Eng_Fawzi
 *********************************/

#ifndef EXT_INT_REG_H_
#define EXT_INT_REG_H_

#define INT_GICR_REG				(*(volatile u8*)0x5B)
#define INT_MCUCR_REG				(*(volatile u8*)0x55)
#define INT_MCUCSR_REG         		(*(volatile u8*)0x54)

#endif /* 01_SOURCE_MCAL_EXT_INT_INC_EXT_INT_PRIVATE_H_ */
