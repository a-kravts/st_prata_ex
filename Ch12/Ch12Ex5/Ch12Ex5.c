/* Sorting 100 random numbers ranging from 1 to 10
   filename: Ch12Ex5.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "sort_int.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUANTITY 100
#define RANGE 10

int main(void)
{
	int number[QUANTITY];
	int i;
	
	srand((unsigned int) time(NULL));
	for(i = 0; i < QUANTITY; i++)
		number[i] = rand() % RANGE + 1;
	sort_int(number, QUANTITY);
	for(i = 0; i < QUANTITY; i++) {
		printf("%2d ", number[i]);
		if(number[i] != number[i + 1])
			putchar('\n');
	}
	
	return 0;
}
