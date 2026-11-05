#include<stdio.h>
void main()
#define N 90
{
	int i, n;
	for (i = 0;i < 5;i++)
	{
		printf("第%d次猜数，请输入一个整数：",i+1);
		scanf_s("%d", &n);
		if (n > N)
		{
			printf("你猜的价格高了\n\n");
		}
		else if (n < N)
		{
			printf("你猜的价格低了\n\n");
		}
		else
		{
			printf("You get it！\n");
			break;
		}
	}
	if (i >= 5)
		printf("Sorry!\n");
}