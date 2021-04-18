CC = gcc
CFLAGS = -Wall -g
OBJMODULES = get_word.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex4: Ch11Ex4.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
