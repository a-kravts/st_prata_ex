#include "check_bstr.h"
#include <string.h>

int check_bstr(const char *b_str, int limit)
{
    if(*b_str == '\0') /*empty string*/
        return 1;
    if(strlen(b_str) > limit)
        return 1;
    while(*b_str != '\0') {
        if(*b_str != '0' && *b_str != '1')
            return 1;
        b_str++;
    }
    return 0;
}
