// P296 2 print each input character and its ASCⅡdecimal code, print eight character-code pairs per line

#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		printf("%c %3d  ", ch, ch);
		count++;	
		if (count % 8 == 0) 	// print a newline for every eight cycles of the loop
			putchar('\n');
	}
	return 0;
}
