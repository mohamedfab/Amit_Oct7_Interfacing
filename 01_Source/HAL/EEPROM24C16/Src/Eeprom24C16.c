  /*************************************************
 *  File		: Eeprom24C16.c
 *	Module		: EEPROM24C16
 *	Target		: General
 *	Author		: mFawzi
 *  Description	:      
 ***************************************************/
#include "Eeprom24C16.h"

void Eeprom24C32_Init(void)
{
	I2C_MasterInit();
}

void Eeprom24C32_WriteByte(u8 addr, u8 data)
{
	I2C_StartCondition();
	I2C_Send_SlaveAddressWriteOperation(0b10100000);
	I2C_WriteByte(addr);
	I2C_WriteByte(data);
	I2C_StopCondition();
}
u8 Eeprom24C32_ReadByte(u8 addr)
{
	u8 loc_dataRead=0;
	I2C_StartCondition();
	I2C_Send_SlaveAddressWriteOperation(0b10100000);
	I2C_WriteByte(addr);
	I2C_RepeatedStartCondition();
	I2C_Send_SlaveAddressReadOperation(0b10100000);
	loc_dataRead = I2C_ReadByte();
	I2C_StopCondition();
	return loc_dataRead;
}
