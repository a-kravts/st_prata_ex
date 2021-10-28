#include "get_data_to_add.h"
#include "get_uint.h"
#include "get_str.h"
#include "str_to_lower.h"
#include <stdio.h>
#include <limits.h>
#define QUIT_CHAR '\0'

int get_data_to_add(data_t *data, node_t **root)
{
    enum {max_length_ulong = 21};
    char str[max_length_ulong];

    for(;;) {
        printf("Enter the title, author and number of pages of the book\n"
               "or press [enter] at the beginning of the line to quit.\n\n"
               "Title(up to %u characters): ", max_title);
        get_str(data->title, max_title);
        if(*data->title == QUIT_CHAR)
            return 0;
        str_to_lower(data->title);
        printf("Author(up to %u characters): ", max_author);
        get_str(data->author, max_author);
        if(*data->author == QUIT_CHAR)
            return 0;
        str_to_lower(data->author);
        if(node_search(data, root)) {
            printf("This book is already in the catalog.\n");
            continue;
        }
        do {
            printf("Number of pages(up to %lu): ", ULONG_MAX);
            get_str(str, max_length_ulong);
            if(*str == QUIT_CHAR)
                return 0;
            data->pages = 0;
            if(!get_uint(str, &data->pages) || !data->pages) {
                printf("Incorrect value.\n");
                continue;
            }
        } while(!data->pages);

        return 1;
    }
}
