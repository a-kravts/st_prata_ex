/*  Creating and using a book catalog
    filename: main_menu.c
    ver 2.0
    Aleksandr Kravtsov  */
#include "catalog_exists.h"
#include "select_catalog.h"
//#include "create_catalog.h"
#include "get_char_choice.h"
#include "show_main_menu.h"
#define EXIT_CHAR 'e'

int main(void)
{
    char ch, *choices;

    do {
        (catalog_exists()) ? (choices = "sce") : (choices = "ce");
        show_main_menu();
        ch = get_char_choice(choices);
        switch(ch) {
            case 's': select_catalog(); break;
//            case 'c': create_catalog(); break;
        }
    } while(ch != EXIT_CHAR);

    return 0;
}
