CC = gcc
CFLAGS = -Wall -g
OBJMODULES = return_difference_between_max_and_min_double.o \
			 print_of_array_double.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex5: Ch10Ex5.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
