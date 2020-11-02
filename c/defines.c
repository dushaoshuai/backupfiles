// defines.c -- use defined constants from limit.h and float.

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("CHAR_MAX: %d\n", CHAR_MAX);
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("SCHAR_MAX: %d\n", SCHAR_MAX);
	printf("SCHAR_MIN: %d\n", SCHAR_MIN);
	printf("UCHAR_MAX: %d\n", UCHAR_MAX);

	printf("Number of bits in the mantissa of a float: %d\n", FLT_MANT_DIG);
	printf("Minimum number of significant decimal digits for a float: %d\n", FLT_DIG);
	printf("Minimum base-10 negative exponent for a float with a full set of significant figures: %d\n", FLT_MIN_10_EXP);
	printf("Maximum base-10 positive exponent for a float: %d\n", FLT_MAX_10_EXP);
	printf("Minimum value for a positive float retaining full percision: %e\n", FLT_MIN);
	printf("Maximum value for a positive float: %e\n", FLT_MAX);
	printf("Difference between 1.00 and the least float value greater than 1.00: %e\n", FLT_EPSILON);

	return 0;
}
