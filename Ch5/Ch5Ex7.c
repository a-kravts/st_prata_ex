/* output the cube of number
   filename: Ch5Ex7.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

void print_cube_of_number(int x);

int main()
{
	int correct_enter;
	int number;
	
	printf("Enter any integer number: ");
	correct_enter = scanf("%d", &number);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	print_cube_of_number(number);	
		
	return 0;
}

void print_cube_of_number(int x)
{
	printf("Cube of number %d = %d\n", x, x*x*x);
}
