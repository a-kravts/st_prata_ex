/* output the sum of numbers
   filename: Ch5Ex5.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int correct_enter;
	int number = 0, sum = 0;
	int limit;
	
	printf("Enter limit(integer number): ");
	correct_enter = scanf("%d", &limit);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	while(number++ < limit)
		sum += number;
	printf("sum = %d\n", sum);
		
	return 0;
}
