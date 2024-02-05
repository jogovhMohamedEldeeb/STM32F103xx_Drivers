/*
 * File:   BIT_MATH.h
 * Author: Mohamed_Eldeeb
 */

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#define FLASH_ACR       (*((volatile uint32*)0x40022000))

/* Registers definitions */
#define 		RCC_BASE_ADDRESS        0x40021000


typedef struct
{
	uint32 CR;
	uint32 CFGR;
	uint32 CIR;
	uint32 APB2RSTR;
	uint32 APB1RSTR;
	uint32 AHBENR;
	uint32 APB2ENR;
	uint32 APB1ENR;
	uint32 BDCR;
	uint32 CSR;
}RCC_t;

#define 		RCC              		((volatile RCC_t*)RCC_BASE_ADDRESS)

#endif
