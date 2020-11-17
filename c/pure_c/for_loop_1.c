#include <stdio.h>

int main(void)
{
	int num;
	for (num = 1; num <= 6; num++)
		printf("%d %d\n", num, num * num * num);
	return 0;
}
