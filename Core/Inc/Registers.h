#ifndef __REGISTERS_H
#define __REGISTERS_H
#include <stdint.h>

#define RCC_BASE              0x40021000

#define RCC_APB2ENR_OFFSET    0x18
#define RCC_APB2ENR          (*(volatile uint32_t*) (RCC_BASE + RCC_APB2ENR_OFFSET))

#define RCC_APB1ENR_OFFSET    0x1C
#define RCC_APB1ENR           (*(volatile uint32_t*)(RCC_BASE + RCC_APB1ENR_OFFSET))

#define GPIOC_BASE           0x40011000

#define GPIOC_CRL_OFFSET     0x00
#define GPIOC_CRL            (*(volatile uint32_t*)(GPIOC_BASE + GPIOC_CRL_OFFSET))

#define GPIOC_CRH_OFFSET     0x04
#define GPIOC_CRH            (*(volatile uint32_t*)(GPIOC_BASE + GPIOC_CRH_OFFSET))

#define GPIOC_ODR_OFFSET     0x0C
#define GPIOC_ODR            (*(volatile uint32_t*)(GPIOC_BASE + GPIOC_ODR_OFFSET))

#define GPIOA_BASE           0x40010800
#define GPIOA_CRL_OFFSET     0x00
#define GPIOA_CRL            (*(volatile uint32_t*)(GPIOA_BASE + GPIOA_CRL_OFFSET))

#define GPIOA_ODR_OFFSET     0x0C
#define GPIOA_ODR            (*(volatile uint32_t*)(GPIOA_BASE + GPIOA_ODR_OFFSET))

#define GPIOA_IDR_OFFSET     0x08
#define GPIOA_IDR            (*(volatile uint32_t*)(GPIOA_BASE + GPIOA_IDR_OFFSET))



#define TIM2_BASE             0x40000000
#define TIM2_CR1_OFFSET       0x00
#define TIM2_CR1              (*(volatile uint32_t*)(TIM2_BASE + TIM2_CR1_OFFSET))

#define TIM2_CNT_OFFSET       0x24
#define TIM2_CNT              (*(volatile uint32_t*)(TIM2_BASE + TIM2_CNT_OFFSET))

#define TIM2_PSC_OFFSET       0x28
#define TIM2_PSC              (*(volatile uint32_t*)(TIM2_BASE + TIM2_PSC_OFFSET))

#define TIM2_ARR_OFFSET       0x2C
#define TIM2_ARR              (*(volatile uint32_t*)(TIM2_BASE + TIM2_ARR_OFFSET))

#define TIM2_CCR1_OFFSET      0x34
#define TIM2_CCR1             (*(volatile uint32_t*)(TIM2_BASE + TIM2_CCR1_OFFSET))

#define TIM2_CCR2_OFFSET      0x38
#define TIM2_CCR2             (*(volatile uint32_t*)(TIM2_BASE + TIM2_CCR2_OFFSET))

#define TIM2_CCR3_OFFSET      0x3C
#define TIM2_CCR3             (*(volatile uint32_t*)(TIM2_BASE + TIM2_CCR3_OFFSET))

#define TIM2_DIER_OFFSET      0x0C
#define TIM2_DIER             (*(volatile uint32_t*)(TIM2_BASE + TIM2_DIER_OFFSET))

#define TIM2_SR_OFFSET        0x10
#define TIM2_SR               (*(volatile uint32_t*)(TIM2_BASE + TIM2_SR_OFFSET))

#define TIM2_EGR_OFFSET       0x14
#define TIM2_EGR              (*(volatile uint32_t*)(TIM2_BASE + TIM2_EGR_OFFSET))   //this register is used for event generation

#define TIM2_CCMR1_OFFSET     0x18
#define TIM2_CCMR1            (*(volatile uint32_t*)(TIM2_BASE + TIM2_CCMR1_OFFSET))

#define TIM2_CCER_OFFSET      0x20
#define TIM2_CCER             (*(volatile uint32_t*)(TIM2_BASE + TIM2_CCER_OFFSET))

#define NVIC_ISER_BASE        0xE000E100  //REFER CORTEX M3 PROGRAMMING MANUAL

#define NVIC_ISER0_OFFSET     0x000
#define NVIC_ISER0           (*(volatile uint32_t*)(NVIC_ISER_BASE + NVIC_ISER0_OFFSET))

#define NVIC_ISER1_OFFSET     0x004
#define NVIC_ISER1           (*(volatile uint32_t*)(NVIC_ISER_BASE + NVIC_ISER1_OFFSET))

#endif
