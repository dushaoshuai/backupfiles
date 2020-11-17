// star.c -- print nth characters
#include <stdio.h>
#include "star.h"

void star(char ch, int count)
{
	int width;
	for (width = 1; width <= count; width++)
		putchar(ch);
}
