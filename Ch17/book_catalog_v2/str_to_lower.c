#include "str_to_lower.h"
#include <ctype.h>

void str_to_lower(char *str)
{
    while(*str) {
        *str = tolower(*str);
        str++;
    }
}
