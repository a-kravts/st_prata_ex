CC = gcc
CFLAGS = -Wall -g
OBJMODULES = copy_array_with_ptr_to_end.o \
			 print_of_array_double.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex7: Ch10Ex7.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
