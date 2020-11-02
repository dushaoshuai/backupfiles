#include <stdio.h>

int main(void)
{
	printf("short has a size of %zd bytes.\n", sizeof(short));
	printf("unsigned short has a size of %zd bytes.\n", sizeof(unsigned short));

	printf("int has a size of %zd bytes.\n", sizeof(int));
	printf("unsigned int has a size of %zd bytes.\n", sizeof(unsigned int));

	printf("long int has a size of %zd bytes.\n", sizeof(long int));
	printf("unsigned long int has a size of %zd bytes.\n", sizeof(unsigned long int));

	printf("long long int has a size of %zd bytes.\n", sizeof(long long int));
	printf("unsigned long long int has a size of %zd bytes.\n", sizeof(unsigned long long int));

	printf("char has a size of %zd bytes.\n", sizeof(char));

	printf("float has a size of %zd bytes.\n", sizeof(float));
	printf("double has a size of %zd bytes.\n", sizeof(double));
	printf("long double has a size of %zd bytes.\n", sizeof(long double));

	return 0;
}


