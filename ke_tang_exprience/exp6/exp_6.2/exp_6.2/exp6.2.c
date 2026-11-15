#include<stdio.h>
void Draw(int n);//注意函数【声明】的格式，并且声明里的n是形参
void main()
{
	int m;//主函数里的变量是实参
	printf("请输入的 3-6 之间的一个正整数：");
	scanf_s("%d", &m);
	Draw(m);//注意函数【调用】的格式
}
void Draw(int n)//注意函数【定义】的格式
{
	int i, j;
	for (i = 0;i < n;i++)
	{
		if (i == 0 || i == n - 1)
		{
			for (j = 0;j < n;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			printf("*");
			for (j = 0;j < n - 2;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
	}
}