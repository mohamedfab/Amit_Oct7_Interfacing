
/**
 * main.c
 */
#include "Dio.h"

void delay(void)
{
    u32 delay=0;
    for (delay =0;delay<500000;delay++)
    {
        ;
    }

}
void main(void)

 {
    Dio_EnableClock(DIO_PORTF);
    Dio_EnableDigitalChannel(DIO_PORTF,DIO_CHANNEL3);
    Dio_ConfigureChannel(DIO_PORTF, DIO_CHANNEL3, OUTPUT);
    while (1)
    {
        Dio_WriteChannel(DIO_PORTF, DIO_CHANNEL3, HIGH);
        delay();
        Dio_WriteChannel(DIO_PORTF, DIO_CHANNEL3, LOW);
        delay();
    }
}
///* p2_1.c Toggling LEDs in C using registers by addresses */
///* This program toggles all three LEDs for 0.5 second ON and 0.5 second OFF.*/
///*PF1 - red LED
//PF2 - blue LED
//PF3 - green LED
//They are high active (a '1' turns ON the LED).*/
///* PORTF data register */
//#define PORTFDAT (*((volatile unsigned int*)0x400253FC))
///* PORTF data direction register */
//#define PORTFDIR (*((volatile unsigned int*)0x40025400))
///* PORTF digital enable register */
//#define PORTFDEN (*((volatile unsigned int*)0x4002551C))
///* run mode clock gating register */
//#define RCGCGPIO (*((volatile unsigned int*)0x400FE608))
///* coprocessor access control register */
//#define SCB_CPAC (*((volatile unsigned int*)0xE000ED88))
//void delayMs(int n); /* function prototype for delay */
//int main(void)
//{
///* enable clock to GPIOF at clock gating register */
//RCGCGPIO |= 0x20;
///* set PORTF pin3-1 as output pins */
//PORTFDIR = 0x0E;
///* set PORTF pin3-1 as digital pins */
//PORTFDEN = 0x0E;
//
//while(1)
//{
///* write PORTF to turn on all LEDs */
//PORTFDAT = 0x0E;
//delayMs(500);
///* write PORTF to turn off all LEDs */
//PORTFDAT = 0;
//delayMs(500);
//}
//}
///* delay n milliseconds (16 MHz CPU clock) */
//void delayMs(int n)
//{
//int i, j;
//for(i = 0 ; i < n; i++)
//for(j = 0; j < 3180; j++)
//{} /* do nothing for 1 ms */
//}
///* This function is called by the startup assembly code to perform system specific
//initialization tasks. */
//void SystemInit(void)
//{
///* Grant coprocessor access*/
///* This is required since TM4C123G has a floating point coprocessor */
//SCB_CPAC |= 0x00F00000;
//}
