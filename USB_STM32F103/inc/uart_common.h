//version 1.1
//STM32F1

#pragma once

#ifndef __UART_COMMON_H
#define __UART_COMMON_H

#define USART_RX_BUFFER_SIZE 256
#define USART_TX_BUFFER_SIZE 256

#include "uart_hw.h"


#ifdef __cplusplus
extern "C" {
#endif
	
	
typedef struct _cUSART
{
	tUSART* hw;
	uint8_t rxBuffer[USART_RX_BUFFER_SIZE];
	uint8_t txBuffer[USART_TX_BUFFER_SIZE];
	uint16_t rxIndex;
	uint16_t txGetIndex;
	uint16_t txPutIndex;
	uint16_t rxCounter;		//0 - je�li bufor pusty, 1 - je�li odebrano znak ko�ca linii
} cUSART;


	void cUsartSend(cUSART* usart, char* c);
	void cUsartSendCnt(cUSART *usart, uint8_t* c, uint16_t cnt); //wysyla cnt bajtow
	void cUsartInit(cUSART* usart);
	void cUsartTxIT(cUSART* usart);
	void cUsartRxIT(cUSART* usart);
	void cUsartProcessData(cUSART* usart);
	

#ifdef __cplusplus
}
#endif


#endif