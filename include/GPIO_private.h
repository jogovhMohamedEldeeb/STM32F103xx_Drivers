/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: GPIO ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

#include "BIT_MATH.h"
#include "STD_TYPES.h"

/* Base address of peripherals */
#define GPIOA_BASE_ADDRESS           0x40010800
#define GPIOB_BASE_ADDRESS           0x40010C00
#define GPIOC_BASE_ADDRESS           0x40011000

typedef struct
{
	volatile uint32 CRL;
	volatile uint32 CRH;
	volatile uint32 IDR;
	volatile uint32 ODR;
	volatile uint32 BSRR;
	volatile uint32 BRR;
	volatile uint32 LCKR;
}GPIO_t;

#define GPIOA                        ((GPIO_t*)GPIOA_BASE_ADDRESS)
#define GPIOB                        ((GPIO_t*)GPIOB_BASE_ADDRESS)
#define GPIOC                        ((GPIO_t*)GPIOC_BASE_ADDRESS)

#endif

