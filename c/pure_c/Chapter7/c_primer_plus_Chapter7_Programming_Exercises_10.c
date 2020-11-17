// P297 10 -- calculate tax 

#include <stdio.h>
#include <ctype.h> 		// isblank()
#include <stdbool.h> 		// bool true false

#define TAX_POINT_1 17850 	
#define TAX_POINT_2 23900
#define TAX_POINT_3 29750
#define TAX_POINT_4 14875
#define TAX_RATE 0.15
#define TAX_RATE_EXCESS 0.28
#define STAR "****************************************************************"

void menu(void); 	// a text menu for user to select from

int main(void)
{
	char category;
	float tax_point;
	bool need_reinput;
	bool can_recycle; 
	float income, tax;
	do { 	// do while loop let users enter several tax cases	
		do { 		// re-input is needed when encounter wrong input
			need_reinput = false; 	// every recycle or re-input should re-assigan value to both _bool variable 
			can_recycle = true;
	      		printf("Select your tax category from the menu\n");
			printf("Your input should be 1, 2, 3, and 4 !!!\n");
			menu(); 		// call the menu() function to print a menu for user to select 

			do { 			// discard all whitespace preceding input, if any
				category = getchar();
			} while (isblank(category));
	
			switch (category)
			{
				case '1' : tax_point = TAX_POINT_1;
					   break;
				case '2' : tax_point = TAX_POINT_2;
					   break;
				case '3' : tax_point = TAX_POINT_3;
					   break;
				case '4' : tax_point = TAX_POINT_4;
					   break;
				case '5' : can_recycle = false; 	// '5' means to quit
					   break;
				default  : need_reinput = true; 	// improper input goes to case default
			}
			printf("You have choose category %c\n", category);	

			while (getchar() != '\n');	// discard all characters, this is significant to getchar() and scanf() 
			 				// in this loop and next if statement to work properly
		} while (need_reinput);	
		
		if (can_recycle)
		{
			printf("Enter your income: ");
			while (scanf("%f", &income) != 1)
			{
				printf("Please re-input your income: ");
				while (getchar() != '\n'); 	// important when input is wrong type, because scanf() put wrong  
			} 					// character back into the input, thus next time scanf() will
								// continue to read that worng character
			if (income <= tax_point)
				tax = income * TAX_RATE;
			else
				tax = tax_point * TAX_RATE + (income - tax_point) * TAX_RATE_EXCESS;

			printf("Your tax is $%.2f\n", tax);
			while (getchar() != '\n'); 	// discard all characters, this is significant to getchar() in the beginning
		} 					// of the program to work properly
	} while (can_recycle); 				// when variable can_recycle is true, do the do while loop

	return 0;
}

void menu(void)
{
	printf("%s\n", STAR);
	printf("   Category 	 	Tax\n");
	printf("1) Single 		15%% of first $17850 plus 28%% of excess\n");
	printf("2) Head of Household 	15%% of first $23900 plus 28%% of excess\n");
	printf("3) Married, Joint  	15%% of first $29750 plus 28%% of excess\n");
	printf("4) Married, Separate 	15%% of first $14875 plus 28%% of excess\n");
	printf("5) Quit\n");
	printf("%s\n", STAR);
}
