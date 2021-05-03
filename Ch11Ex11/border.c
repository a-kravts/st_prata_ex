#include "border.h"
#include <stdio.h>

void border(int limit, char ch)
{
	int i;
	
	for(i = 0; i < limit; i++)
		putchar(ch);
	putchar('\n');
}
