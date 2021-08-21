#include "print_words.h"
#include <stdio.h>

void print_words(char **p_word, int limit)
{
	int i;
	
	printf("Here are the words you entered:\n");
	for(i = 0; i < limit; i++)
		printf("%s\n", p_word[i]);
}
