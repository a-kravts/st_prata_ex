CC = gcc
CFLAGS = -Wall -g
OBJMODULES = mk_file_with_random_int.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch13Ex12: Ch13Ex12.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
