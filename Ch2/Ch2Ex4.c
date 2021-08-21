/* the use functions to print messages
   filename:Ch2Ex4.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

void jolly();
void deny();

int main()
{
	jolly();
	jolly();
	jolly();
	deny();

	return 0;
}

void jolly()
{
	printf("He's a jolly fellow!\n");
}

void deny()
{
	printf("No one can deny it!\n");
}
