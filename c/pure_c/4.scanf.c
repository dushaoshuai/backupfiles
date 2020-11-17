#include <stdio.h>

int main()
{
	int price;
	printf("请输入价格（元）：");
	scanf("%d", &price);

	int change;
	change = 100 - price;

	printf("您的找零为：%d 元", change);

	return 0;
}
