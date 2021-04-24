#include "get_first.h"
#include <stdio.h>

char get_first()
{
	char ch = getchar();
	while(getchar() != '\n' && ch != EOF)
		continue;
	
	return ch;
}
