/**
 * @file main.h
 * @author Merlin Kooshmanian
 * @brief 
 * @version 0.1
 * @date 31/12/2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __MAIN_H
#define __MAIN_H

/***************************** Include Files *********************************/

#include "stm32f4xx_hal.h"

/************************** Constant Definitions *****************************/

#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/**************************** Type Definitions *******************************/

/************************** Function Prototypes ******************************/

int main(void);

#endif /* __MAIN_H */