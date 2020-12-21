/* checking integer and floating-point variables to overflow and underflow
   filename: Ch3Ex1.c
   ver 1.0
   Alexandr Kravtsov */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

#define ZERO 0

int main()
{
	/* integer types */
	int i_value_to_check, correct_enter;
	printf("Checking integer variables.\n"
		   "Enter any integer number: ");
	correct_enter = scanf(" %d", &i_value_to_check);
	if(correct_enter != 1) {
		printf("Error enter. Exit...\n");
		return 1;
	}

	unsigned char uch_lower_limit = ZERO - i_value_to_check;
	unsigned char uch_upper_limit = UCHAR_MAX + i_value_to_check;
	printf("%d <= unsigned char limit <= %u\n", ZERO, UCHAR_MAX);
	printf("uch_lower_limit-%d = %u\n"
		   "uch_upper_limit+%d = %u\n\n", i_value_to_check, uch_lower_limit,
										  i_value_to_check, uch_upper_limit);

	signed char sch_lower_limit = SCHAR_MIN - i_value_to_check;
	signed char sch_upper_limit = SCHAR_MAX + i_value_to_check;
	printf("%d <= signed char limit <= %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("sch_lower_limit-%d = %d\n"		
		   "sch_upper_limit+%d = %d\n\n", i_value_to_check, sch_lower_limit,
										  i_value_to_check, sch_upper_limit);
	
	unsigned short ush_lower_limit = ZERO - i_value_to_check;
	unsigned short ush_upper_limit = USHRT_MAX + i_value_to_check;
	printf("%d <= unsigned short limit <= %u\n", ZERO, USHRT_MAX);
	printf("ush_lower_limit-%d = %u\n"
		   "ush_upper_limit+%d = %u\n\n", i_value_to_check, ush_lower_limit,
										  i_value_to_check, ush_upper_limit);

	signed short ssh_lower_limit = SHRT_MIN - i_value_to_check;
	signed short ssh_upper_limit = SHRT_MAX + i_value_to_check;
	printf("%d <= signed short limit <= %d\n", SHRT_MIN, SHRT_MAX);
	printf("ssh_lower_limit-%d = %d\n"
		   "ssh_upper_limit+%d = %d\n\n", i_value_to_check, ssh_lower_limit,
										  i_value_to_check, ssh_upper_limit);


	unsigned int ui_lower_limit = ZERO - i_value_to_check;
	unsigned int ui_upper_limit = UINT_MAX + i_value_to_check;
	printf("%d <= unsigned int limit <= %u\n", ZERO, UINT_MAX);
	printf("ui_lower_limit-%d = %u\n"
		   "ui_upper_limit+%d = %u\n\n", i_value_to_check, ui_lower_limit,
										 i_value_to_check, ui_upper_limit);

	signed int si_lower_limit = INT_MIN - i_value_to_check;
	signed int si_upper_limit = INT_MAX + i_value_to_check;
	printf("%d <= signed int limit <= %d\n", INT_MIN, INT_MAX);
	printf("si_lower_limit-%d = %d\n"
		   "si_upper_limit+%d = %d\n\n", i_value_to_check, si_lower_limit,
										 i_value_to_check, si_upper_limit);
	
	unsigned long ul_lower_limit = ZERO - i_value_to_check;
	unsigned long ul_upper_limit = ULONG_MAX + i_value_to_check;
	printf("%d <= unsigned long limit <= %lu\n", ZERO, ULONG_MAX);
	printf("ul_lower_limit-%d = %lu\n"
		   "ul_upper_limit+%d = %lu\n\n", i_value_to_check, ul_lower_limit,
										  i_value_to_check, ul_upper_limit);

	signed long sl_lower_limit = LONG_MIN - i_value_to_check;
	signed long sl_upper_limit = LONG_MAX + i_value_to_check;
	printf("%ld <= signed long limit <= %ld\n", LONG_MIN, LONG_MAX);
	printf("sl_lower_limit-%d = %ld\n"
		   "sl_upper_limit+%d = %ld\n\n", i_value_to_check, sl_lower_limit,
										  i_value_to_check, sl_upper_limit);

/******************************************************************************/

	/* floating-point types */
	printf("\nChecking a float variable.\n"); 
	printf("Radix of exponent representation = %d\n"
		   "Number of digits in the significand = %d\n", FLT_RADIX,
														 FLT_MANT_DIG);
	int i = -3;
	int limit = 3;	
	for(; i <= limit; i++) {
		printf("2^24%+d = %f\n", i,
							   powf((float)FLT_RADIX, (float)FLT_MANT_DIG) + i);
	}
	
	float fl_upper_limit = 3.4e38f;
	printf("\n2^128 = %f\n"
		   "3.4e38f * 10.0f = %e\n", powf((float)FLT_RADIX, 
									   	  (float)FLT_MAX_EXP),
									 fl_upper_limit * 10.0f);
	printf("\nthe loss of the value of the last bit:\n");	
	float fl_lower_limit = 1.111111e-35f;
	limit = 10;
	for(i = 1; i <= limit; i++) {
		printf("%2d) %e\n", i, fl_lower_limit);
		fl_lower_limit /= 10.0f;
	}
	float fl_digits_in_significand = 0.0f;
	float number = 0.00000007f;
	printf("\n0.000000f + 0.00000007f:\n");
	limit = 9;
	for(i = 1; i <= limit; i++) {
		printf("%2d) %f + %f = %f\n", i, fl_digits_in_significand,
									  number, fl_digits_in_significand+number);
		fl_digits_in_significand += number;
		number *= 10.0f;
	}

/******************************************************************************/

	printf("\n\nChecking a double variable.\n");
	printf("Radix of exponent representation = %d\n"
		   "Number of digits in the significand = %d\n", FLT_RADIX,
														 DBL_MANT_DIG);
	int dbl_i = -3;
	int dbl_limit = 3;
	for(; dbl_i <= dbl_limit; dbl_i++) {
		printf("2^53%+d = %f\n", dbl_i, pow((double)FLT_RADIX,
											(double)DBL_MANT_DIG)+dbl_i);
	}
	double dbl_upper_limit = 3.4e307;
	printf("\n2^1024 = %f\n"
		   "3.4e307f * 10.0f = %e\n", pow((double)FLT_RADIX, 
										  (double)DBL_MAX_EXP),
									  dbl_upper_limit * 10.0);
	printf("\nthe loss of the value of the last bit:\n");
	double dbl_lower_limit = 1.111111e-308;
	dbl_limit = 17;
	for(dbl_i = 1; dbl_i <= dbl_limit; dbl_i++) {
		printf("%2d) %e\n", dbl_i, dbl_lower_limit);
		dbl_lower_limit /= 10.0;
	}
	double dbl_digits_in_significand = 0.0;
	double dbl_number = 0.00000007;
	printf("\n0.000000 + 0.00000007:\n");
	dbl_limit = 25;
	for(dbl_i = 1; dbl_i <= dbl_limit; dbl_i++) {
		printf("%2d) %f + %f = %f\n", dbl_i, dbl_digits_in_significand,
									  dbl_number, 
									  dbl_digits_in_significand + dbl_number);
		dbl_digits_in_significand += dbl_number;
		dbl_number *= 10.0;
	}

/******************************************************************************/

	printf("\n\nChecking a long double variable.\n"); 
	printf("Radix of exponent representation = %d\n"
		   "Number of digits in the significand = %d\n", FLT_RADIX,
														 LDBL_MANT_DIG);
	int ldbl_i = -3;
	int ldbl_limit = 3;
	for(; ldbl_i <= ldbl_limit; ldbl_i++) {
		printf("2^64%+d = %Lf\n", ldbl_i,
									   powl((long double)FLT_RADIX,
										    (long double)LDBL_MANT_DIG)+ldbl_i);
	}
	long double ldbl_upper_limit = 3.4e4931L;                          
	printf("\n2^16384 = %Lf\n"                                         
		   "3.4e4931f * 10.0f = %Le\n", powl((long double)FLT_RADIX,   
										     (long double)LDBL_MAX_EXP),
									    ldbl_upper_limit * 10.0L);

	printf("\nthe loss of the value of the last bit:\n");
	long double ldbl_lower_limit = 1.111111e-4931L;
	ldbl_limit = 20;
	for(ldbl_i = 1; ldbl_i <= ldbl_limit; ldbl_i++) {
		printf("%2d) %Le\n", ldbl_i, ldbl_lower_limit);
		ldbl_lower_limit /= 10.0L;
	}
	long double ldbl_digits_in_significand = 0.0L;
	long double ldbl_number = 0.00000007L;
	printf("\n0.000000 + 0.00000007:\n");
	ldbl_limit = 25;
	for(ldbl_i = 1; ldbl_i <= ldbl_limit; ldbl_i++) {
		printf("%2d) %Lf + %Lf = %Lf\n",ldbl_i, ldbl_digits_in_significand,
										ldbl_number, 
										ldbl_digits_in_significand+ldbl_number);
		ldbl_digits_in_significand += ldbl_number;
		ldbl_number *= 10.0L;
	}

	return 0;
}
