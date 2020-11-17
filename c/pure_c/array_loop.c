#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char array[] = "abcdefg";
	printf("%zd %zd\n", strlen(array), sizeof(array));
	printf("%c\n", array[0]);
	int i;
	for (i = 0; i < strlen(array); i++)
		printf("array[%d] = %c\n", i, array[i]);
	return 0;
}
