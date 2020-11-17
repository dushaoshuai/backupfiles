// P296 7 -- Write a program that requests the hours worked in a week and then prints the gross pay,
// the taxes, and the net pay.

#include <stdio.h>

#define PAY_RATE_BASIC 10.0 
#define PAY_RATE_EXCESS 15.0
#define PAY_fisrt_40_hour 400.0 	// actually basic work hours should be defined as a constant

#define TAX_RATE_FIRST_300 0.15
#define TAX_RATE_300_450 0.2
#define TAX_RATE_EXCESS_450 0.25
#define TAX_300 300 * TAX_RATE_FIRST_300
#define TAX_450 (TAX_300 + 150 * TAX_RATE_300_450)

int main(void)
{
	float hour, gross_pay, taxes;
	printf("Enter your hours worked in a week: ");
	scanf("%f", &hour);

	if (hour <= 40)
	{
		gross_pay = hour * PAY_RATE_BASIC;
		if (gross_pay <= 300) 
			taxes = gross_pay * TAX_RATE_FIRST_300;
		else 
			taxes = TAX_300 + (gross_pay - 300) * TAX_RATE_300_450;
	}		
	else if (hour > 40)	
	{
		gross_pay = PAY_fisrt_40_hour + (hour - 40) * PAY_RATE_EXCESS;
		if (gross_pay <= 450)
			taxes = TAX_300 + (gross_pay - 300) * TAX_RATE_300_450;
		else 
			taxes = TAX_450 + (gross_pay - 450) * TAX_RATE_EXCESS_450;
	}
		
	printf("You worked %.2f hours in a week.\n", hour);
	printf("Your gross pay is $%.2f, taxes is $%.2f, your net pay is $%.2f.\n", 
		gross_pay, taxes, gross_pay - taxes);

	return 0;
}
