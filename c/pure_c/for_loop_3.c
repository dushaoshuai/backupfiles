#include <stdio.h>

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		printf("The ASCⅡvalue for %c is %d.\n", ch, ch);

	char chr;
	for (chr = 'A'; ch <= 'Z'; chr++) 	// There's no difference between 'a' and 'A'
		printf("The ASCⅡvalue for %c is %d.\n", chr, chr);

	return 0;
}
