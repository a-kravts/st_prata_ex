CC = gcc
CFLAGS = -Wall -g

#SRCMODULES = 
#OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
		$(CC) $(CFLAGS) $< -c

Ch16Ex2: Ch16Ex2.c $(OBJMODULES)
		$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o Ch16Ex2


