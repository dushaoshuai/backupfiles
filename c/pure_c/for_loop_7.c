#include <stdio.h>

int main(void)
{
	int num = 0;

	for (printf("Keep entering numbers!\n"); num != 6; )
		scanf("%d", &num);
	printf("Yes. That's the correct number!\n");

	return 0;
}
