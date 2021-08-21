#include "set_mode_get_show_info.h"
#include <stdio.h>
#include <stdlib.h>

#define HUNDRED 100

static void get_info(int mode);
static void show_info(int mode, double distance, double consumption);

void set_mode(int selected_mode, int previous_mode)
{
	int mode;
	
	if(selected_mode != 0 && selected_mode != 1) {
		mode = previous_mode;
		printf("Invalid mode. Mode %d(%s) in use.\n", mode,
		mode ? "US" : "metric");
	}
	else
		mode = selected_mode;
	get_info(mode);
}
static void get_info(int mode)
{
	double distance;
	double consumption;
	
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
	show_info(mode, distance, consumption);
}
static void show_info(int mode, double distance, double consumption)
{
	if(mode)
		printf("Fuel consumption = %.1lf mpg\n", distance / consumption);
	else
		printf("Fuel consumption = %.1lf l/%d km\n",
		(consumption * HUNDRED) / distance, HUNDRED);
}
