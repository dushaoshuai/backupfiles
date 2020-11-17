// function.c -- function prototype and definition
#include <stdio.h>

int imin(); 			// pre-ANSI C scheme for declaring function
// int imax(int, int); 		// ANSI prototype

int imax(int n, int m) { return n < m ? m : n; }

int main(void)
{
	printf("The lesser of %d and %d is %d\n", 3, 5, imin(3.0, 5.0));
	printf("The lesser of %d and %d is %d\n", 3, 5, imin(3, 5));
	printf("The maximum of %d and %d is %d\n", (int)3.0, (int)5.0, imax(3.0, 5.0));
	printf("The maximum of %d and %d is %d\n", (int)3.0, (int)5.0, imax(3, 5));
	return 0;
}

int imin(n, m)
int n, m; 
{
	return n < m ? n : m;
}

// int imax(int n, int m)
// {
// 	return n < m ? m : n;
// }
