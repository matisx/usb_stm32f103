//version 1.1
//STM32F1

#pragma once

#ifndef __USART_HW_H
#define __USART_HW_H


#include "hw.h"

#ifdef __cplusplus
extern "C" {
#endif

#define USART_RCC_ENABLE RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
#define USART_IT_FUNCTION USART1_IRQHandler

	//PB6 USART1 TX
	//PB7 USART1 RX

static tUSART Uart2Hw = 
{
	{ USART1 },
	{ 9600 },
	{ GPIOA, GPIO_Pin_10, GPIO_PinSource10, GPIO_Remap_USART1 }, //Rx
	{ GPIOA, GPIO_Pin_10, GPIO_PinSource10, GPIO_Remap_USART1 }, //Tx
	{ USART1_IRQn }
};



#ifdef __cplusplus
}
#endif


#endif 