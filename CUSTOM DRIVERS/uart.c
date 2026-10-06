#include "uart.h"
#include "Registers.h"

 volatile unsigned char TX_Completed = 0;
volatile char *tx_msg;

void USART2_UART_Init(){
	//ENABLE CLOCK FOR UART2
	  RCC_APB1ENR |=(1<<17);
	  RCC_APB2ENR|=(1<<2);
	// SET PA2 AS OUTPUT AND ALTERNATE FUNCTION FOR UART TX
		GPIOA_CRL &= ~(0xF<<8);
		GPIOA_CRL |= (0xB <<8);

		//SET PA3 AS INPUT FOR UART RX
		GPIOA_CRL &= ~(0xF <<12);
		GPIOA_CRL |=(0x4 << 12);

	//SET BAUD RATE 115200
	USART2_BRR = (4 << 4) | 5;
	//SET CONFIGUARTION PARITY,WORD LENGTH etc.
 //   USART2_CR1 |=(1<<5);  //DATA IS READY TO READ AFTER RECEIVE INTERRUPT ENABLE
  // USART2_CR1 |=(1<<6);  //DATA TRANSMISSION COMPLETED INTERRUPT ENABLE

    NVIC_ISER1 |=(1<<6);
  //  USART2_CR1 |=(1<<8);  //PARITY ERROR INTERRUPT ERROR ENABLE

    USART2_CR1 &=~(1<<12);

   //ENABLE UART,RX,TX
    USART2_CR1 |=(1<<13);  //USART2 ENABLE
    USART2_CR1 |=(1<<2);   //RECEIVER ENABLE
    USART2_CR1 |=(1<<3);   //TRANSMITTER ENABLE



}

void USART2_IRQHandler(void)
{
    if (USART2_SR & (1 << 7))       // TXE
    {
        if (*tx_msg != '\0')
        {
            USART2_DR = *tx_msg;
            tx_msg++;
        }
        else
        {
            USART2_CR1 &= ~(1 << 7);    // Disable TXEIE
        }
    }
}



void SendDebugMessage(char* msg){
	tx_msg = msg;
	   USART2_CR1 |=(1<<7);  //TRANSMITTER DATA REGISTER EMPTY INTERRUPT ENABLE

	}

