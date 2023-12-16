


#ifndef		__INTERRUPT__

#define	__INTERRUPT__

#include <stm32f10x.h> 

#include "timer.h" 
#include "servo.h"
#include "function.h" 

typedef struct {
	uint8_t diachi_xoay_huong; 
	uint8_t tocdo_xoay_huong; 
	uint8_t end_xoay_huong;
	uint8_t diachi_ban_bong; 
	uint8_t tocdo_ban_bong; 
	uint8_t end_ban_bong; 
} dc;


extern uint16_t tay_ps; 

extern dc dong_co; 


//extern uint8_t dc_keo[3]; 

 void EXTI3_IRQHandler (void); 
 
 void EXTI4_IRQHandler (void); 
 
 void EXTI9_5_IRQHandler (void); 
	
	void EXTI15_10_IRQHandler (void); 
	
	void USART1_IRQHandler (void);
	
	
	

#endif
