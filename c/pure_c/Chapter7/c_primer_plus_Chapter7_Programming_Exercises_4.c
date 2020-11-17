// P296 4 Using if else statements, write a program that reads input up to #, replaces each period with an  exclamation mark, replaces each exclamation mark initially present with two exclamation marks, and reports  at the end the number of substitutions it has made.

#include <stdio.h>
int main(void)
{
	char ch;
	int substi_count = 0; 		// one counter to count the number of substitutions
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')	
		{
			putchar('!');	
			substi_count++;
		}
		else if (ch == '!')
		{
			putchar('!');	
			putchar('!');	
			substi_count++;
		}
		else
			putchar(ch);
	}
	printf("\nI have made %d substitutions.\n", substi_count);
	return 0;
}
