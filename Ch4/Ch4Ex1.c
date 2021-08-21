/* Input/output of first and second name
   filename: Ch4Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	char first_name[10];
	char second_name[10];
	int correct_enter;
	printf("Enter your first and second name:\n");
	correct_enter = scanf("%s %s", first_name, second_name);
	if(correct_enter != 2) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	printf("%s, %s\n", second_name, first_name);

	return 0;
}
