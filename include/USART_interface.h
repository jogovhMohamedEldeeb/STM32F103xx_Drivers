/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: USART ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/


#ifndef USART_INTERFACE_H
#define USART_INTERFACE_H
#include "USART_private.h"
#include "USART_config.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#define USART_ENABLE							1
#define USART_DISABLE							0

/* USART word Length */

#define USART_8_BIT_WORD					 	0
#define USART_9_BIT_WORD					 	1


/* configure TX */
#define USART_TX_ENABLE							1
#define USART_TX_DISABLE						0

/* configure RX */
#define USART_RX_ENABLE							1
#define USART_RX_DISABLE						0


/* USART Stop Bits */

#define USART_1_STOP_BIT               	       	 0
#define USART_0_5_STOP_BIT               	     1
#define USART_2_STOP_BIT                    	 2
#define USART_1_5_STOP_BIT                  	 3

/* USART Flags */
#define RXNE									 5
#define TC										 6

void MUSART_voidInit(void);
void MUSART_voidSend_u8Char(uint8 Copy_u8Char);
uint8 MUSART_u8Receive_Char(void);

void MUSART_voidSend_u8String(uint8* Copy_ptrString);
uint8 MUSART_u8Receive_u8String(void);

#endif //USART_INTERFACE_H
