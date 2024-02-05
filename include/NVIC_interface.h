/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: NVIC ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H
#include "NVIC_private.h"
#include "NVIC_config.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"

void MNVIC_voidEnableInterrupt(uint8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt(uint8 Copy_u8IntNumber);
void MNVIC_voidSetPendingFlag(uint8 Copy_u8IntNumber);
void MNVIC_voidClearPendingFlag(uint8 Copy_u8IntNumber);

void MVVIC_voidSetPriorty(uint8 Copy_s8INTID,uint8 Copy_Priority);
#endif //NVIC_INTERFACE_H
