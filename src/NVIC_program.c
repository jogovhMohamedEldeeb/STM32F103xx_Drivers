/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: NVIC ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#include "NVIC_interface.h"


void MNVIC_voidEnableInterrupt(uint8 Copy_u8IntNumber)
{
	/* every 32-bit used to enable one interrupt, so ISER0 used to control first 32-bit of interrupt  */
	/*select register ISER0,ISER1,ISER2*/
	/*select i need bit in register*/
	NVIC->ISER[Copy_u8IntNumber / 32] = (1 << (Copy_u8IntNumber % 32));
}

void MNVIC_voidDisableInterrupt (uint8 Copy_u8IntNumber)
{
	NVIC->ICER[Copy_u8IntNumber / 32] = (1 << (Copy_u8IntNumber % 32));
}

void MNVIC_voidSetPendingFlag(uint8 Copy_u8IntNumber)
{
	NVIC->ISPR[Copy_u8IntNumber / 32] = (1 << (Copy_u8IntNumber % 32));
}

void MNVIC_voidClearPendingFlag(uint8 Copy_u8IntNumber)
{
	NVIC->ICPR[Copy_u8IntNumber / 32] = (1 << (Copy_u8IntNumber % 32));
}


void MVVIC_voidSetPriorty(uint8 Copy_s8INTID,uint8 Copy_Priority)
{
	if(Copy_s8INTID < 60)
	{
		NVIC->IPR[Copy_s8INTID] = Copy_Priority;
	}
	else
	{
		/* return error */
	}
}
