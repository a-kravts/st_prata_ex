CC = gcc
CFLAGS = -Wall -g
OBJMODULES = max_int_from_array.o \
			 print_of_array.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex3: Ch10Ex3.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
