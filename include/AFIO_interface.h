/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: AFIO ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/


#ifndef AFIO_INTERFACE_H
#define AFIO_INTERFACE_H
#include "AFIO_private.h"
#include "AFIO_config.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"


/* Line option */
#define EXTI0 	 	0
#define EXTI1  		1
#define EXTI2  		2
#define EXTI3  		3

#define EXTI4  		4
#define EXTI5  		5
#define EXTI6  		6
#define EXTI7  		7

#define EXTI8  		8
#define EXTI9  		9
#define EXTI10 		10
#define EXTI11 		11

#define EXTI12 		12
#define EXTI13 		13
#define EXTI14 		14
#define EXTI15 		15



void MAFIO_voidSetEXTIConfiguration(uint8 Copy_u8EXTILine ,uint8 Copy_u8Port);

#endif //AFIO_INTERFACE_H
