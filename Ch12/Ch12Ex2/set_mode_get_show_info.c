#include "set_mode_get_show_info.h"
#include <stdio.h>
#include <stdlib.h>

static int mode;
static double distance;
static double consumption;

#define HUNDRED 100

void set_mode(int selected_mode)
{
	if(selected_mode != 0 && selected_mode != 1)
		printf("Invalid mode. Mode %d(%s) in use.\n", mode,
													  mode ? "US" : "metric");
	else
		mode = selected_mode;
}
void get_info()
{
	if(mode) {
		printf("Enter the distance traveled in miles: ");
		if(scanf("%lf", &distance) != 1) {
			printf("Error: invalid value.\n");
			exit(EXIT_FAILURE);
		}
		printf("Enter the amount of fuel used in gallons: ");
		if(scanf("%lf", &consumption) != 1) {
			printf("Error: invalid value.\n");
			exit(EXIT_FAILURE);
		}
	}
	else {
		printf("Enter the distance traveled in kilometers: ");
		if(scanf("%lf", &distance) != 1) {
			printf("Error: invalid value.\n");
			exit(EXIT_FAILURE);
		}
		printf("Enter the amount of fuel used in liters: ");
		if(scanf("%lf", &consumption) != 1) {
			printf("Error: invalid value.\n");
			exit(EXIT_FAILURE);
		}
	}
}
void show_info()
{
	if(mode)
		printf("Fuel consumption = %.1lf mpg\n", distance / consumption);
	else
		printf("Fuel consumption = %.1lf l/%d km\n",
		(consumption * HUNDRED) / distance, HUNDRED);
}
