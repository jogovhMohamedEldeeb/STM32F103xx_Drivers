/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: NVIC ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H
#include "BIT_MATH.h"
#include "STD_TYPES.h"


#define NVIC_BASE_ADRRESS		0xE000E100


/* NVIC Registers */
typedef struct{
	uint32 ISER[3];
	uint32 Reserved0[29];
	uint32 ICER[3];
	uint32 Reserved1[29];
	uint32 ISPR[3];
	uint32 Reserved2[29];
	uint32 ICPR[3];
	uint32 Reserved3[29];
	uint32 IABR[3];
	uint32 Reserved4[61];
	uint8 IPR[84];
	uint32 Reserved5[655];
	uint32 STIR;
}NVIC_t;

/* Pointer to structure to NVIC Registers */
#define NVIC		((volatile NVIC_t*)NVIC_BASE_ADRRESS)

#endif //NVIC_PRIVATE_H
