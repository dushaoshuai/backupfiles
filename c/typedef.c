#include <stdio.h>

int main(void)
{
	typedef int abc; 	// create an alias for an existing type
	abc a = 10;
	printf("%d\n", a);
	return 0;
}
