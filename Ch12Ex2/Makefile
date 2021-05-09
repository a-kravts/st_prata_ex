CC = gcc
CFLAGS = -Wall -g
OBJMODULES = set_mode_get_show_info.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex2: Ch12Ex2.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
