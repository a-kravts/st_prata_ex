CC = gcc
CFLAGS = -Wall -g
OBJMODULES = elementwise_sum_of_two_arrays_double.o \
			 print_of_array_double.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex10: Ch10Ex10.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
