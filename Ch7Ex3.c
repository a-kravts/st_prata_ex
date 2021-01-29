/* Reading integers and outputting averages
   filename: Ch7Ex3.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int average(int sum_of_numbers, int number);

int main()
{
	int current_number;
	int even_number_ctr = 0;
	int sum_of_even_numbers = 0;
	int odd_number_ctr = 0;
	int sum_of_odd_numbers = 0;
	
	printf("Enter any integer numbers('0' to exit):\n");
	while(scanf("%d", &current_number) && current_number > 0) {
		if(current_number % 2 == 0) {
			even_number_ctr++;
			sum_of_even_numbers += current_number;
		}
		else {
			odd_number_ctr++;
			sum_of_odd_numbers += current_number;
		}
	}
	if(current_number == 0) {
		if(even_number_ctr > 0) {
			printf("Number of even numbers = %d\n"
				   "Average of even numbers = %d\n", even_number_ctr,
				   	average(sum_of_even_numbers, even_number_ctr));
		}  
		if(odd_number_ctr > 0) {
			printf("Number of odd numbers = %d\n"
				   "Average of odd numbers = %d\n", odd_number_ctr,
				   	average(sum_of_odd_numbers, odd_number_ctr));
		}
	}
	else {
		printf("Error enter. Exit...\n");
		return 1;
	}
	
	return 0;
}

int average(int sum_of_numbers, int number)
{
	return sum_of_numbers / number; 
}
