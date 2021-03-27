CC = gcc
CFLAGS = -Wall -g

copy_array_ptr_notation.o: copy_array_ptr_notation.c copy_array_ptr_notation.h
							$(CC) $(CFLAGS) -c $<
copy_array_std_notation.o: copy_array_std_notation.c copy_array_std_notation.h
							$(CC) $(CFLAGS) -c $<
copy_array_with_ptr_to_end.o: copy_array_with_ptr_to_end.c copy_array_with_ptr_to_end.h
							$(CC) $(CFLAGS) -c $<
print_of_array.o: print_of_array.c print_of_array.h
							$(CC) $(CFLAGS) -c $<
Ch10Ex2: Ch10Ex2.c copy_array_ptr_notation.o copy_array_std_notation.o copy_array_with_ptr_to_end.o print_of_array.o
							$(CC) $(CFLAGS) $^ -o $@ 
