/* Input/output of first and second name
   filename: Ch4Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	char first_name[10];
	char second_name[10];
	
	printf("Enter your first and second name:\n");
	scanf("%s %s", first_name, second_name);
	printf("%s, %s\n", second_name, first_name);

	return 0;
}
