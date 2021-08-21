/* output of the sum of squares of numbers within the specified limits
   filename: Ch6Ex10.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

int main()
{
	int lower_limit, upper_limit;
	int sum;
	int i;							/* index for loop */
	
	printf("Enter lower and upper limits(integer numbers).\n"
		   "Enter lower limit >= upper limit to exit:\n");
	while(scanf("%d %d", &lower_limit, &upper_limit),
		  lower_limit < upper_limit) {
		for(sum = 0, i = lower_limit; i <= upper_limit; i++)
			sum += i*i;
		printf("The sum of the squares of integers "
			   "from %d to %d is %d\n", lower_limit*lower_limit,
										upper_limit*upper_limit,
										sum);
		printf("Enter next pair of limits: ");
	}
	printf("Work completed\n");
	
	return 0;
}
