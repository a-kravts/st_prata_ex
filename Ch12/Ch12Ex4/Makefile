CC = gcc
CFLAGS = -Wall -g
OBJMODULES = return_number_of_calls.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex4: Ch12Ex4.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
