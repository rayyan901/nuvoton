#include <stdio.h>
#include "NUC1xx.h"
#include "DrvSYS.h"
#include "Seven_Segment.h"

void delay(unsigned int del){
	unsigned int i;
	for(i=0;i<del;i++){
	DrvSYS_Delay(1000);
	}	
}
int main(void)
{
	uint8_t i;
	while(1){
	
	for(i=0;i<10;i++){	
	close_seven_segment();
	show_seven_segment(1, i);	
	delay(1000);  // 1 second delay	
		
	}		
 }
}
