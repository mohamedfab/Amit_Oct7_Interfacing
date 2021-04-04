 /*************************************************
 *  File		: Eeprom24C16.h
 *	Module		: EEPROM24C16
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 ***************************************************/
#ifndef EEPROM24C16_H_
#define EEPROM24C16_H_

#include "I2c.h"

void Eeprom24C32_Init(void);
void Eeprom24C32_WriteByte(u8 addr, u8 data);
u8 Eeprom24C32_ReadByte(u8 addr);
 
#endif  /* EEPROM14C32_H_ */
