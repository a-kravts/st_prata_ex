/* Query for words and their output
   filename: Ch12Ex9.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "get_word.h"
#include "print_words.h"
#include "get_first_number.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int count;
	int index;
	char **p_word;

	printf("How many words do you want to enter?('0' to exit): ");
	while((count = get_first_number()) && count > 0) {
		p_word = (char **)malloc(count * sizeof(char *));
		if(p_word == NULL) {
			printf("Error 1: not enough memory!\nExit\n");
			return 1;
		}
		printf("Now enter %d words:\n", count);
		for(index = 0; index < count; index++)
			p_word[index] = get_word();
		print_words(p_word, index);
		for(index = 0; index < count; index++)
			free(p_word[index]);
		free(p_word);
		printf("How many words do you want to enter?('0' to exit):\n");
	}
	printf("Program is over.\n");

	return 0;
}
