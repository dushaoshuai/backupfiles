#include <stdio.h>

int main(void)
{
	float height_inch, height_cm;
	printf("Enter your height in centimetes: ___\b\b\b");
	scanf("%f", &height_cm);
	height_inch = height_cm / 2.54;
	printf("\nYour height in inches: %.2f\n", height_inch);
	
	return 0;
}
