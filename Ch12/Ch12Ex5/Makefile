CC = gcc
CFLAGS = -Wall -g
OBJMODULES = sort_int.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex5: Ch12Ex5.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
