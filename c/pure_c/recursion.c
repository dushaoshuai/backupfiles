// recursion.c -- one simple program for recursion 
#include <stdio.h>

void up_and_down(int);

int main(void)
{
	up_and_down(1);
	return 0;
}

// void up_and_down(int num)
// {
// 	while (num <= 4)
// 	{
// 		printf("level %d: num location %p\n", num, &num);
// 		up_and_down(num + 1);
// 		printf("Level %d: num location %p\n", num, &num);
// 	}
// }

// oid up_and_down(int num)
// 
//        while (num <= 4)
//        {
//        	printf("level %d: num location %p\n", num, &num);
//        	up_and_down(num + 1);
//        	printf("Level %d: num location %p\n", num, &num);
//        	return;
//        }


// void up_and_down(int num)
// {
//         if (num <= 4)
//         {
//         	printf("level %d: num location %p\n", num, &num);
//         	up_and_down(num + 1);
//         	printf("Level %d: num location %p\n", num, &num);
//  		return;
//         }
// }

void up_and_down(int num)
{
	printf("level %d: num location %p\n", num, &num);
	if (num < 4)
		up_and_down(num + 1);
	printf("Level %d: num location %p\n", num, &num);
}


