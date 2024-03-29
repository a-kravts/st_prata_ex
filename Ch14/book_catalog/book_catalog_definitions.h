/* Defining constants for the book catalog */
#ifndef BOOK_CATALOG_DEFINITIONS_H_SENTRY
#define BOOK_CATALOG_DEFINITIONS_H_SENTRY

enum {max_catalog_name = 40};
enum {max_title = 40};
enum {max_author = 40};
enum {max_books = 5};

typedef struct book {
	unsigned int index;
	char title[max_title];
	char author[max_author];
	unsigned int pages;
	unsigned int status;
} book_t;

enum {size_book_t = sizeof(book_t)};

#endif
