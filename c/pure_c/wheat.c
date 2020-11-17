#include <stdio.h>
#define SQUARES 64 			// counts on a checkerboard

int main(void)
{
	const double CROP = 2E16; 	// world wheat production in wheat grains
	int count;
	double wheat_current, wheat_total;
	count = 1;
	wheat_current = wheat_total = 1.0;
	printf("square     grains       total      fraction of\n");
	printf("           added        grains     world toal\n");
	printf("%4d %13.2e %12.2e %12.2e\n", count, wheat_current, wheat_total, 						   wheat_total / CROP);
	while (++count <= SQUARES)
	{
		wheat_current = 2.0 * wheat_current;
		wheat_total = wheat_total + wheat_current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, wheat_current, wheat_total,                                                    wheat_total / CROP);
	}
	return 0;
}
