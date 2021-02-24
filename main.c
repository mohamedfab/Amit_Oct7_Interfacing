/*
  * main.c
  * Created on: Feb 8, 2021
  * Author: bhaa
  */

#include "Dio_Reg.h"
#include "Std_Types.h"
#include "util/delay.h"
#include "Bit_Math.h"
#include "Dio.h"
#include "SSD.h"

int main(void)
{
	SSD_Init();
	while(1)
	{
		SSD_DisplayNum(75);
	}
}
