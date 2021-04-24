CC = gcc
CFLAGS = -Wall -g
OBJMODULES = char_in_str.o get_str.o get_first.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex5: Ch11Ex5.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
