CC = gcc
CFLAGS = -Wall -g
OBJMODULES = return_index_max_double.o \
			 print_of_array_double.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex4: Ch10Ex4.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
