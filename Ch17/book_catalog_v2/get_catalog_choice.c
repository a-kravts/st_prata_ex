#include "get_catalog_choice.h"
#include "catalog_definitions.h"
#include "get_str.h"
#include <stdio.h>
#include <string.h>

char *get_catalog_choice(const list_t list)
{
    char name[max_catalog_name];
    data_t catalog;

    printf("Enter the name of the desired catalog or\n"
           "'e' to exit: ");
    do {
        get_str(name, max_catalog_name);
        if(!strcmp(name, "e")) {
            return NULL;
        }
        catalog = search_in_list(name, list);
        if(!catalog) {
            printf("Error: no match found\nAvailable catalogs:\n");
            print_list_data(list);
            printf("Your choice: ");
        }
    } while(!catalog);

    return catalog;
}
