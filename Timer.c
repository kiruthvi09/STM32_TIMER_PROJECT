#include "Timer.h"
 extern volatile uint8_t IT_FLAG ;
 extern volatile uint32_t count;
 extern volatile uint8_t togglecount;
 extern volatile uint32_t MotorCount;
 extern volatile uint8_t Motor_Flag;
 extern volatile uint32_t sensorCount;
 extern volatile uint8_t sensor_Flag;

void TIM2_IRQHandler(void){
	count++;
	MotorCount++;
	sensorCount++;
	TIM2_SR &= ~(1<<0);
	if(count >= 100){
		IT_FLAG=1;
		count =0;
	}

	if(MotorCount >= 1000){
		Motor_Flag =1;

		MotorCount=0;
	}

	if(sensorCount >=10){  //10ms ONCE READ SENSOR
		sensor_Flag =1;
		sensorCount=0;
	}
}


void TIM2_Init(){
	//ENABLE TIM2 CLOCK
	RCC_APB1ENR |= (1<<0); // SET THE BIT

	//TIMER CONFIG
	TIM2_PSC = 7;  //PRESCALER VALUE SET TO 71 BECAUSE WE NEED 1us TICK.
	TIM2_ARR = 9999;  //FOR 10ms
	TIM2_CR1 |=(1<<0); //ENABLE THE COUNTER FOR TIM2
	TIM2_DIER |=(1<<0);//Enable interrupt
	// Enable NVIC interrupt for TIM2

	NVIC_ISER0 |= (1<<28);  //bit 28 REFER RM0008 in verctor table for interrupts under NVIC
}
