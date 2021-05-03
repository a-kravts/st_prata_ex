#include "get_choice.h"
#include "get_first_number.h"
#include <stdio.h>

int get_choice()
{
	int choice;
	
	printf("\n***************************************************************\n"
		   "Enter the number corresponding to the selected option:\n"
		   "1) print the entered strings\n"
		   "2) print the entered strings sorted by ASCII sequence\n"
		   "3) print the entered strings sorted in ascending order of length\n"
		   "4) print the entered strings sorted in ascending order of length\n"
		   "   of the first word\n"
		   "5) exit\n"
		  "***************************************************************\n");
	while((choice = get_first_number()) != 1 && choice != 2 &&
		   choice != 3 && choice != 4 && choice != 5)
		printf("Choose 1, 2, 3, 4 or 5: ");

	return choice;
}
