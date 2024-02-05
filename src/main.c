/*
 * main.c
 *
 *  Created on: 3 Dec 2023
 *      Author: Mohamed_Eldeeb
 *      Gtihub : https://github.com/jogovhMohamedEldeeb?tab=repositories
 */
#include "GPIO_interface.h"
#include "RCC_interface.h"
//#include "NVIC_interface.h"
//#include "SCB_interface.h"
//#include "EXTI_interface.h"
//#include "AFIO_interface.h"
#include "STK_interface.h"
#include "USART_interface.h"
#include "FLASH_interface.h"

void delay(int w){
	for(int i=0;i<w;i++){
		for(int j=0;j<w;j++){
				asm("NOP");
	}
	}
}

void main(void){


	while(1){

	}
	//return 0;
}



//	MRCC_voidClockInit();
//	MRCC_voidPeripheralClockEnable(RCC_APB2,RCC_GPIOA);
//	MRCC_voidPeripheralClockEnable(RCC_APB2,RCC_USART_1);
//
//	/* TX */
//	MGPIO_voidSetPinMode(PORTA,PIN9,GPIO_AF_OUTPUT_OD_50MHZ);
//	/* RX */
//	MGPIO_voidSetPinMode(PORTA,PIN10, GPIO_INPUT_FLOATING);
//
//	/* LED */
//	MGPIO_voidSetPinMode(PORTA,PIN0,GPIO_GP_OUTPUT_PP_10MHZ);
//
//	MUSART_voidInit();
//	while(1){
//		uint8 x = MUSART_u8Receive_Char();
//		if(x=='5')
//		{
//			MGPIO_voidSetPinValue(PORTA,PIN0,GPIO_HIGH);
//			MUSART_voidSend_u8String((uint8 *) "ON");
//		}
//		else if(x=='r')
//		{
//			MGPIO_voidSetPinValue(PORTA,PIN0,GPIO_LOW);
//			MUSART_voidSend_u8String((uint8 *) "OFF");
//		}
//		else{
//			/* Nothing */
//		}
