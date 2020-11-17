#include <stdio.h>

int main(void)
{
	int num = 0;
	int square;
	printf("num 	square\n");
	printf("%2d %10d\n", num, num * num);
	while (++num < 21)
	{
		printf("%2d %10d\n", num, num * num);
	}
	return 0;
}
