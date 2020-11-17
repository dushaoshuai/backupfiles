// letterhead.c -- print letterhead
#include <stdio.h>
#include "star.h"
#include <string.h>
#define GRAPH '*'
#define SPACE ' '
#define WIDTH 60
#define NAME "GIGATHINK, INC"
#define ADDRESS "101 Megabuck Plzza"
#define PLACE "Megapolis, CA 94904"

int main(void)
{
	star(GRAPH, WIDTH);	
	putchar('\n');
	star(SPACE, (WIDTH - strlen(NAME)) / 2); 
	printf("%s\n", NAME);
	star(SPACE, (WIDTH - strlen(ADDRESS)) / 2);
	printf("%s\n", ADDRESS);
	star(SPACE, (WIDTH - strlen(PLACE)) / 2);
	printf("%s\n", PLACE);
	star(GRAPH, WIDTH);
	putchar('\n');

	return 0;
}
