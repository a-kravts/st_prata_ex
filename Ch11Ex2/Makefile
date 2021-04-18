CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_n_char.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex2: Ch11Ex2.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
