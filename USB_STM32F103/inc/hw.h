#pragma once

#ifndef __HW_H
#define __HW_H


//#define STM32_HEADER_PIN_BOARD


#include "stm32f10x_conf.h"
#include "stm32f10x_usart.h"
#include "misc.h" 

#ifdef __cplusplus
extern "C" {
#endif

	




typedef struct t_GPIO
	{
	GPIO_TypeDef*	GPIOx;
	uint16_t		GPIO_Pin;
	} tGPIO;

typedef struct t_GPIO_AF
	{
	tGPIO	GPIO;
	uint16_t		GPIO_PinSource;
	uint32_t			GPIO_AF;
	} tGPIO_AF;

typedef struct t_EXTI
	{
	uint32_t EXTI_Line;
	uint8_t EXTI_PortSourceGPIOx;
	uint8_t EXTI_PinSourcex;
	IRQn_Type NVIC_IRQChannel;
	} tEXTI;

typedef struct t_USART
{
	USART_TypeDef*   USARTx;
	uint32_t baudrate;
	tGPIO_AF	GPIO_Rx;
	tGPIO_AF	GPIO_Tx;
	IRQn_Type NVIC_IRQChannel;
} tUSART;


typedef struct t_Timer
{
	uint8_t timerIRQChannel;// = TIM2_IRQn;
	TIM_TypeDef* timer;	// = TIM2;
	uint32_t frequency;	//czêstotliwoœc taktowania timera
	uint32_t prescaler;	//wpisana zostanie wartoœæ prescaler-1 (dla 8Mhz nale¿y podaæ 8 aby uzyskaæ 1Mhz)
	uint32_t period;	//60*period musi byæ < 0xFFFFFFFF
} tTimer;


	void GpioSet(tGPIO gpio);
	void GpioReset(tGPIO gpio);
	uint8_t GpioRead(tGPIO gpio);


#ifdef __cplusplus
}
#endif


#endif 