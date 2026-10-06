/*
 * UART_Registers.h
 *
 *  Created on: Oct 2, 2026
 *      Author: ADMIN
 */

#ifndef INC_UART_H_
#define INC_UART_H_




#define USART2_BASE 0x40004400

#define USART2_SR_OFFSET 0x00
#define USART2_SR (*(volatile unsigned int*) (USART2_BASE + USART2_SR_OFFSET))

#define USART2_DR_OFFSET 0x04
#define USART2_DR (*(volatile unsigned int*)(USART2_BASE + USART2_DR_OFFSET))

#define USART2_BRR_OFFSET 0x08
#define USART2_BRR (*(volatile unsigned int*)(USART2_BASE + USART2_BRR_OFFSET))

#define USART2_CR1_OFFSET 0x0C
#define USART2_CR1 (*(volatile unsigned int*)(USART2_BASE +USART2_CR1_OFFSET))


void USART2_UART_Init();
void SendDebugMessage(char* msg);

#endif /* INC_UART_H_ */
