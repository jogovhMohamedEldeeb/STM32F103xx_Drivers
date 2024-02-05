/***************************************************************************************/
/***************************************************************************************/
/************************* Author: Mohamed_Eldeeb **************************************/
/************************* Layer: MCAL *************************************************/
/************************* SWC: GPIO ***************************************************/
/************************* Version: 1.0 ************************************************/
/***************************************************************************************/
/***************************************************************************************/

#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#include "GPIO_config.h"
#include "GPIO_private.h"
#include "BIT_MATH.h"
#include  "STD_TYPES.h"

/* PORTS definitions */
#define PORTA      0
#define PORTB      1
#define PORTC      2

/* Values definitions */
#define GPIO_HIGH             1
#define GPIO_LOW              0


/* PINS definitions */
#define  PIN0       0
#define  PIN1       1
#define  PIN2       2
#define  PIN3       3
#define  PIN4       4
#define  PIN5       5
#define  PIN6       6
#define  PIN7       7
#define  PIN8       8
#define  PIN9       9
#define  PIN10      10
#define  PIN11      11
#define  PIN12      12
#define  PIN13      13
#define  PIN14      14
#define  PIN15      15


/* Modes Definitions */
											/*config + mode*/
#define GPIO_GP_OUTPUT_PP_2MHZ                  0b0010
#define GPIO_GP_OUTPUT_PP_10MHZ                 0b0001
#define GPIO_GP_OUTPUT_PP_50MHZ                 0b0011

#define GPIO_GP_OUTPUT_OD_2MHZ                  0b0110
#define GPIO_GP_OUTPUT_OD_10MHZ                 0b0101
#define GPIO_GP_OUTPUT_OD_50MHZ                 0b0111

#define GPIO_AF_OUTPUT_PP_2MHZ                  0b1010
#define GPIO_AF_OUTPUT_PP_10MHZ                 0b1001
#define GPIO_AF_OUTPUT_PP_50MHZ                 0b1011

#define GPIO_AF_OUTPUT_OD_2MHZ                  0b1110
#define GPIO_AF_OUTPUT_OD_10MHZ                 0b1101
#define GPIO_AF_OUTPUT_OD_50MHZ                 0b1111

#define GPIO_INPUT_ANALOG                       0b0000
#define GPIO_INPUT_FLOATING                     0b0100
#define GPIO_INPUT_PU_PD                        0b1000



/* prototypes of functions */
void MGPIO_voidSetPinMode(uint8 Copy_u8Port,uint8 Copy_u8Pin,uint8 Copy_u8Mode);
void MGPIO_voidSetPinValue(uint8 Copy_u8Port,uint8 Copy_u8Pin,uint8 Copy_u8Value);
uint8 MGPIO_u8GetPinValue(uint8 Copy_u8Port,uint8 Copy_u8Pin);

#endif //GPIO_INTERFACE_H
