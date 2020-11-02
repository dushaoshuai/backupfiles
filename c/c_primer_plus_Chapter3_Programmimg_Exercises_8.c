#include <stdio.h>

int main(void)
{
	float pint, cup, ounce, tablespoon, teaspoon;

	printf("Enter a volume in cups: _____\b\b\b\b\b");
	scanf("%f", &cup);

	pint = cup / 2;
	ounce = cup * 8;
	tablespoon = ounce * 2;
	teaspoon = tablespoon * 3;

	printf("\nequivalent volumes in pints, ounces, tablespoons, teaspoons: %.2f, %.2f, %.2f, %.2f\n", pint, ounce, tablespoon, teaspoon);
	
	return 0;
}
