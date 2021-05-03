#include "selection_menu.h"
#include "get_choice.h"
#include "print_original_list.h"
#include "sort_str_by_ascii.h"
#include "sort_str_by_length.h"
#include "sort_str_by_1st_word.h"
#include <stdio.h>
#include <stdlib.h>

void selection_menu(char (*str)[30], char **p_str, int count)
{
	int choice;
	
	while((choice = get_choice()) != 5) {
		switch(choice) {
			case 1:
				print_original_list(str, count);
				break;
			case 2:
				sort_str_by_ascii(p_str, count);
				break;
			case 3:
				sort_str_by_length(p_str, count);
				break;
			case 4:
				sort_str_by_1st_word(p_str, count);
				break;
			default:
				printf("\nSomething went wrong...\n");
				exit(1);
		}
	}
}
