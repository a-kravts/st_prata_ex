#include "delete_catalog.h"
#include "get_catalog_list.h"
#include "get_catalog_choice.h"
#include "list_t.h"
#include <stdio.h>

void delete_catalog()
{
    data_t catalog;
    list_t list;

    list = get_catalog_list();
    do {
        printf("Available catalogs:\n");
        print_list_data(list);
        catalog = get_catalog_choice(&list);
        if(catalog) {
            if(remove(catalog)) {
                perror("remove");
            } else {
                delete_item(catalog, &list);
            }
        }
    } while(catalog);

    empty_the_list(list);
}
