/* ASCII code to character
   filename: Ch3Ex2.c
   ver 1.1
   Alexandr Kravtsov */

#include <stdio.h>
#include <ctype.h>

int main()
{
	int symbol;
	int correct_enter;
	int answer_to_repetition_entry;
    
	do {
		printf("Please, enter any ASCII code: ");
		correct_enter = scanf("%d", &symbol);	
		if(correct_enter != 1) {
			printf("Error enter. Exit...\n");
			return 1;
		}
		printf("This code matches to the symbol: %c\n", symbol);
		printf("Do you want enter another code?(Y/N): ");
		getchar(); /* CRUTCH!!! */
		correct_enter = scanf("%lc", &answer_to_repetition_entry);	
		if(correct_enter != 1) {
			printf("Error enter. Exit...\n");
			return 2;
		}
	} while(toupper(answer_to_repetition_entry) == 'Y');

	return 0;
}
