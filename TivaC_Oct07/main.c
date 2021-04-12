
/**
 * main.c
 */
#include "Dio.h"

void delay(void)
{
    u32 delay=0;
    for (delay =0;delay<300000;delay++)
    {
        ;
    }

}
void main(void)
{
    Dio_EnableClock(DIO_PORTF);
    GPIO_GPIOFLOCK_REG = 0x4C4F434B;
    GPIO_GPIOFCR_REG = 0x1F;
    GPIO_GPIOFAFSEL_REG=0x00;
    GPIO_GPIOFAMSEL_REG=0x00;
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
