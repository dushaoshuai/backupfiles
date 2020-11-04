#include <stdio.h>
#include <string.h>

int main(void)
{
	char first_name[20], last_name[20];
	scanf("%s %s", first_name, last_name);

	printf("%s %s\n", first_name, last_name);
	printf("%7zd %8zd\n", strlen(first_name), strlen(last_name));

	printf("%s %s\n", first_name, last_name);
	printf("%-7zd %-8zd\n", strlen(first_name), strlen(last_name));

	return 0;
}
