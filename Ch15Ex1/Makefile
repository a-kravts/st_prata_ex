CC = gcc
CFLAGS = -Wall -g
SRCMODULES = get_str.c \
			 check_bstr.c \
             bstr_to_decimal.c
OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

Ch15Ex1: Ch15Ex1.c $(OBJMODULES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o Ch15Ex1
