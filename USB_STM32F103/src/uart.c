//version 1.1
//STM32F1

#include "uart.h"
#include "uart_common.h"
#include "uart_config.h"

cUSART Uart2 =
{
	{ &Uart2Hw },
	0, 0, 0, 0, 0, 0
};
void print(char* c)
{
	cUsartSend(&Uart2, c);
}

void usartSend(uint8_t* buf, uint16_t cnt)
{
	cUsartSendCnt(&Uart2, buf, cnt);
}
	

void UsartInit(void)
{
	cUsartInit(&Uart2);
}

