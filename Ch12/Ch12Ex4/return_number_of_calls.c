#include "return_number_of_calls.h"

int return_number_of_calls()
{
	static int counter = 1;
	return counter++;
}
