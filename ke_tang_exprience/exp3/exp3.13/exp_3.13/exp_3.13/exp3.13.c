#include<stdio.h>
void main()
{
int key, i, j, k;
printf("请输入你共需要多少行：");
scanf_s("%d", &key);
for (i = 0;i < key;i++)
{
	for (j = 0;j < key - i;j++)
	{
		printf(" ");
	}
	for (k = 0;k < 2*i - 1;k++)
	{
		printf("*");
	}
	printf("\n");
}
printf("\n");
for (i = 0;i < key;i++)
{
	for (j = 0;j < i;j++)
	{
		printf(" ");
	}
	for (k = 0;k <2*(key - i)-1;k++)
	{
		printf("*");
	}
	printf("\n");
}
printf("\n");
for (i = 0;i < key;i++)
{
	for (j = 0;j <= key - i;j++)
	{
		printf(" ");
	}
	for (k = 0;k < i;k++)
	{
		printf("*");
	}
	printf("\n");
}
}