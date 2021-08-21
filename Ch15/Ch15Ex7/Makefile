CC = gcc
CFLAGS = -Wall -g
SRCMODULES = change_alignment.c       \
             change_id.c              \
             change_size.c            \
             change_bold.c            \
             change_italic.c          \
             change_underline.c       \
             get_char_choice.c        \
             get_first_char.c         \
             get_str.c                \
             get_uint.c               \
             print_font_options.c     \
             show_alignment_options.c \
             show_font_options.c

OBJMODULES = $(SRCMODULES:.c=.o)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $<

Ch15Ex7: Ch15Ex7.c $(OBJMODULES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o Ch15Ex7
