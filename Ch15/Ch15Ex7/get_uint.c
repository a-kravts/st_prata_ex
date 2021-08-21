#include "get_uint.h"
#include "get_str.h"
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <ctype.h>

static int is_digits_str(const char *str_ptr);

unsigned int get_uint()
{
    const int max_length = 11;
    char str[max_length], *str_end;
 
    while(get_str(str, max_length)) {
        if(*str == '\0') {
            printf("Error: empty string\nRepeat input: ");
            continue;
        }
        if(!is_digits_str(str)) {
            printf("Error: incorrect value\nRepeat input: ");
            continue;
        }
        break;
    }
    str_end = strchr(str, '\0');

    return strtoumax(str, &str_end, 10);
}
static int is_digits_str(const char *str_ptr)
{
    while(*str_ptr) {
        if(!isdigit(*str_ptr))
            return 0;
        str_ptr++;
    }
    return 1;
}
