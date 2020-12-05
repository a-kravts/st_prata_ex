/* using a function inside another function 
   filename:Ch2Ex8.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

void one_three();
void two();

int main()
{
	printf("getting start:\n");
	one_three();
	printf("all right!\n");

	return 0;
}

void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

void two()
{
	printf("two\n");
}

