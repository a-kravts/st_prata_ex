#include "main_menu.h"
#include "show_main_menu.h"
#include "get_choice_main_menu.h"
#include "submenu_display_book.h"
#include "remove_book.h"
#include "add_book.h"
#define EXIT_CHAR 'e'

void main_menu(unsigned int books_ctr, char *file_name)
{
	char choice;

	show_main_menu(books_ctr);
	while((choice = get_choice_main_menu(books_ctr)) != EXIT_CHAR) {
		switch(choice) {
			case 'd': submenu_display_book(books_ctr, file_name);	break;
			case 'r': remove_book(&books_ctr, file_name);			break;
			case 'a': add_book(&books_ctr, file_name);				break;
		}
		show_main_menu(books_ctr);
	}
}
