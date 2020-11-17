// asterisks_line.c -- print 40 asterisks one time 

#include <stdio.h>
#include "asterisks_line.h"

void star(void)
{
	int count;
	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	printf("\n");
}
