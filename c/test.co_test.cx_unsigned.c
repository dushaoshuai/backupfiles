// %o %x %X can output unsigned integer, output negative integer would lead an error

#include <stdio.h>

int main(void)
{
	int int_a = 40;
	int int_b = -40;
	unsigned unsigned_c = 40;

	printf("%o %o %o\n", int_a, int_b, unsigned_c);
	return 0;
}
