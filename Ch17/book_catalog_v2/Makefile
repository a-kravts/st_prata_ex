CC = gcc
CFLAGS = -Wall -g
SRCMODULES = catalog_exists.c \
             get_catalog_choice.c \
             get_catalog_list.c \
             get_char_choice.c \
             get_directory_stream.c \
             get_first_char.c \
             get_str.c \
             list_t.c \
             select_action_with_catalog.c \
             select_catalog.c \
             show_action_menu.c \
             show_main_menu.c \
             show_order_menu.c \
             show_display_menu.c \
             tree_t.c \
             display_catalog_contents.c \
             edit_catalog_contents.c \
             get_uint.c \
             get_data_to_add.c \
             get_data_to_delete.c \
             add_book.c \
             delete_book.c \
             show_edit_menu.c \
             create_catalog.c \
             get_catalog_name.c \
             delete_catalog.c \
             str_to_lower.c
OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

book_catalog: main_menu.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@

deps.mk: $(SRCMODULES)
			$(CC) -MM $^ > $@

ifneq (clean, $(MAKECMDGOALS))
-include deps.mk
endif

run: book_catalog
	./book_catalog

clean:
	rm -f *.o deps.mk book_catalog
