#include <stdio.h>

void cube(float a);

int main(void)
{
	double num;
	printf("Enter a type double number:\n");
	scanf("%lf", &num);
	cube(num);

	return 0;
}

void cube(float a)
{
	a = a * a * a;
	printf("%f\n", a);
}
