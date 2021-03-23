/********************************
 * File  	:  Adc.c
 * Date	 	:  Mar 23, 2021
 * Target	:  ATMEGA32
 * Author	:  Eng_Fawzi
 ********************************/
#include "Adc.h"

void adcInit(void)
{
	ADC_ADMUX_REG|=(AVCC5V_REF<<6);
	ADC_ADCSRA_REG=(ADC_ENABLE)|(ADCPS_128);
}
u16 adcRead(u8 chnlNo)
{
    u16 result;
    ADC_ADMUX_REG = (ADC_ADMUX_REG & 0xF8)|(chnlNo);
    ADC_ADCSRA_REG|=(ADC_START_CONVERSION);
 	while(!(GET_BIT(ADC_ADCSRA_REG,ADIF_BIT_NO)))
 		  {
 		  	  /*	Do Nothing	*/
 		  	  	  ;
 		  }
 	 ADC_ADCSRA_REG|=(1<<ADIF_BIT_NO);
    result=(ADC_ADCL_REG|(ADC_ADCH_REG<<8));
 	return result;
}
