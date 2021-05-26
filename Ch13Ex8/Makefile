CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_number_of_char_in_file.o get_str.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch13Ex8: Ch13Ex8.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
