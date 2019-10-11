#include <stdio.h>
#include "NUC1xx.h"
#include "DrvSYS.h"
#include "ScanKey.h"
#include "Seven_Segment.h"

int main(void)
{
	uint8_t keyData;
	
	while(1){
	OpenKeyPad();
	do{
	keyData=Scankey();
	}while(keyData==0);
	
	close_seven_segment();
	show_seven_segment(0, keyData);	
          }
	}

