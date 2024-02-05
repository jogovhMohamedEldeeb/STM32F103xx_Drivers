/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: AFIO ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#include "AFIO_interface.h"



void MAFIO_voidSetEXTIConfiguration(uint8 Copy_u8EXTILine ,uint8 Copy_u8Port)
{
	if(Copy_u8EXTILine <= 3)
	{
		AFIO->EXTICR[0] &= ~(0b1111 << (Copy_u8EXTILine * 4));
		AFIO->EXTICR[0] |= (Copy_u8Port << (Copy_u8EXTILine * 4));
	}
	else if(Copy_u8EXTILine <= 7)
	{
		AFIO->EXTICR[1] &= ~(0b1111 << (Copy_u8EXTILine - 4) * 4);
		AFIO->EXTICR[1] |= (Copy_u8Port << (Copy_u8EXTILine - 4) * 4);
	}
	else if(Copy_u8EXTILine <= 11)
	{
		AFIO->EXTICR[2] &= ~(0b1111 << (Copy_u8EXTILine - 8) * 4);
		AFIO->EXTICR[2] |= (Copy_u8Port << (Copy_u8EXTILine - 8) * 4);
	}
	else if(Copy_u8EXTILine <= 11)
	{
		AFIO->EXTICR[3] &= ~(0b1111 << (Copy_u8EXTILine - 12) * 4);
		AFIO->EXTICR[3] |= (Copy_u8Port << (Copy_u8EXTILine - 12) * 4);
	}
	else
	{
		/* Nothing */
	}
}
