
#include "function.h"

 

void xoay_phai(uint8_t dc_number, uint8_t toc_do) {
	if(dc_number ==1) {
		dong_co.diachi_xoay_huong = 0x81; 
		dong_co.tocdo_xoay_huong = toc_do;
	}
	
	if(dc_number ==2) {
		dong_co.diachi_ban_bong = 0x81; 
		dong_co.tocdo_ban_bong = toc_do;
	}
	
}

void xoay_trai(uint8_t dc_number, uint8_t toc_do) {
	if(dc_number ==1) {
		dong_co.diachi_xoay_huong = 0x01; 
		dong_co.tocdo_xoay_huong = toc_do;
	}
	
	if(dc_number ==2) {
		dong_co.diachi_ban_bong = 0x01; 
		dong_co.tocdo_ban_bong = toc_do;
	}
	
}

void khoa_dc_pid(uint8_t dc_number) {
	if(dc_number == 1) 
		dong_co.tocdo_xoay_huong= 1; 
	if(dc_number == 2) 
		dong_co.tocdo_ban_bong= 1;  
	
}

void day_tay_gap(void) {
	GPIOA->ODR |= 1<<8; 
}

void thu_tay_gap(void) {
	GPIOA->ODR &= (~(1<<8)); 
}









