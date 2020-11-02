//  bases.c -- prints 100 in decimal, octal, hexdecimal

#include <stdio.h>

int main(void)
{
	int t = 100;

	printf("dec = %d, oct = %o, hex = %x\n", t, t, t);
	printf("dec = %d, oct = %#o, hex = %#x", t, t, t);

	return 0;
}
