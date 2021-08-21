/* Simple calculator
   filename: Ch8Ex8.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void selection_menu();
void addition();
void subtraction();
void multiplication();
void division();
char get_choice();
char get_first_alpha();
float get_float();

int main()
{
	selection_menu();
	printf("Program is over.\n");	
	
	return 0;
}

void selection_menu()
{
	int choice;
	while((choice = get_choice()) != 'q') {
		switch(choice) {
			case 'a':
				addition();
				break;
			case 's':
				subtraction();
				break;
			case 'm':
				multiplication();
				break;
			case 'd':
				division();
				break;
			default:
				printf("\nSomething went wrong...\n");
				exit(1);
		}
	}
}
void addition()
{
	float first_number, second_number, sum;
	printf("Enter first number: ");
	first_number = get_float();
	printf("Enter second number: ");
	second_number = get_float();
	sum = first_number + second_number;
	printf("%.2f + %.2f = %.2f\n", first_number, second_number, sum);
}
void subtraction()
{
	float first_number, second_number, residual;
	printf("Enter first number: ");
	first_number = get_float();
	printf("Enter second number: ");
	second_number = get_float();
	residual = first_number - second_number;
	printf("%.2f - %.2f = %.2f\n", first_number, second_number, residual);
}
void multiplication()
{
	float first_number, second_number, product;
	printf("Enter first number: ");
	first_number = get_float();
	printf("Enter second number: ");
	second_number = get_float();
	product = first_number * second_number;
	printf("%.2f * %.2f = %.2f\n", first_number, second_number, product);
}
void division()
{
	float first_number, second_number, quotient;
	printf("Enter first number: ");
	first_number = get_float();
	printf("Enter second number: ");
	second_number = get_float();
	while(second_number == 0) {
		printf("Enter a number other than '0': ");
		second_number = get_float();
	}
	quotient = first_number / second_number;
	printf("%.2f / %.2f = %.2f\n", first_number, second_number, quotient);
}
char get_choice()
{
	char ch;
	printf("Enter the letter corresponding to the selected option:\n"
		   "a. addition         s. subtraction\n"
		   "m. multiplication   d. division\n"
		   "q. quit\n");
	while((ch = get_first_alpha()) != 'a' && ch != 's' && ch != 'm' &&
		   ch != 'd' && ch != 'q')
		printf("Choose a, s, m, d or q: ");
	return ch;
}
char get_first_alpha()
{
	int ch;
	while(1) {
		ch = getchar();
		if(isalpha(ch)) {
			while(getchar() != '\n')
				continue;
			return ch;
		}
		else
			continue;
	}
}
float get_float()
{
	float entered_number;
	char ch;
	while(scanf("%f", &entered_number) != 1) {
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a number!\n"
			   "Enter a number such as 1.7e1, 20e-2 or 2021: "); 
	}
	return entered_number;
}
