/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: EXTI ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/


#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H
#include "EXTI_config.h"
#include "EXTI_private.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/* Line options*/
#define EXTI_LINE0				0
#define EXTI_LINE1				1
#define EXTI_LINE2  			2
#define EXTI_LINE3  			3
#define EXTI_LINE4  			4
#define EXTI_LINE5  			5
#define EXTI_LINE6  			6
#define EXTI_LINE7  			7
#define EXTI_LINE8  			8
#define EXTI_LINE9  			9
#define EXTI_LINE10 			10
#define EXTI_LINE11 			11
#define EXTI_LINE12 			12
#define EXTI_LINE13 			13
#define EXTI_LINE14 			14
#define EXTI_LINE15 			15

/* External Interrupt Modes */
#define FALLING_EDGE			1
#define RISING_EDGE				2
#define	ON_CHANGE				3

/*functons prototypes */
void MEXIT_voidEnableTriggerLine(uint8 Copy_u8EXTILine,uint8 Copy_u8Trigger);
void MEXIT_voidDisableTriggerLine(uint8 Copy_u8EXTILine);

void MEXTI_voidSetCallBack(uint8 Copy_u8EXITn,void (*ptr) (void));
#endif //EXTI_INTERFACE_H
