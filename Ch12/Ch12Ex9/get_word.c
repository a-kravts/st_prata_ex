#include "get_word.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_MAX_SIZE 80
#define LIMIT 80
#define IN_WORD 1
#define OUT_WORD 0

char *get_word()
{
	char ch;
	char buffer[BUFFER_MAX_SIZE];
	char *p_word;
	int size = 0;
	int lim = 0;
	int stage = OUT_WORD;
	
	while((ch = getchar()) != EOF && size < BUFFER_MAX_SIZE && lim < LIMIT) {
		lim++;
		if(!isspace(ch)) {
			buffer[size] = ch;
			size++;
			stage = IN_WORD;
		}
		else if(stage)
			break;
	}
	buffer[size] = '\0';
	if(size == 0 || lim == LIMIT) {
		printf("Error 3: input interrupted!\nExit\n");
		exit(EXIT_FAILURE);
	}
	p_word = (char *)malloc((size * sizeof(char)) + 1);
	if(p_word == NULL) {
		printf("Error 4: not enough memory!\nExit\n");
		exit(EXIT_FAILURE);
	}
	strcpy(p_word, buffer);
	
	return p_word;
}
