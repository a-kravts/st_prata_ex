#include "edit_catalog_contents.h"
#include "get_char_choice.h"
#include "show_edit_menu.h"
#include "add_book.h"
#include "delete_book.h"
#define EXIT_CHAR 'e'

void edit_catalog_contents(const char *catalog)
{
    char ch, *choices = "ade";

    do {
        show_edit_menu();
        ch = get_char_choice(choices);
        switch(ch) {
            case 'a': add_book(catalog);    break;
            case 'd': delete_book(catalog); break;
        }
    } while(ch != EXIT_CHAR);
}
