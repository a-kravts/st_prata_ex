CC = gcc
CFLAGS = -Wall -g
OBJMODULES = make_array_int.o show_array_int.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex8: Ch12Ex8.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
