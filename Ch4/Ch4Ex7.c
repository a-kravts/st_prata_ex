/* comparison of float and double types
   filename: Ch4Ex7.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <float.h>

int main()
{
	float f_number = 1.0f/3.0f;
	double d_number = 1.0/3.0;
	long double ld_number = 1.0L/3.0L;
	printf("Number of decimal digits(float) = %d \t"
		   "Number of decimal digits(double)= %d\n", FLT_DIG, DBL_DIG);
	printf("%-35.4f \t%.4lf\n"
		   "%-35.12f \t%.12lf\n"
		   "%-35.16f \t%.17lf\n", f_number, d_number,
		   						  f_number, d_number,
		   						  f_number, d_number);	
	printf("\nNumber of decimal digits(long double) = %d\n", LDBL_DIG);
	printf("%.4Lf\n"
		   "%-35.12Lf\n"
		   "%-35.20Lf\n", ld_number, ld_number, ld_number);

	return 0;
}
