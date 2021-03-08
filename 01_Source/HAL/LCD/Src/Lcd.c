/****************************************
 * Lcd.c
 *  Created on: Mar 2, 2021
 *  Author: Eng_Fawzi
 *******************************************/
#include "Lcd.h"
u8 customChar[NO_CSTOM_CHAR][NO_CHAR_BYTES]=
{
		{0x0A,0x1F,0x1F,0x1F,0x1F,0x0E,0x04,0x00},	/* Heart symbol	 */
		{0x04,0x1F,0x11,0x11,0x11,0x11,0x11,0x1F},	/* Empty battery */
		{0x04,0x1F,0x11,0x11,0x11,0x11,0x1F,0x1F},	/*	20% battery  */
		{0x04,0x1F,0x11,0x11,0x11,0x1F,0x1F,0x1F},  /*	40% battery  */
		{0x04,0x1F,0x11,0x11,0x1F,0x1F,0x1F,0x1F},	/*	60% battery  */
		{0x04,0x1F,0x11,0x1F,0x1F,0x1F,0x1F,0x1F},	/*	80% battery  */
		{0x04,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F},	/*	100% battery */
		{0x00,0x00,0x01,0x01,0x05,0x05,0x15,0x15},	/*	Mobile Signal*/
};
void Lcd_EnablePulse()
{
	Dio_WriteChannel(DIO_PORTB, CHANNEL3, STD_HIGH);
	_delay_us(1);
	Dio_WriteChannel(DIO_PORTB, CHANNEL3, STD_LOW);
	_delay_ms(2);
}
void Lcd_Write(u8 data)
{
	u8 MSB_Bits=data>>4;
	u8 LSB_Bits=data;
	Dio_WritePort(DIO_PORTA, MSB_Bits<<4, 0xF0);
	Lcd_EnablePulse();
	Dio_WritePort(DIO_PORTA, LSB_Bits<<4, 0xF0);
	Lcd_EnablePulse();
}
void Lcd_Cmd(u8 cmd)
{
	/*	Write to LCD on Command mode	*/
	Dio_WriteChannel(DIO_PORTB, CHANNEL1, STD_LOW);
	Lcd_Write(cmd);
}
void Lcd_DisplayChr(u8 data)
{
	/*	Write to LCD on Data mode	*/
	Dio_WriteChannel(DIO_PORTB, CHANNEL1, STD_HIGH);
	Lcd_Write(data);
}
void Lcd_DisplayStr(u8 *str)
{
	while (*str != '\0')
	{
		Lcd_DisplayChr(*str);
		str++;
	}
}
void Lcd_GotoRowColumn(u8 row,u8 column)
{
	switch (row)
	{
	case 0:
		Lcd_Cmd(0x80+column);
		break;
	case 1:
		Lcd_Cmd(0xC0+column);
		break;
	}
}
void Lcd_WriteCustom(void)
{
	u8 loc_ByteIndex=0;
	u8 loc_CharIndx=0;
	for (loc_CharIndx=0;loc_CharIndx<NO_CSTOM_CHAR;loc_CharIndx++)
	{
		Lcd_Cmd(_LCD_CGRAM_START_ADDRESS +(loc_CharIndx*8));
			for (loc_ByteIndex =0; loc_ByteIndex<NO_CHAR_BYTES;loc_ByteIndex++)
			{
				Lcd_DisplayChr(customChar[loc_CharIndx][loc_ByteIndex]);
			}
	}
}
void Lcd_Init()
{
	/*	configure RS pin as output	*/
	Dio_ConfigureChannel(DIO_PORTB, CHANNEL1, OUTPUT);
	/*	configure RW pin as output	*/
	Dio_ConfigureChannel(DIO_PORTB, CHANNEL2, OUTPUT);
	/*	configure EN pin as output	*/
	Dio_ConfigureChannel(DIO_PORTB, CHANNEL3, OUTPUT);
	/*	configure Data D4..D7 lines as output	*/
	Dio_ConfigurePort(DIO_PORTA, 0xF0, 0xF0);
	/*	Set LCD on Write Mode	*/
	Dio_WriteChannel(DIO_PORTB, CHANNEL2, STD_LOW);

	_delay_ms(15);
	Lcd_Cmd(0x03);
	_delay_ms(5);
	Lcd_Cmd(0x03);
	_delay_us(100);
	Lcd_Cmd(0x03);
	Lcd_Cmd(0x02);
	Lcd_Cmd(0x02);
	Lcd_Cmd(_LCD_4BIT_MODE);
	Lcd_Cmd(_LCD_CLEAR);
}

