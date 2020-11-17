// P296 3 reads integers until 0 is entered. After input terminates, the program should report the total
// number of even integers (excluding the 0) entered, the average value of the even integers, the total 
// number of odd integers, and the average value of the odd integers

#include <stdio.h>

int main(void)
{
	int num;
	int even_count, even_total, odd_count, odd_total;
	even_count = 1; // if input is 0, while loop will terminate, and count for even numbers won't plus 			       one, but 0 have to be counted, so the count for even numbers begin form 1
	even_total = odd_count = odd_total = 0;

	while (scanf("%d", &num) == 1 && num != 0) // when scanf() successfully read an integer and the
	{ 					   // integer isn't 0, do the while loop
		if (num % 2 == 0)  // if num is an even number, do the if statement
		{
			even_count++;	
			even_total += num;
		}
		else 		   // if num is an odd number, do the else statement
		{
			odd_count++;	
			odd_total += num;
		}
	}
	/* integer devide integer is integer, there will be no fractional parts, the results are not */
	/* average value, so use typecast (float) to convert integer devisions to float number devisions */
	printf("total number of even integers is %d\n", even_count); 			  
	printf("average value of even integers is %.2f\n", (float)even_total / even_count); // %.2f to print
	printf("total number of odd integers is %d\n", odd_count); 			    // float point  
	printf("average value of odd integers is %.2f\n", (float)odd_total / odd_count);    // numbers with
											// 2 decimal numbers
	return 0;
}
