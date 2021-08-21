/* Research on the non-determinism of a random number generator
   filename: Ch12Ex6.c
   ver 2.0
   Aleksandr Kravtsov
*/

#include "get_random_int.h"
#include <stdio.h>
#include <stdlib.h>

#define QUANTITY 1000
#define NUMBER_OF_SEEDS 10
#define RANGE 10

int main(void)
{
	int seed[NUMBER_OF_SEEDS];
	int number;
	int i, j;
	int ctr_of_1, ctr_of_2, ctr_of_3, ctr_of_4, ctr_of_5, ctr_of_6, ctr_of_7,
		ctr_of_8, ctr_of_9, ctr_of_10;
	ctr_of_1 = ctr_of_2 = ctr_of_3 = ctr_of_4 = ctr_of_5 = ctr_of_6 =
	ctr_of_7 = ctr_of_8 = ctr_of_9 = ctr_of_10 = 0;
	enum numbers {
		one = 1, two, three, four, five,
		six, seven, eight, nine, ten
	};
	
	get_random_int(seed, NUMBER_OF_SEEDS);
	for(i = 0; i < NUMBER_OF_SEEDS; i++) {
		srand((unsigned int) seed[i]);
		printf("current seed = %d\n", seed[i]);
		for(j = 0; j < QUANTITY; j++) {
			number = rand() % RANGE + 1;
			if(number == one)
				ctr_of_1++;
			else if(number == two)
				ctr_of_2++;
			else if(number == three)
				ctr_of_3++;
			else if(number == four)
				ctr_of_4++;
			else if(number == five)
				ctr_of_5++;
			else if(number == six)
				ctr_of_6++;
			else if(number == seven)
				ctr_of_7++;
			else if(number == eight)
				ctr_of_8++;
			else if(number == nine)
				ctr_of_9++;
			else if(number == ten)
				ctr_of_10++;
		}
		printf("seed %d: '%2d' '%2d' '%2d' '%2d' '%2d' '%2d' '%2d' "
			"'%2d' '%2d' '%2d'\n", i, one, two, three, four, five, six, seven,
			eight, nine, ten);
		printf("         %3d  %3d  %3d  %3d  %3d  %3d  %3d  %3d  %3d  %3d\n",
			ctr_of_1, ctr_of_2, ctr_of_3, ctr_of_4, ctr_of_5, ctr_of_6,
			ctr_of_7, ctr_of_8, ctr_of_9, ctr_of_10);
		ctr_of_1 = ctr_of_2 = ctr_of_3 = ctr_of_4 = ctr_of_5 = ctr_of_6 =
		ctr_of_7 = ctr_of_8 = ctr_of_9 = ctr_of_10 = 0;
	}
	
	return 0;
}
