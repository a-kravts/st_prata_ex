/* output a table of squares and cubes
   filename: Ch6Ex6.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int lower_limit, upper_limit;
	int number;
	int correct_enter;
	
	printf("enter the lower and upper limits for the table: ");
	correct_enter = scanf("%d %d", &lower_limit, &upper_limit);
	if(correct_enter != 2) {
		printf("Error enter. Exit...");
		return 1;
	}
	printf("number  number^2  number^3\n");
	for(number = lower_limit; number <= upper_limit; number++) {
		printf("%6d%10d%10d", number, number*number, number*number*number);
		printf("\n");
	}
	
	return 0;
}
