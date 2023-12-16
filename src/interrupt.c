
#include "interrupt.h"

// cb chu U 1 : PB5
// cb chu U 2 : 

void EXTI3_IRQHandler (void) {
	
	if(EXTI->PR & 1<<3) {
		
		EXTI->PR |= 1<<3;
	}
	
}

void EXTI4_IRQHandler (void) {
	// A8, A11, A12, B8
	// 1 : A12 -- 2 : A11 -- 3 : A8 -- 4 : B8 
	
	if(EXTI->PR & 1<<4) {

		EXTI->PR |= 1<<4; 

	}
	
}

void EXTI9_5_IRQHandler (void) {
	
	if(EXTI->PR & 1<<5) {
	
		EXTI->PR |= 1<<5;

	}
}


void EXTI15_10_IRQHandler (void) {
	if(EXTI->PR & 1<<15) {
		delayUs(50000); 
		khoa_dc_pid(1); 
		USART1->CR1 |= 1<<5;
		EXTI->PR |= 1<<15;
	}
	
}


void USART1_IRQHandler (void) {
	
	if(USART1->SR & (1<<5)) {
		tay_ps = USART1->DR; 
		
		if(tay_ps == 'a') {
			day_tay_gap(); 
			delayUs(1000000); 
			USART1->DR = 'a'; 
		}
		
		if(tay_ps == 'b') {
			thu_tay_gap(); 
			USART1->DR = 'b'; 
		}
		
		if(tay_ps == 'c') {
			day_tay_gap(); 
			delayUs(1000000); 
			USART1->DR = 'c';
		}
		
		
		USART1->CR1 |= 1<<7; 
	}
	if(USART1->SR & (1<<7)) {
		
		USART1->CR1 &= (~(1<<7));
	}
	
}

