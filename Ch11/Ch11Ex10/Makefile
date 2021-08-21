CC = gcc
CFLAGS = -Wall -g
OBJMODULES = remove_spaces.o get_str.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex10: Ch11Ex10.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
