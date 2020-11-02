#include <stdio.h>			// Header file

void one_three(void), two(void);	// a function declaration -- define two functions named one_three and two, respectively

int main(void)				// the main() function with no arguments, return an interger to the operating system
{
	printf("starting now:\n");
	one_three();			// call a user-defined function named one_three
	printf("done!\n");

	return 0;			// return 0 to the operating system
}

void one_three(void)			// define the function named one_three
{
	printf("one\n");
	two();				// call a user-defined function named two1
	printf("three\n");
}

void two(void)				// define the function named two
{
	printf("two\n");
}


