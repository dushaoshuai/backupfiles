// P296 1 counts the number of spaces/num_newline/other characters read
#include <stdio.h>

int main(void)
{
	int num_space, num_newline, num_other; /* declare three int variables to counts the number of */
					       /* spaces/num_newline/other characters read */ 
	num_space = num_newline = num_other = 0; /* three variables are all assigned the value 0 */

	int nu;
	while ((nu = getchar()) != '#') /* when the character read isn't '#', do the while loop */
	{
		switch (nu)			
		{
			case 32 : num_space++; /* the ASCⅡcode of space character is 32 */
				  break;
			case 10 : num_newline++; /* the ASCⅡcode of num_newline character is 10 */
				  break;
			default : num_other++;
		}
	}
	
	printf("num_space : %d, num_newline : %d, num_other : %d\n", num_space,
		num_newline, num_other);

	return 0;
}
