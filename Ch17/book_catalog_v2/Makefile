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
             show_main_menu.c

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
