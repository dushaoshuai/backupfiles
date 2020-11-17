// disperse_from_one_point.c -- an interesing program
#include <stdio.h>

void call_just_one_line(int rows); // to call just_one_line function to print many lines of asterisks
void just_one_line(int len_line); // print just one line of asterisks

int main(void)
{
	int rows;
	while (scanf("%d", &rows) == 1)
		call_just_one_line(rows);
	return 0;
}

void call_just_one_line(int rows)
{
	for (; rows > 0; just_one_line(rows), rows--);
}

void just_one_line(int len_line)
{
	int i;
	for (i = 1; i <= len_line; putchar('*'), i++) // print '*'
	{
		int m;
		for (m = 1; m <= (len_line - i) / 2 + 1 ; m++) // print particular number of spaces befor
			putchar(' '); 			       // each '*'
	}
	putchar('\n');
}
