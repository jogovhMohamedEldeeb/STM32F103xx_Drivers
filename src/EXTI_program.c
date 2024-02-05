/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: EXTI ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/


#include "EXTI_interface.h"


static void (* EXTI0_CallBack) (void)	  = NULL ;
static void (* EXTI1_CallBack) (void) 	  = NULL ;
static void (* EXTI2_CallBack) (void) 	  = NULL ;
static void (* EXTI3_CallBack) (void)	  = NULL ;
static void (* EXTI4_CallBack) (void)	  = NULL ;
static void (* EXTI9_5_CallBack) (void)   = NULL ;
static void (* EXTI15_10_CallBack) (void) = NULL ;
void MEXIT_voidEnableTriggerLine(uint8 Copy_u8EXTILine,uint8 Copy_u8Trigger)
{
	/* Enable Interrupt*/
	EXTI->IMR |= (1 << Copy_u8EXTILine);
	/* Set trigger point*/
	switch(Copy_u8Trigger){
	case RISING_EDGE:
		EXTI->RTSR |= (1 << Copy_u8EXTILine);
		break;
	case FALLING_EDGE:
		EXTI->FTSR |= (1 << Copy_u8EXTILine);
		break;
	case ON_CHANGE:
		EXTI->RTSR |= (1 << Copy_u8EXTILine);
		EXTI->FTSR |= (1 << Copy_u8EXTILine);
		break;
	default :
		// Error
		break;
	}
}

void MEXIT_voidDisableTriggerLine(uint8 Copy_u8EXTILine)
{
	/* Disable Interrupt*/
	EXTI->IMR &= ~(1 << Copy_u8EXTILine);
}

void MEXTI_voidSetCallBack(uint8 Copy_u8EXITn,void (*ptr) (void))
{
	if(Copy_u8EXITn == EXTI_LINE0)
	{
		EXTI0_CallBack = ptr;
	}
	else if(Copy_u8EXITn == EXTI_LINE1)
	{
		EXTI1_CallBack = ptr;
	}
	else if(Copy_u8EXITn == EXTI_LINE2)
	{
		EXTI2_CallBack = ptr;
	}
	else if(Copy_u8EXITn == EXTI_LINE3)
	{
		EXTI3_CallBack = ptr;
	}
	else if(Copy_u8EXITn == EXTI_LINE4)
	{
		EXTI4_CallBack = ptr;
	}
	else if(Copy_u8EXITn <= EXTI_LINE9)
	{
		EXTI9_5_CallBack = ptr;
	}
	else if(Copy_u8EXITn <= EXTI_LINE15)
	{
	    EXTI15_10_CallBack = ptr;
	}
	else
	{
		/* Nothing */
	}
}
/* Interrupts ISR */
void EXTI0_IRQHandler(void)
{
	EXTI0_CallBack();
}
void EXTI1_IRQHandler(void)
{
	EXTI1_CallBack();
}
void EXTI2_IRQHandler(void)
{
	EXTI2_CallBack();
}
void EXTI3_IRQHandler(void)
{
	EXTI3_CallBack();
}
void EXTI4_IRQHandler(void)
{
	EXTI4_CallBack();
}
void EXTI9_5_IRQHandler(void)
{
	EXTI9_5_CallBack();
}
void EXTI15_10_IRQHandler(void)
{
	EXTI15_10_CallBack();
}
