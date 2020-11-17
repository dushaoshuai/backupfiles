#include <stdbool.h>
#include <stdio.h> 			// can use bool instead of the keyword _Bool, 								       and the identifiers true and false instead of 1 and 0

int main(void)
{
	int num, div;
	bool isPrime; 			// a flag for the programe to know if the integer input is a prime
	printf("enter an integer fo it's divisors, q to quit!\n");
	while (scanf("%d", &num) == 1)
	{
		for (div = 2, isPrime = true; div * div <= num; div++) // if program flow never gets inside 									      the if statement, viriable isPrime 									  will be ture enentually 
			if (num % div == 0)
			{
				if (div == num / div)
					printf("%d is divisible by %d\n", num, div);
				else
					printf("%d is divisible by %d %d\n", num, div, num / div);
				isPrime = false; 		// if the integer isn't a prime, viriable 								       isPrime will be false
			}
			if (isPrime && num != 1)  		// exclude 1 from the prime list
				printf("%d is a prime\n", num); // inform the user if the integer is a prime
		printf("enter an integer fo it's divisors, q to quit!\n");
	}
	return 0;
}
