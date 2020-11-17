#include <stdio.h>

void Temperatures(double fahren);

int main(void)
{
	double fah;
	int scanf_return;
	printf("Enter a Fahrenheit temperature (double)(q or nonnumeric value to quit!):\n");
	scanf_return = scanf("%lf", &fah);
	while (scanf_return == 1)
	{
		Temperatures(fah);
		printf("Enter a Fahrenheit temperature (double)(q or nonnumeric value to quit!):\n");
		scanf_return = scanf("%lf", &fah);
	}	
	return 0;
}

void Temperatures(double fahren)
{
	const double Celsius_1 = 5.0 / 9.0;	
	const double Celsius_2 = 32.0;
	const double Kelvin = 273.16;
	double celsius, kelvin;
	celsius = Celsius_1 * ( fahren - Celsius_2);
	kelvin = celsius + Kelvin;
	printf("Fahrenheit: %.2f\nCelsius: %.2f\nKelvin: %.2f\n", fahren, celsius, kelvin);
}

