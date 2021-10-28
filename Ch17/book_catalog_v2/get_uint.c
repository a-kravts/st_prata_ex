#include "get_uint.h"
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>

static int is_digits_str(const char *str);

int get_uint(const char *str, unsigned long *number)
{
    unsigned long tmp;

    if(!is_digits_str(str))
        return 0;
    errno = 0;
    tmp = strtoul(str, NULL, 10);
    if(errno)
        return 0;
    *number = tmp;

    return 1;
}

static int is_digits_str(const char *str)
{
    while(*str) {
        if(!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}
