/* Fuel consumption calculation(using only automatic variables)
   filename: Ch12Ex3.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "set_mode_get_show_info.h"
#include "border.h"
#include <stdio.h>

#define BORDER 80
#define BORDER_SYMBOL '-'

int main(void)
{
	int mode;
	int previous_mode = 0;
	
	printf("Enter 0 for metric mode or 1 for US mode\n");
	printf("(-1 for exit): ");
	if(scanf("%d", &mode) != 1) {
		printf("Error: invalid value.\n");
		return 1;
	}
	while(mode >= 0) {
		set_mode(mode, previous_mode);
		previous_mode = mode;
		border(BORDER, BORDER_SYMBOL);
		printf("Enter 0 for metric mode or 1 for US mode\n");
		printf("(-1 for exit): ");
		if(scanf("%d", &mode) != 1) {
			printf("Error: invalid value.\n");
			return 1;
		}
	}
	printf("Program is over.\n");
	
	return 0;
}
