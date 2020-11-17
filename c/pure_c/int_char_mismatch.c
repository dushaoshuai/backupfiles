// int_char_mismatch.c -- some mismatched integer/char conversions -- some test

#include <stdio.h>

int main(void) {
	printf("%hd %d\n", 5, 5); 
	printf("%d %c\n", 82, 82);

	printf("%c\n", 336);
	printf("%c\n", 65618);
	printf("%hd\n", 65618);
	printf("%hd\n", -65618);
	
	unsigned short unsigned_short_a = 32767;
	unsigned short unsigned_short_b = 32768;
	unsigned short unsigned_short_c = 65535;
	printf("%hd %hd %hd\n", unsigned_short_a, unsigned_short_b, unsigned_short_c);
	printf("%hd %hd %hd\n", 32767, 32768, 65535);

	return 0;
}
