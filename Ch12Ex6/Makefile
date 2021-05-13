CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_random_int.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex6: Ch12Ex6.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
