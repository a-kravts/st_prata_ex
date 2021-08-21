#include "get_first_char.h"
#include <stdio.h>
#include <stdlib.h>

char get_first_char()
{
    char ch, check;

    ch = getchar();
    while((check = getchar()) != '\n') {
        if(check == EOF) {
            printf("\nError: input interrupted\n");
            exit(EXIT_FAILURE);
        }
    }
    return ch;
}
