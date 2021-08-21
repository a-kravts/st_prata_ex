CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_str.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch13Ex7: Ch13Ex7.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
