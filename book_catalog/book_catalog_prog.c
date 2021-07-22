/*	Creating and using a book catalog
	filename: book_catalog_prog.c
	ver 1.0
	Aleksandr Kravtsov	*/
#include "get_book_catalog.h"
#include "check_catalog_file.h"
#include "main_menu.h"
#include "book_catalog_definitions.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char catalog_file[max_catalog_name];
	unsigned int books_ctr;

	get_book_catalog(argc, argv, catalog_file, max_catalog_name);
	books_ctr = check_catalog_file(catalog_file);
	main_menu(books_ctr, catalog_file);

	printf("Program is over\n");
	return 0;
}
