/* Function that returns the smaller integer of two integers
   filename: Ch9Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int smaller_int(int a, int b);

int main()
{
	int first_number, second_number, smaller_number; 
	int correct_enter;
	
	printf("Enter two integers: "),
	correct_enter = scanf("%d%d", &first_number, &second_number); 
	if(correct_enter != 2) {
		printf("Error enter!\nExit\n");
		return 1;
	}
	smaller_number = smaller_int(first_number, second_number);
	printf("Smaller integer = %d.\n", smaller_number);
	
	return 0;
}	

int smaller_int(int a, int b)
{
	return (a < b)? a: b;
}
