/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: USART ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#include "USART_interface.h"


void MUSART_voidInit(void)
{
	uint64 Local_Fractional = 0;
	uint64 Local_Mantissa = 0;

	/* Enable USART */
	SET_BIT(USART1->CR[0],13);
	//USART1->CR[0] |= (USART_ENABLE << 13);
	/* Set Word length ==> 8-bit */
	SET_BIT(USART1->CR[0],8);
	//USART1->CR[0] |= (USART_8_BIT_WORD << 12);
	/* Enable Transmitter */
	SET_BIT(USART1->CR[0],3);
	//USART1->CR[0] |= (USART_TX_ENABLE << 3);
	/* Enable Receiver */
	SET_BIT(USART1->CR[0],2);
	//USART1->CR[0] |= (USART_RX_ENABLE << 2);
	/* set parity ==> 1-bit */
	//USART1-> CR[1] |= (USART_STOP_BIT <<12);

	/* baudrate Calculation ==> baudrate = ((FCLK) / (16 * UASRTDIV)) */
	Local_Mantissa = ( (Local_Fractional) / (USART_BAUD_RATE) );
	Local_Fractional   = ((uint64)Local_Mantissa - (uint32)Local_Mantissa);
	USART1->BRR = ((Local_Mantissa << 4) | (Local_Fractional));

}

void MUSART_voidSend_u8Char(uint8 Copy_u8Char)
{
	USART1->DR = Copy_u8Char;
	while(!(GET_BIT(USART1->SR,TC)));
	/* clear flag */
	CLEAR_BIT(USART1->SR,TC);
}

uint8 MUSART_u8Receive_Char(void)
{
	uint8 Read_Data = 0;
	while(!(GET_BIT(USART1->SR,RXNE)));
	Read_Data = USART1->DR;
	/* clear flag */
	CLEAR_BIT(USART1->SR,RXNE);
	return Read_Data;
}

void MUSART_voidSend_u8String(uint8* Copy_ptrString)
{
	uint8 Local_counter = 0;

	while(Copy_ptrString[Local_counter] != '\0')
	{
		MUSART_voidSend_u8Char(Copy_ptrString[Local_counter]);
		Local_counter++;
	}
}

uint8 MUSART_u8Receive_u8String(void)
{
	uint8 Local_counter = 0;
	uint8 *local_ptrString ;

	while(local_ptrString[Local_counter] != '\0')
	{
		local_ptrString[Local_counter] = MUSART_u8Receive_Char();
		Local_counter++;
	}
	return local_ptrString;
}

