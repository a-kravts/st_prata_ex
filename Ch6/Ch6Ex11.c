/* Entering integers into an array and outputting in reverse order 
   filename: Ch6Ex11.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

#define LIMIT 8

int main()
{
	int array[LIMIT];
	int correct_enter;
	int i;							/* index for loops */
	
	printf("Enter %d integers:\n", LIMIT);
	for(i = 0; i < LIMIT; i++) {
		correct_enter = scanf("%d", &array[i]);
		if(correct_enter != 1) {
			printf("Error enter. Exit...\n");
			return 1;
		}
	}
	for(--i; i >= 0; i--)
		printf("%d\n", array[i]);
	
	return 0;
}
