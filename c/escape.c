// escape.c -- uses escape characters

#include <stdio.h>

int main(void)
{
	float salary;

	printf("\aEnter your desired mouthly salary:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\t$%.2f a month is $%.2f year.", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}
