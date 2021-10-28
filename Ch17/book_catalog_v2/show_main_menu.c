#include "show_main_menu.h"
#include "catalog_exists.h"
#include <stdio.h>

void show_main_menu()
{
    printf("Main menu:\n");
    if(catalog_exists()) {
        printf("s) select catalog\n");
        printf("d) delete catalog\n");
    }
    printf("c) create catalog\n");
    printf("e) exit\n");
}
