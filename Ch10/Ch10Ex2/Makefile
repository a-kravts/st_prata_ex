CC = gcc
CFLAGS = -Wall -g
OBJMODULES = copy_array_ptr_notation.o \
			 copy_array_std_notation.o \
			 copy_array_with_ptr_to_end.o \
			 print_of_array.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex2: Ch10Ex2.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
