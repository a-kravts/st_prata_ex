#include "get_data_to_delete.h"
#include "get_str.h"
#include "str_to_lower.h"
#include <stdio.h>
#include <limits.h>
#define QUIT_CHAR '\0'

int get_data_to_delete(data_t *data, node_t **root)
{
    for(;;) {
        printf("Enter the title and author of the book\n"
               "or press [enter] at the beginning of the line to quit.\n\n"
               "Title: ");
        get_str(data->title, max_title);
        if(*data->title == QUIT_CHAR)
            return 0;
        str_to_lower(data->title);
        printf("Author: ");
        get_str(data->author, max_author);
        if(*data->author == QUIT_CHAR)
            return 0;
        str_to_lower(data->author);
        if(!node_search(data, root)) {
            printf("This book is not in the catalog.\n");
            continue;
        }

        return 1;
    }
}
