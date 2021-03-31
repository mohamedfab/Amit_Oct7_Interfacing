 /***********************************************
 *  File		: Spi_Cfg.h
 *	Module		: SPI
 *	Target		: ATMEGA32
 *	Author		: mFawzi
 *  Description	:
 *************************************************/
#ifndef SPI_CFG_H
#define SPI_CFG_H

#include "Std_Types.h"

#define SPI_SS_PORT       	(DIO_PORTB)
#define SPI_SS_CHANNEL		(CHANNEL4)
#define SPI_MOSI_PORT       (DIO_PORTB)
#define SPI_MOSI_CHANNEL	(CHANNEL5)
#define SPI_MISO_PORT       (DIO_PORTB)
#define SPI_MISO_CHANNEL	(CHANNEL6)
#define SPI_SCK_PORT       	(DIO_PORTB)
#define SPI_SCK_CHANNEL		(CHANNEL7)


void Spi_Init(u16 baudRate);
void Spi_TransmitChr(u8 data);
void Spi_TransmitStr(u8 *str);
u8 Spi_ReceiveChr(void);
#endif  /* UART_H */
