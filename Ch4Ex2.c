/* Input/output of first name
   filename: Ch4Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <string.h>

int main()
{
	char first_name[10];
	int correct_enter;
	int length_of_name;
	
	printf("Enter your first name:\n");
	correct_enter = scanf("%s", first_name);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	length_of_name = strlen(first_name);
	printf("\"%s\"\n"
		   "\"%20s\"\n"
		   "\"%-20s\"\n"
		   "\"%*s\"\n", first_name, first_name, first_name, 
		   				length_of_name + 3, first_name);
	
	return 0;
}
