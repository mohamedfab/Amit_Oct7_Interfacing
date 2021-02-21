/*
  *main.c
  * Created on: Feb 8, 2021
  *     Author: bhaa
 */
//#define LED0 			2
//#define BUTTON0 		0



#include "Dio_Reg.h"
#include "Std_Types.h"
#include "util//delay.h"
#include "Bit_Math.h"
#include "Dio.h"


int main(void)
{
	/*	configure LED0 pin as output	*/
	Dio_ConfigureChannel (DIO_PORTC,CHANNEL2,OUTPUT);
	/*	configure Button0 pin as input	*/
	Dio_ConfigureChannel (DIO_PORTB,CHANNEL0,INPUT);
	while(1)
	{
		if (Dio_ReadChannel(DIO_PORTB,CHANNEL0))
		{
			/* Turn ON LED0 */
			Dio_WriteChannel(DIO_PORTC,CHANNEL2,STD_HIGH);
		}
		else
		{
			/* Turn OFF LED */
			Dio_WriteChannel(DIO_PORTC,CHANNEL2,STD_LOW);
		}
	}
}
