/*
 * Timer.h
 *
 *  Created on: Oct 5, 2026
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_


// Peripheral Memory Map Definitions

//For RCC Clock enable for timer and PortC
#include <stdint.h>

void TIM2_Init();
void TIM2_IRQHandler(void);

#endif /* INC_TIMER_H_ */
