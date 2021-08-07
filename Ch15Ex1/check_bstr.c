#include "check_bstr.h"

int check_bstr(const char *b_str)
{
    if(*b_str == '\0') /*empty string*/
        return 1;
    while(*b_str != '\0') {
        if(*b_str != '0' && *b_str != '1')
            return 1;
        b_str++;
    }
    return 0;
}
