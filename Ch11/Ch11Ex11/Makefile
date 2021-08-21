CC = gcc
CFLAGS = -Wall -g
OBJMODULES = 	get_1st_word.o \
				get_choice.o \
				get_first_number.o \
				get_str.o \
				print_original_list.o \
				selection_menu.o \
				sort_str_by_1st_word.o \
				sort_str_by_ascii.o \
				sort_str_by_length.o \
				border.o

%.o: %.c %.h
			$(CC) $(CFLAGS) -c $<

Ch11Ex11: Ch11Ex11.c $(OBJMODULES)
			$(CC) $(CFLAGS) $^ -o $@
