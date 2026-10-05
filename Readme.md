#STM32 TIMER PROJECT 

#AIM
To learn about the timer peripherals,Interrupts and develop a simple software scheduler with the Timer 

  #CONCEPTS LEARNED
   *Prescaler
  *ARR
  *Polling
  *NVIC TIM Interrupt
  *Understanding Reference Manual
  *Software Timer
  *Polling
  *Multiple Software Timer
  
  #CLOCK CONFIGURATIONS
  *Clock Frequency = 8MHZ
  
  *Prescaler = 7
  
  *ARR = 9999
  
  *Timer Tick = 1us
  
  *Update Event = 10ms
  
  * 100 Update Events = 1seconds.
  
  #BUGS FOUND
   Bug 1: Initially the LED was not blinking or blinking fast. 
   Possible Causes:   
          1.Setting Prescaler value and ARR Value after ENABLING TIMER,instead before Enabling Timer.
          2.Not clearing the UIF Register after the Interrupt occurence inside ISR.
		  3.Not setting the UIE Register Enable,Thus no interrupts occur.
  
   ##Solution:
       1. Enabled the timer after the setting PSC and ARR value.
       2.Clearing UIF flag and setting UIE register.	   

  Bug 2: The LED is not blinking at exact 1 seconds or delayed
   ##Possible Causes:
          1.Improper Prescaler and ARR value.
		  2.Considering clock frequency as 72MHZ without Intializing PLL of RCC.(without PLL,The clock frequency is 8 MHz) 
		  
  ##Solution:
         1.Recheck the ARR and PSC Value .
		 2.Change the PSC = 7 for 8MHz.
    		 
  *FLAG RESET 
  #Check all Flags initializtion,usage and clearence.