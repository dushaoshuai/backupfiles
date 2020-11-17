// P297 accepts a positive integer as input and then displays all the prime numbers smaller than or equal to that number

#include <stdio.h>

void prime(long);  // one function to verify a prime 

int main(void)
{
	long num, i;
	printf("Enter an positive integer\n");
	printf("I will print all the prime numbers smaller than or equal to that number\n");
	printf("q to quit!\n");

	// a while loop
	while (scanf("%ld", &num) == 1)
	{
		for (i = 1; i <= num; i++)
			prime(i);
		printf("\n\nEnter next positive integer, q to quit!\n");
	}

	return 0;
}

void prime(long num)
{
	long i = 2;
	long remainder;
	
	do {
		remainder = num % i;
		i++;
	} while (remainder != 0 && i < num);

	if (remainder)
		printf("%ld  ", num);
}
