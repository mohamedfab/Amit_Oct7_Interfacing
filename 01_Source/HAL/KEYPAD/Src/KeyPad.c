/****************************************
 * Lcd.c
 *  Created on: Mar 2, 2021
 *  Author: Eng_Fawzi
 *******************************************/
#include "KeyPad.h"

u8 keys_value[4][4]=
{
		{'1','2','3','A'},
		{'4','5','6','B'},
		{'7','8','9','C'},
		{'F','0','E','D'}
};
void KeyPad_Init(void)
{
		/*	configure Rows channels as output	*/
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_ROW1_CHANNEL, OUTPUT);
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_ROW2_CHANNEL, OUTPUT);
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_ROW3_CHANNEL, OUTPUT);
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_ROW4_CHANNEL, OUTPUT);
		/*	configure Columns channels as output	*/
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_COL1_CHANNEL, INPUT);
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_COL2_CHANNEL, INPUT);
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_COL3_CHANNEL, INPUT);
	Dio_ConfigureChannel(KEYPAD_PORT, KEYPAD_COL4_CHANNEL, INPUT);
		/*	set all output channels as value HIGH	*/
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW1_CHANNEL, STD_HIGH);
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW2_CHANNEL, STD_HIGH);
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW3_CHANNEL, STD_HIGH);
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW4_CHANNEL, STD_HIGH);
		/*	enable pull up resistor for input channels	*/
	Dio_EnablePullUp(KEYPAD_PORT, KEYPAD_COL1_CHANNEL);
	Dio_EnablePullUp(KEYPAD_PORT, KEYPAD_COL2_CHANNEL);
	Dio_EnablePullUp(KEYPAD_PORT, KEYPAD_COL3_CHANNEL);
	Dio_EnablePullUp(KEYPAD_PORT, KEYPAD_COL4_CHANNEL);
}
void KeyPad_SelectRow(u8 row)
{
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW1_CHANNEL, STD_HIGH);
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW2_CHANNEL, STD_HIGH);
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW3_CHANNEL, STD_HIGH);
	Dio_WriteChannel(KEYPAD_PORT, KEYPAD_ROW4_CHANNEL, STD_HIGH);

	Dio_WriteChannel(KEYPAD_PORT, row, STD_LOW);
}
u8 KeyPad_Scan(void)
{
	u8 row , col ;
	for (row=0 ; row<4 ; row++)
	{
		KeyPad_SelectRow(row);
		for (col=0 ; col<4 ; col++)
		{
			if(Dio_ReadChannel(KEYPAD_PORT , col) == 0 )
			{
				return keys_value[row][col];
			}
		}
	}
	return 0 ;
}
