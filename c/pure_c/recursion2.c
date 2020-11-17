//recursion2.c -- print a pyramid
#include <stdio.h>

void one_line_asterisk(int);
void print_pyramid(int, int);

int main(void)
{
	int rows;
	printf("Please input one integer, I will print a pyramid in that lines, print q to quit\n");	
	while (scanf("%d", &rows) == 1) // when read an integer successfully, do while loop
	{
		while (getchar() != '\n'); // if user input a float, then discard the character after(also include) decimal point
		printf("Do you mean %d, y/n\n", rows); // if input is a float, it will be truncated to an integer
		if (getchar() == 'y') 		       // so ask if user want the integer, if not, the program will quit and will
/* call function */	print_pyramid(rows, rows);     // not do the while loop, that's obviously a downside
		printf("Please input one integer, I will print a pyramid in that lines, print q to quit\n");	
	}
	return 0;
}

void print_pyramid(int rows, int long_len)
{
	if (rows > 0)
	{
		print_pyramid(--rows, long_len); // one recursion at the very front, for every statement after it will be executed 
		int i; 				 // in reversed order
		for (i = 1; i <= (long_len - rows) / 2; putchar(' '), i++); // print particular number of spaces
		one_line_asterisk(rows); 	// call another function
	 	putchar('\n');
	}
}

void one_line_asterisk(int width)
{
	if (width > 0)
	{
		putchar('*');
		one_line_asterisk(--width); // call the function it self
	}
}
