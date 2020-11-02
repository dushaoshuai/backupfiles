// platinum.c -- your weight in platinum

#include <stdio.h>

int main(void)
{
	float weight;
	float value;

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	scanf("%f", &weight);

	value = 1700.0 * weight * 14.5833;
	
	printf("Your weight in platinum is worth $%.4f.\n", value); // $ is just a symble for dollar, %f is similar to %d, .4 means displaying 4 places to the right of the decimal
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;
}
