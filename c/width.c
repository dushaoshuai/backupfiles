// width.c -- field widths

#include <stdio.h>
#define PAGES 959

int main(void) {
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%20d*\n", PAGES);
	printf("*%-20d*\n", PAGES);
	printf("%10d %-7d\n", PAGES, PAGES);
	printf(
	return 0;
}
