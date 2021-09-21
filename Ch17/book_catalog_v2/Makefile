CC = gcc
CFLAGS = -Wall -g
SRCMODULES = catalog_exists.c \
             get_char_choice.c \
             get_first_char.c \
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
