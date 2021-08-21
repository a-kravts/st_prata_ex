CC = gcc
CFLAGS = -Wall -g
OBJMODULES = copy_2d_array_double.o \
			 print_2d_array_double.o 

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch10Ex9: Ch10Ex9.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
