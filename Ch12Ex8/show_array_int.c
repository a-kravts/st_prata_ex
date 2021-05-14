#include "show_array_int.h"
#include <stdio.h>

#define LIMIT 8

void show_array_int(const int *p_arr, int quantity)
{
	int i;

	for(i = 0; i < quantity; i++) {
		printf("%d ", p_arr[i]);
		if((i + 1) % LIMIT == 0)
			putchar('\n');
	}
	if(i % LIMIT != 0)
		putchar('\n');
}
