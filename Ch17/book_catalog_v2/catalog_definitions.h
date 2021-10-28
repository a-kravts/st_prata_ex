/* Defining constants for the book catalog */
#ifndef CATALOG_DEFINITIONS_H_SENTRY
#define CATALOG_DEFINITIONS_H_SENTRY

static const char catalog_suffix[] = ".bc";
enum {max_catalog_name = 40}; //256
enum {max_title = 40};
enum {max_author = 40};
enum {max_books = 5};

typedef struct book {
	char title[max_title];
	char author[max_author];
	unsigned long pages;
} book_t;

enum {size_book_t = sizeof(book_t)};

#endif
