#include "get_char_choice.h"
#include "get_first_char.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

char get_char_choice(const char *choices)
{
    char ch;
    const char *tmp;

    printf("Your choice: ");
    ch = tolower(get_first_char());
    while(!strchr(choices, ch)) {
        printf("Enter ");
        for(tmp = choices; *tmp; tmp++)
            printf("'%c'%c ", *tmp, *(tmp + 1)? ',' : ':');
        ch = tolower(get_first_char());
    }
    return ch;
}
