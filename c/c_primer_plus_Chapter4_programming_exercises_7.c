#include <stdio.h>
#include <float.h>

int main(void) {
	double double_a = 1.0/3.0;
	float float_b = 1.0/3.0;
	printf("double: %.4f %.12f %.16f\n", double_a, double_a, double_a);
	printf("float: %.4f %.12f %.16f\n", float_b, float_b, float_b);
	printf("%d %d\n", FLT_DIG, DBL_DIG);
	return 0;
}
