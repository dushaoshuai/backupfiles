// two_func.c -- a program using two function in one file

#include <stdio.h>

void butler(void);			// ANSI/ISO C function prototyping -- a function declaration.

int main(void)
{
	printf("I will summon the bulter function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}

void butler(void)			// Start of function definition.
{
	printf("You rang, sir?\n");
}
