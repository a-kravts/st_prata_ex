CC = gcc
CFLAGS = -Wall -g
SRCMODULES = bstr_to_int.c \
             check_bstr.c \
             int_to_bstr.c
OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

Ch15Ex2: Ch15Ex2.c $(OBJMODULES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o Ch15Ex2
