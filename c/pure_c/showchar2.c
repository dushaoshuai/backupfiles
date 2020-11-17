// showchar2.c -- show characters in rows and columns
#include <stdio.h>
void display(char ch, int rows, int cols);

int main(void)
{
	int ch, rows, cols;
	printf("Please enter one character and two integer\n");
	printf("press return to quit!\n");
	while ((ch = getchar()) != '\n')
	{
		if(scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while(getchar() != '\n')
			continue;
		printf("Please enter one character and two integer\n");
		printf("press return to quit!\n");
	}
	return 0;
}

void display(char ch, int rows, int cols)
{
	int lines, columns;

	for (lines = 1; lines <= rows; lines++, putchar('\n'))
		for (columns = 1; columns <= cols; columns++)
			putchar(ch);
}
