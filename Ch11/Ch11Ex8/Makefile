CC = gcc
CFLAGS = -Wall -g
OBJMODULES = part_in_str.o get_str.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex8: Ch11Ex8.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
