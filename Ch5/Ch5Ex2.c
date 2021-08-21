/* Output of numbers
   filename: Ch5Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int correct_enter;
	int number, limit;
	
	printf("Enter any integer number: ");
	correct_enter = scanf("%d", &number);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	limit = number + 10;
	while(number <= limit) {
		printf("%d\n", number++);
	}
	
	return 0;
}
