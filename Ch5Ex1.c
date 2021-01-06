/* conversion of minutes into hours and minutes
   filename: Ch5Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#define MIN_PER_HOUR 60

int main()
{
	int correct_enter;
	int minutes, hours, left_minutes;
	
	printf("Enter time in minutes(<= 0 to exit): ");
	correct_enter = scanf("%d", &minutes);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}
	while(minutes > 0) {
		hours = minutes / MIN_PER_HOUR;
		left_minutes = minutes % MIN_PER_HOUR;
		printf("%d minute(s) is %d hour(s) and %d minute(s)\n", minutes,
																hours,
																left_minutes);

		printf("\nEnter next value in minutes(<= 0 to exit): ");
		correct_enter = scanf("%d", &minutes);
		if(correct_enter != 1) {
			printf("Error enter. Exit...\n");
			return 2;
		}
	}
	
	return 0;
}
