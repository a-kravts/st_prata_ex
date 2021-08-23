#include "get_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_str(char *dest, int max_length)
{
    char ch, *ret_val, *cur_val;

    ret_val = fgets(dest, max_length, stdin);
    if(ret_val) {
        cur_val = strchr(dest, '\n');
        if(cur_val) {
            *cur_val = '\0';
        } else {
            while((ch = getchar()) != '\n') {
                if(ch == EOF) {
                    printf("\nError: input interrupted\n");
                    exit(EXIT_FAILURE);
                }
            }
        }
    } else {
        printf("\nError: input interrupted\n");
        exit(EXIT_FAILURE);
    }
    return ret_val;
}
