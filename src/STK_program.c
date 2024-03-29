/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: STK ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#include "STK_interface.h"


void MSTK_voidInit(void)
{
#if STK_CLK_SRC==STK_SRC_AHB
	SET_BIT(STK->CTRL,2);

#elif STK_CLK_SRC==STK_SRC_AHB_8
	CLEAR_BIT(STK->CTRL,2);
#endif
}

void MSTK_voidSetBusyWait(uint32 Copy_u32Ticks)
{
	/* load ticks to load register */
	STK->LOAD = Copy_u32Ticks;

	/* Enable timer */
	SET_BIT(STK->CTRL,0);

	/* wait to fire count flag */
	while(!(GET_BIT(STK->CTRL,16)));

	STK->VAL = 0;
}
