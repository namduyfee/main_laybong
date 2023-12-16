
#include "config.h" 
#include "stdio.h"


uint16_t tay_ps; 

dc dong_co = {0x01, 10, 0xFF, 0x82, 10, 0xFF};  

int main() {
	
	config(); 

//	initDMA1Channel7(&(dong_co.diachi_xoay_huong), &(USART2->DR), 6); 
	USART1->CR1 |= 1<<5; 
	while(1) {

	} 
	return 0; 
	
}

