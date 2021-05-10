/* Testing a function that returns the number of its calls
   filename: Ch12Ex4.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include "return_number_of_calls.h"
#include <stdio.h>

int main(void)
{
	int i;
	
	for(i = 1; i <= 10; i++)
		printf("%d call\n", return_number_of_calls());
	
	return 0;
}
