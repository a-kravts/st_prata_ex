/* Function sorts in ascending order the contents of three variables
   filename: Ch9Ex6.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>

void sort_in_ascending_order(double *a, double *b, double *c);

int main()
{
	double first_number, second_number, third_number; 
	int correct_enter;
	
	printf("Enter three float-point numbers:\n"),
	correct_enter = scanf("%lf%lf%lf", &first_number, &second_number, 
													  &third_number); 
	if(correct_enter != 3) {
		printf("Error enter!\nExit\n");
		return 1;
	}
	sort_in_ascending_order(&first_number, &second_number, &third_number);
	printf("First number  = %lf\n"
		   "Second number = %lf\n"
		   "Third number  = %lf\n", first_number, second_number, third_number);
	
	return 0;
}	

void sort_in_ascending_order(double *a, double *b, double *c)
{
	double tmp_a = *a;
	double tmp_b = *b;
	double tmp_c = *c;
	
	if(tmp_a > tmp_b) {
		if(tmp_a > tmp_c) {
			*c = tmp_a;
			if(tmp_b > tmp_c)
				*a = tmp_c;
			else {
				*a = tmp_b;
				*b = tmp_c;
			}
		}
		else {
			*b = tmp_a;
			*a = tmp_b;
		}
	}
	else {
		if(tmp_b > tmp_c) {
			*c = tmp_b;
			if(tmp_c > tmp_a)
				*b = tmp_c;
			else {
				*b = tmp_a;
				*a = tmp_c;
			}
					
		}
	}
}
