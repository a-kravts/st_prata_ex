#include "int_to_bstr.h"
#include <stdio.h>

char *int_to_bstr(int number, char *b_str, int size)
{
    int mask = 1;
    b_str[size] = '\0';

    for(size--; size >= 0; size--, number >>= 1)
        b_str[size] = (mask & number) + '0';

    return b_str;
}
