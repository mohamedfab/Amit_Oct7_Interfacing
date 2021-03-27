/********************************
 * File  	:  Timer0_Cfg.h
 * Date	 	:  Mar 23, 2021
 * Target	:  ATMEGA32
 * Author	:  Eng_Fawzi
 ********************************/
#ifndef TIMER0_CFG_H_
#define TIMER0_CFG_H_

#define TIMER0_MODE_NONE            		(0)
#define TIMER0_MODE_INTERVAL             	(1)
#define TIMER0_MODE_CTC          			(2)
#define TIMER0_MODE_FAST_PWM        		(3)
#define TIMER0_MODE_PWM_PHASE_CORRECT		(4)

/************************************************************
 * 			TIMER0 OPERATION MODES							*
 ************************************************************/
/*
 * TIMER0_MODE_INTERVAL
 * TIMER0_MODE_CTC
 * TIMER0_MODE_FAST_PWM
 * TIMER0_MODE_PWM_PHASE_CORRECT
 */
#define TIMER_OPERATION_MODE 	TIMER0_MODE_INTERVAL

#define TIMER0_NO_OF_TICKS		(10)
#endif /* 01_SOURCE_MCAL_TIMER0_INC_TIMER0_CFG_H_ */
