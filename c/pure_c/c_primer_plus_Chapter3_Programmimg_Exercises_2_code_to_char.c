// C Primer Plus P97 2.

#include <stdio.h>

int main(void)
{
	char char_to_print;
	int code;
	printf("Please enter an ASCⅡcode value: ___\b\b\b");
	scanf("%d", &code);
	char_to_print = code;
	printf("\n%c\n", char_to_print);
	
	return 0;
}
