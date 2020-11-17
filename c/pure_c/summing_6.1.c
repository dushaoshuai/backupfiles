// summing.c -- sums integers entered interactively

#include <stdio.h>

int main(void)
{
	long num;
	long sum;	
	
	printf("Please input an integer to be summed ");
	printf("(q to quit): ");
	for (sum = 0L; scanf("%ld", &num) == 1; sum = sum + num)
		printf("Please enter next integer (q to quit): ");
	printf("Those integers sum to %ld.\n", sum);
	return 0;
}
