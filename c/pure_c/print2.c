// print2.c -- more printf() properties, P70

#include <stdio.h>

int main(void)
{
	unsigned un = 3000000000;		/* system with 32-bit int */
	short end = 200;			/* and 16-bit short */
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}
