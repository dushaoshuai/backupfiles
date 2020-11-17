#include <stdio.h>

int main(void)
{
	int ch;
	printf("Enter a character:\n");
	while (scanf("%d", &ch) == 1)
	;
	printf("char = %c\n", ch);
	return 0;
}
