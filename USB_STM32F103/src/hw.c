#include "hw.h"

inline void GpioSet(tGPIO gpio)
	{
		GPIO_SetBits(gpio.GPIOx, gpio.GPIO_Pin);
	}

inline void GpioReset(tGPIO gpio)
	{
		GPIO_ResetBits(gpio.GPIOx, gpio.GPIO_Pin);
	}
inline uint8_t GpioRead(tGPIO gpio)
	{
	return GPIO_ReadInputDataBit(gpio.GPIOx, gpio.GPIO_Pin);
	}
