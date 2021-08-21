/* Initializing and printing an array of integers
   filename: Ch12Ex8.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "make_array_int.h"
#include "show_array_int.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int *p_arr;
	int size;
	int value;
	
	printf("Enter the number of items less than %d\n"
		   "('< 1' to exit): ", INT_MAX);
	while(scanf("%d", &size) == 1 && size > 0) {
		printf("Enter an integer to initialize: ");
		if(scanf("%d", &value) == 1) {
			p_arr = make_array_int(size, value);
			if(p_arr) {
				show_array_int(p_arr, size);
				free(p_arr);
			}
		}
		else {
			printf("Error: invalid enter!\n");
			break;
		}
		printf("Enter the number of items('< 1' to exit): ");
	}
	printf("Program is over.\n");
	
	return 0;
}
