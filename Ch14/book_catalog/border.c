#include "border.h"
#include <stdio.h>

void border(char ch, int limit)
{
	int i;
	
	for(i = 0; i < limit; i++)
		putchar(ch);
	putchar('\n');
}
