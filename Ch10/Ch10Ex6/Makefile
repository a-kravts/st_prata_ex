CC = gcc
CFLAGS = -Wall -g
OBJMODULES = reverse_array_of_double.o \
			 print_of_array_double.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex6: Ch10Ex6.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
