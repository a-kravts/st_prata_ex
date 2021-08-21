/* Display all prime numbers less than or equal to the entered prime number
   filename: Ch7Ex9.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned number;
	unsigned divisor;
	bool is_prime;
		
	printf("Enter any positive integer more 1('0' to exit): ");
	while(scanf("%u", &number) == 1 && number != 0) {
		for(; number > 1; number--) {
			is_prime = true;
			for(divisor = number - 1; divisor > 1; divisor--) { 
				if(number % divisor == 0) {
					is_prime = false;
					break;
				}
			}
			if(is_prime)
				printf("%u\n", number);
		}
		printf("Enter any positive integer more 1('0' to exit): ");
	}
	
	return 0;
}	
