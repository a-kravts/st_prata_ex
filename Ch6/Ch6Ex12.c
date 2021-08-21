/* outputting the sums of two infinite sequences
   filename: Ch6Ex12.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	long limit;
	long double sum1, sum2;
	long i;							/* index for loop */
	long change_the_sign;
	
	printf("Enter a limit on the number of elements of sequences\n"
		   "(limit <= 0 to exit): ");
	while(scanf("%ld", &limit), limit > 0) {
		for(sum1 = 0, sum2 = 0, i = 1, change_the_sign = 1; i <= limit;
			i++, change_the_sign *= -1) {
			sum1 += 1.0L/i;
			sum2 += 1.0L/i * change_the_sign;
		}
		printf("sum1 = %.10Lf\n"
			   "sum2 = %.10Lf\n", sum1, sum2);
		printf("Enter next limit: ");
	}
	printf("Work completed\n");
	
	return 0;
}
