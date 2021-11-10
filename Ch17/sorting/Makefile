CC = gcc
CFLAGS = -Wall -g

SRCMODULES = bubble_sort.c \
             insertion_sort.c \
             selection_sort.c \
             quick_sort.c \
             get_running_time.c

OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
		$(CC) $(CFLAGS) -c $<

comparison_of_sorts: comparison_of_sorts.c $(OBJMODULES)
		$(CC) $(CFLAGS) $^ -o $@

deps.mk: $(SRCMODULES)
		$(CC) -MM $^ > $@

ifneq (clean, $(MAKECMDGOALS))
-include deps.mk
endif

clean:
	rm -f *.o deps.mk comparison_of_sorts
