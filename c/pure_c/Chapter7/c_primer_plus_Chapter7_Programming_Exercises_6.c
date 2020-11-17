// P296 6 --  a program that reads input up to # and reports the number of times that the sequence ei occurs

#include <stdio.h>

int main(void)
{
	char ch_previous, ch_last;
	ch_previous = ch_last = 'y'; //ch_previous and ch_last both are not 'e' or 'i' at the very beginnign
	int count = 0;

	while ((ch_last = getchar()) != '#')
	{
		if (ch_previous == 'e' && ch_last == 'i')	
			count++;
		ch_previous = ch_last; // give ch_previous the value of ch_last, the ch_last conitue reading
	} 			       // new character

	printf("The sequence ei occurs %d times\n", count);
	return 0;
}
