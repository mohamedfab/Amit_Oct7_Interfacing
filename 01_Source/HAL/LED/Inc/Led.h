



#ifndef _LED_H_
#define _LED_H_
#define LED0   (0)
#define LED1   (1)
#define LED2   (2)


#include "Dio.h"
void Led_Init(void);
void Led_ON(u8 LedNo);
void Led_OFF(u8 LedNo);
void Led_Toggle(u8 LedNo);


#endif
