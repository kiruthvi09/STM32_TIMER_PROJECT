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
#define RCC_BASE              0x40021000
#define RCC_APB2ENR_OFFSET    0x18
#define RCC_APB2ENR          (*(volatile uint32_t*) (RCC_BASE + RCC_APB2ENR_OFFSET))

#define RCC_APB1ENR_OFFSET    0x1C
#define RCC_APB1ENR           (*(volatile uint32_t*)(RCC_BASE + RCC_APB1ENR_OFFSET))

#define GPIOC_BASE           0x40011000
#define GPIOC_CRL_OFFSET     0x00
#define GPIOC_CRL            (*(volatile uint32_t*)(GPIOC_BASE + GPIOC_CRH_OFFSET))

#define GPIOC_CRH_OFFSET     0x04
#define GPIOC_CRH            (*(volatile uint32_t*)(GPIOC_BASE + GPIOC_CRH_OFFSET))

#define GPIOC_ODR_OFFSET     0x0C
#define GPIOC_ODR            (*(volatile uint32_t*)(GPIOC_BASE + GPIOC_ODR_OFFSET))

#define GPIOA_BASE           0x40010800
#define GPIOA_CRL_OFFSET            0x00
#define GPIOA_CRL            (*(volatile uint32_t*)(GPIOA_BASE + GPIOA_CRL_OFFSET))


#define TIM2_BASE             0x40000000
#define TIM2_CR1_OFFSET       0x00
#define TIM2_CR1              (*(volatile unsigned int*)(TIM2_BASE + TIM2_CR1_OFFSET))

#define TIM2_CNT_OFFSET       0x24
#define TIM2_CNT              (*(volatile unsigned int*)(TIM2_BASE + TIM2_CNT_OFFSET))

#define TIM2_PSC_OFFSET       0x28
#define TIM2_PSC              (*(volatile unsigned int*)(TIM2_BASE + TIM2_PSC_OFFSET))

#define TIM2_ARR_OFFSET       0x2C
#define TIM2_ARR              (*(volatile unsigned int*)(TIM2_BASE + TIM2_ARR_OFFSET))

#define TIM2_DIER_OFFSET      0x0C
#define TIM2_DIER             (*(volatile unsigned int*)(TIM2_BASE + TIM2_DIER_OFFSET))

#define TIM2_SR_OFFSET        0x10
#define TIM2_SR               (*(volatile unsigned int*)(TIM2_BASE + TIM2_SR_OFFSET))

#define NVIC_ISER0            (*(volatile unsigned int*)(0xE000E100))  //REFER CORTEX M3 PROGRAMMING MANUAL

void TIM2_Init();
void TIM2_IRQHandler(void);

#endif /* INC_TIMER_H_ */
