#include "get_catalog_choice.h"
#include "catalog_definitions.h"
#include "get_str.h"
#include <stdio.h>
#include <string.h>

char *get_catalog_choice(list_t *list)
{
    char catalog[max_catalog_name];
    list_t *choice;

    do {
        printf("Enter the name of the desired catalog or\n"
               "'e' to exit: ");
        get_str(catalog, max_catalog_name);
        if(*catalog == 'e') {
            return NULL;
        }
        choice = item_search(catalog, list);
        if(!choice) {
            printf("Error: no match found\nAvailable catalogs:\n");
            print_list_data(*list);
        }
    } while(!choice);

    return (*choice)->data;
}
