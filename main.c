/************************************
  * main.c
  * Created on: Feb 8, 2021
  * Author: MFawzi
  *********************************/

#include "Dio_Reg.h"
#include "Std_Types.h"
#include "util/delay.h"
#include "Bit_Math.h"
#include "Dio.h"
#include "Lcd.h"
#include "Led.h"
#include "KeyPad.h"
#include <avr/interrupt.h>
#include "Interrupt_Util.h"
#include "Ext_Int.h"

ISR(INT0_vect)
{
	Led_Toggle(LED0);
}
int main(void)
{
	Led_Init();
	ENABLE_GLOBAL_INTERRUPT();
	Ext_Int_Enable(EXT_INT0);
	Ext_Int_Int0Sence(INT0_RISING_EDGE);
	while(1)
		{
			;
		}
}
