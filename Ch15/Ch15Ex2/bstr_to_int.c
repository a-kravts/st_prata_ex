#include "bstr_to_int.h"
#include <string.h>

int bstr_to_int(const char *b_str)
{
    int mask = 1, result = 0;
    const char *current_bit = strchr(b_str, '\0') - 1;

    for(; current_bit >= b_str; current_bit--) {
        if(*current_bit == '1')
            result |= mask;
        mask <<= 1;
    }
    return result;
}
