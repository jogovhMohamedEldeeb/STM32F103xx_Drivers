/*
 * File:   BIT_MATH.h
 * Author: Mohamed_Eldeeb
 */

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "RCC_config.h"
#include "RCC_private.h"


/* Buses Names */
#define RCC_AHB                      0
#define RCC_APB1                     1
#define RCC_APB2                     2


/* Clock Systems */
#define RCC_HSI          0b00
#define RCC_HSE          0b01
#define RCC_PLL          0b10


/* Peripherals Names */
typedef enum
{
	RCC_DMA1,
	RCC_DMA2,
	RCC_SRAM,
	RCC_FLITF=4,
	RCC_CRC=6,
	RCC_FSMC=8,
	RCC_SDIO=10,
	RCC_AFIO=0,
	RCC_GPIOA=2,
	RCC_GPIOB,
	RCC_GPIOC,
	RCC_GPIOD,
	RCC_GPIOE,
	RCC_GPIOF,
	RCC_GPIOG,
	RCC_ADC1,
	RCC_ADC2,
	RCC_TIM1,
	RCC_SPI1,
	RCC_TIM8,
	RCC_USART_1,
	RCC_ADC3,
	RCC_TIM9=19,
	RCC_TIM10,
	RCC_TIM11,
	RCC_TIM2=0,
	RCC_TIM3,
	RCC_TIM4,
	RCC_TIM5,
	RCC_TIM6,
	RCC_TIM7,
	RCC_TIM12,
	RCC_TIM13,
	RCC_TIM14,
	RCC_WWDG=11,
	RCC_SPI2=14,
	RCC_SPI3,
	RCC_USART_2=17,
	RCC_USART_3,
	RCC_UART_4,
	RCC_UART_5,
	RCC_I2C1,
	RCC_I2C2,
	RCC_USB,
	RCC_CAN=25,
	RCC_BKP=27,
	RCC_PWR,
	RCC_DAC

}RCC_Peripheral_t;



/* prototypes of functions */
void MRCC_voidClockInit(void);
void MRCC_voidPeripheralClockEnable(uint8 Copy_u8BusName, RCC_Peripheral_t Copy_u8PeripheralName);
void MRCC_voidPeripheralClockDisable(uint8 Copy_u8BusName, RCC_Peripheral_t Copy_u8PeripheralName);

#endif
