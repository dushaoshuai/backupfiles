// P297 8 -- Write a program that requests the hours worked in a week and then prints the gross pay,
// the taxes, and the net pay. - a little modification in exercises 7

#include <stdio.h>
#include <stdbool.h> 					// for uses of bool type as well as true and false as symbolic constants
#include <ctype.h> 					// for uses of isspace() function

#define TAX_RATE_FIRST_300 0.15 							// tax rate: #15% of the first $300 
#define TAX_RATE_300_450 0.2 								// 	      20% of the next $150
#define TAX_RATE_EXCESS_450 0.25 							// 	      25% of the rest
#define TAX_300 300 * TAX_RATE_FIRST_300 						// taxes for the first $300
#define TAX_450 (TAX_300 + 150 * TAX_RATE_300_450) 					// taxes for the first $450
#define STAR "****************************************************************" 	// the star line

int main(void)
{
	float pay_rate_basic; 			// basic pay rate will be selected form a menu
	char select; 				// for "switch (select)" statement, see it in line 34
	bool need_reinput, can_recycle; 	//  

	do { 					// do the whole loop while variable can_recycle is ture
		do { 				// keep inputing while input is not 1 through 5, with variable need_reinput
			// a text menu for user to select from
			printf(STAR); 	putchar('\n');
			printf("Enter the number corresponding to the desired pay rate or action:\n");
			printf("1) $8.75/hr 			2) $9.33/hr\n");
			printf("3) $10.00/hr 			4) $11.20/hr\n");
			printf("5) quit\n");
			printf(STAR); 	putchar('\n');

			// discard whitespace characters(tabs, spaces, newlines, and so on)
			do {	
				select = getchar();
			} while (isspace(select));

			switch (select)
			{
				case '1' : pay_rate_basic = 8.75;	
					   need_reinput = false;
					   can_recycle = true;
				     	   break;
				case '2' : pay_rate_basic = 9.33;
					   need_reinput = false;
					   can_recycle = true;
				 	   break;
				case '3' : pay_rate_basic = 10.00;
					   need_reinput = false;
					   can_recycle = true;
					   break;
				case '4' : pay_rate_basic = 11.20; 	
					   need_reinput = false;
					   can_recycle = true;
					   break;
				case '5' : can_recycle = false; 	  // 5 means quit, so don't need to recycle
					   need_reinput = false; 	  // also don't need reinput
					   break;
				default  : need_reinput = true; 	  // if input is something other than 1 through 5, remind 
					   printf("\nNumber 1 through 5 are desired\n"); // the users what the proper choices are
			} 
			
			while (getchar() != '\n'); 				// discard extra characters in case of wrong input

		} while (need_reinput); 					// continue loop if variable need_reinput is ture

		float pay_rate_excess =  pay_rate_basic * 1.5; 			// Overtime pay rate ( in excess of 40 hours)
		float work_hour_basic = 40.0; 					// basic working time is 40 hours
		float pay_basic_hour =  pay_rate_basic * work_hour_basic; 	// gross pay for working 40 hours

		if (can_recycle)
		{	
			float hour, gross_pay, taxes;
			printf("Enter your hours worked in a week: ");
			scanf("%f", &hour);
			while (getchar() != '\n');

			if (hour < work_hour_basic)
			{
				gross_pay = hour * pay_rate_basic;
				if (gross_pay < 300.0) 
					taxes = gross_pay * TAX_RATE_FIRST_300;
				else 
					taxes = TAX_300 + (gross_pay - 300.0) * TAX_RATE_300_450;
			}		
			else 
			{
				gross_pay = pay_basic_hour + (hour - work_hour_basic) * pay_rate_excess;
				if (gross_pay < 450.0)
					taxes = TAX_300 + (gross_pay - 300.0) * TAX_RATE_300_450;
				else 
					taxes = TAX_450 + (gross_pay - 450.0) * TAX_RATE_EXCESS_450;
			}
				
			printf("You worked %.2f hours in a week.\n", hour);
			printf("Your gross pay is $%.2f, taxes is $%.2f, your net pay is $%.2f.\n\n", 
				gross_pay, taxes, gross_pay - taxes);
		}
	} while (can_recycle); 		// do the whole loop while variable can_recycle is true
	return 0;
}
