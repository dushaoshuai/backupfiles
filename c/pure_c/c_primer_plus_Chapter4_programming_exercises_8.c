#include <stdio.h>
#define gallon_to_liter 3.785
#define mile_to_km 1.609

int main(void)
{
	float miles, gallons;
	scanf("%f %f", &miles, &gallons);
	printf("miles-per-gallon: %.1f\n", miles / gallons);
	printf("liters-per-100km: %.1f\n", gallons * gallon_to_liter / ( miles * mile_to_km / 100));
	
	
	return 0;
}
