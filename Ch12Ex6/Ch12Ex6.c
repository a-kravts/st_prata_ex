/* Research on the non-determinism of a random number generator
   filename: Ch12Ex6.c
   ver 1.0
   Aleksandr Kravtsov
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define QUANTITY 1000
#define NUMBER_OF_SEEDS 10
#define RANGE 10
#define SLEEP_TIME 1

int main(void)
{
	int number;
	int i, j;
	time_t current_seed;
	int ctr_of_1, ctr_of_2, ctr_of_3, ctr_of_4, ctr_of_5, ctr_of_6, ctr_of_7,
		ctr_of_8, ctr_of_9, ctr_of_10;
	ctr_of_1 = ctr_of_2 = ctr_of_3 = ctr_of_4 = ctr_of_5 = ctr_of_6 =
	ctr_of_7 = ctr_of_8 = ctr_of_9 = ctr_of_10 = 0;
	enum numbers {
		one = 1, two, three, four, five,
		six, seven, eight, nine, ten
	};

	for(i = 1; i <= NUMBER_OF_SEEDS; i++) {
		srand((unsigned int) time(&current_seed));
		printf("current seed = %lu\n", current_seed);
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
		printf("seed %2d: '%2d' '%2d' '%2d' '%2d' '%2d' '%2d' '%2d' "
			"'%2d' '%2d' '%2d'\n", i, one, two, three, four, five, six, seven,
			eight, nine, ten);
		printf("          %3d  %3d  %3d  %3d  %3d  %3d  %3d  %3d  %3d  %3d\n",
			ctr_of_1, ctr_of_2, ctr_of_3, ctr_of_4, ctr_of_5, ctr_of_6,
			ctr_of_7, ctr_of_8, ctr_of_9, ctr_of_10);
		ctr_of_1 = ctr_of_2 = ctr_of_3 = ctr_of_4 = ctr_of_5 = ctr_of_6 =
		ctr_of_7 = ctr_of_8 = ctr_of_9 = ctr_of_10 = 0;
		sleep(SLEEP_TIME);
	}
	
	return 0;
}
