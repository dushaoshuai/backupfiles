// letterhead.c -- print letterhead
#include <stdio.h>
#include "asterisks_line.h"

int main(void)
{
	star();
	printf("GIGATHINK, INC\n");
	printf("101 Megabuck Plzza\n");
	printf("Megapolic, CA 94904\n");
	star();

	return 0;
}
