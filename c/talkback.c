// talkback.c -- nosy, informative program
 
#include <stdio.h>
#include <string.h>			// for strlen() prototype
#define DENSITY	62.4			/* use the C preprocessor to define the symbolic constant DENSITY */ 
					/* to represent the value 62.4 */

int main(void)
{
	int letters, size;
	float weight, volume;
	char name[40];			// name is an array of 40 chars

	printf("Hi! What's your first name?\n");
	scanf("%s", name);		// no & prefix
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);

	volume = weight / DENSITY;
	letters = strlen(name);
	size = sizeof name;

	printf("Well, %s, your volume is %f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}
