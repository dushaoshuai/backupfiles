// integer overflow -- experiment
// Fri Oct 30 08:28:39 PM CST 2020

#include <stdio.h>

int main(void)
{
	unsigned overflow_unsigned_minimum = 0;
	printf("overflow_unsigned_minimum: %u %u %u\n", overflow_unsigned_minimum, overflow_unsigned_minimum - 1, overflow_unsigned_minimum - 2);

	unsigned overflow_unsigned_maximum = 4294967295;
	printf("overflow_unsigned_maximum: %u %u %u\n", overflow_unsigned_maximum, overflow_unsigned_maximum + 1, overflow_unsigned_maximum + 2);

	int overflow_int_minimum = -2147483648;
	printf("overflow_int_minimum: %d %d %d\n", overflow_int_minimum, overflow_int_minimum - 1, overflow_int_minimum - 2);

	int overflow_int_maximum = 2147483647;
	printf("overflow_int_maximum: %d %d %d\n", overflow_int_maximum, overflow_int_maximum + 1, overflow_int_maximum + 2);

	return 0;
}
