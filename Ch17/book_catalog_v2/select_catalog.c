#include "select_catalog.h"
#include "select_action_with_catalog.h"
#include "get_catalog_list.h"
#include "get_catalog_choice.h"
#include "list_t.h"
#include <stdio.h>

void select_catalog()
{
    data_t name;
    list_t list;

    list = get_catalog_list();
    do {
        printf("Available catalogs:\n");
        print_list_data(list);
        name = get_catalog_choice(list);
        if(name)
            select_action_with_catalog(name);
    } while(name);
    
    empty_the_list(list);
}
