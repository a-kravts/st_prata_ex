CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_first_long.o get_str.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch13Ex10: Ch13Ex10.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
