#include <stdint.h>
#include <stdio.h>
#include "Timer.h"
#include "uart.h"
#include "Registers.h"

#define RESET 0
#define SET   1

void GPIO_Init();




 volatile uint8_t IT_FLAG = 0;
 volatile uint32_t count =0;
 volatile uint8_t togglecount =0;
 volatile uint32_t MotorCount=0;
 volatile uint8_t Motor_Flag=0;
 volatile uint32_t sensorCount=0;
 volatile uint8_t sensor_Flag=0;

 int main(){

	 GPIO_Init();
	 TIM2_Init();
	 USART2_UART_Init();
   SendDebugMessage("Hi");
	 while(1){

		 if(IT_FLAG == SET){
			 IT_FLAG =0;
			 GPIOC_ODR ^= (1<<13);
		 }

		 if(Motor_Flag == SET){
			 Motor_Flag=0;

			 togglecount++;
			 if(togglecount == 1){
				 SendDebugMessage("\nMotor Turned ON");
				 GPIOC_ODR |=(1<<14);
				 GPIOC_ODR &= ~(1<<15);

			 }
			 else
			 {
				 SendDebugMessage("\nMotor Turned OFF");
				 GPIOC_ODR &=~(1<<14);
				 GPIOC_ODR &= ~(1<<15);
				 togglecount=0;
			 }

		 }

		 if(sensor_Flag == SET){
			 sensor_Flag = 0;
			  if((GPIOA_IDR & (1<<0)) == RESET){
				  SendDebugMessage("hi");
			  }
			  else SendDebugMessage("bye");
		 }

	 }
 }

 void GPIO_Init(){

 	//ENABLE PORTC CLOCK
 	RCC_APB2ENR |= (1<<4);
     RCC_APB2ENR |= (1<<2);//CLOCK PORTA

 	// SET PIN MODE & CONFIG
 	GPIOC_CRH |=(2<<20);// SET OUTPUT MODE @2MHZ '010'-DECIMAL 2
 	GPIOC_CRH |=(0<<22);//SET CONFG GENERAL PURPOSE PUSH-PULL '00'-DECIMAL 0

 	//SET MOTOR PIN MODE & CONFIG
 	//In1
 	GPIOC_CRH |=(2<<24);
 	GPIOC_CRH |=(0<<26);

 	//IN2
 	GPIOC_CRH |=(2<<28);
 	GPIOC_CRH |=(0<<30);

 	GPIOC_ODR &=~(1<<14);
 	GPIOC_ODR &= ~(1<<15);

 	GPIOC_CRL |=(2<< 2 );  // input COnfig
 	GPIOC_CRL |=(0 << 0);  //input mode
 }

