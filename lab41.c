#include <stdio.h>
#include "NUC1xx.h"
#include "DrvSYS.h"
#include "LCD_Driver.h"

int main(void)
{
	
	UNLOCKREG();
	DrvSYS_SetOscCtrl(E_SYS_XTL12M,1);
	DrvSYS_Delay(5000);
	DrvSYS_SelectHCLKSource(0);
	LOCKREG();
	
	DrvSYS_SetClockDivider(E_SYS_HCLK_DIV,0);
	
	Initial_pannel();
	clr_all_pannal();
		
	print_lcd(1, "Hello World !");
	
	while(1);
	}
