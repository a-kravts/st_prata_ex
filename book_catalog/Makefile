CC = gcc
CFLAGS = -Wall -g
SRCMODULES = 	add_book.c \
				border.c \
				check_catalog_file.c \
				check_file_close.c \
				check_file_open.c \
				display_book_t.c \
				fread_book_t.c \
				fwrite_book_t.c \
				get_book_catalog.c \
				get_choice_add_book.c \
				get_choice_main_menu.c \
				get_choice_remove_book.c \
				get_choice_submenu.c \
				get_first_char.c \
				get_str.c \
				get_uint.c \
				main_menu.c \
				malloc_for_book_t.c \
				remove_book.c \
				remove_confirmation.c \
				show_main_menu.c \
				show_submenu_display_book.c \
				sort_by_index.c \
				sort_by_pages.c \
				sort_by_title.c \
				submenu_display_book.c

OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

book_catalog_prog: book_catalog_prog.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@

deps.mk: $(SRCMODULES)
			$(CC) -MM $^ > $@

ifneq (clean, $(MAKECMDGOALS))
-include deps.mk
endif

run: book_catalog_prog
	./book_catalog_prog

clean:
	rm -f *.o deps.mk src_modules.mk book_catalog_prog

src_modules.mk:
				ls -1 *.c > $@
