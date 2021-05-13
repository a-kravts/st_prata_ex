#include "get_random_int.h"
#include <stdlib.h>
#include <time.h>

void get_random_int(int *arr, int limit)
{
	int i;

	srand((unsigned int) time(NULL));
	for(i = 0; i < limit; i++)
		arr[i] = rand();
}
