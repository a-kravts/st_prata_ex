CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_word.o print_words.o get_first_number.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex9: Ch12Ex9.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
