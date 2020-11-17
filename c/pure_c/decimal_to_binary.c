// decimal_to_binary.c -- convert decimal number to binary number
#include <stdio.h>

void to_binary(unsigned long);

int main(void)
{
	unsigned long n;
	while(scanf("%lu", &n) == 1)
	{
		to_binary(n);
		putchar('\n');
	}
	return 0;
}

void to_binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 1 ? '1' : '0'); 	// if single quotes are omited, then putchar() will print characters
					// corresponding to 0 or 1 stored in the ASCⅡcode
}
