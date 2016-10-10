//version 1.1
//STM32F1

#include "uart.h"
#include "uart_config.h"


extern cUSART Uart2;

//void USART_IT_FUNCTION()
//{
//	if (USART_GetITStatus(USART1, USART_IT_RXNE) != RESET)
//	{
//		cUsartRxIT(&Uart2);
//	}
//
//	if (USART_GetITStatus(USART1, USART_IT_TC) != RESET)
//	{
//		cUsartTxIT(&Uart2);
//		USART_ClearITPendingBit(USART1, USART_IT_TC);
//	}
//}