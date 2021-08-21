CC = gcc
CFLAGS = -Wall -g
OBJMODULES = set_mode_get_show_info.o border.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch12Ex3: Ch12Ex3.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
