// badcount.c -- incorrect argument counts

#include <stdio.h>

int main(void)
{
	int a = 4;
	int b = 5;
	float c = 7.0f;
	float d = 9.0f;

	printf("%d\n", a, b);
	printf("%d %d %d\n", a, b);
	printf("%d %d\n", c, d);

	return 0;
}
