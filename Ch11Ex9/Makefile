CC = gcc
CFLAGS = -Wall -g
OBJMODULES = reverse_str.o get_str.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex9: Ch11Ex9.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
