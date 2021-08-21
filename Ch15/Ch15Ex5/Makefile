CC = gcc
CFLAGS = -Wall -g
SRCMODULES = check_bstr.c  \
             int_to_bstr.c \
             bstr_to_int.c \
             rotate_uint.c
OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

Ch15Ex5: Ch15Ex5.c $(OBJMODULES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o Ch15Ex5
