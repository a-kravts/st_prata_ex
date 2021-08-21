/*Declaration(s) for fwrite_book_t.c module*/
#ifndef FWRITE_BOOK_T_H_SENTRY
#define FWRITE_BOOK_T_H_SENTRY

#include "book_catalog_definitions.h"
extern void fwrite_book_t(book_t *book_ptr, long number,
	const char *file_name, const char *mode);

#endif
