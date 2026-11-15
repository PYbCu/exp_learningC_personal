#include<stdio.h>
void judge(int n)
{
	int i, j, flag=0;
	for (i = 2;i <= n / 2;i++)
	{
		for (j = 2;j < i;j++)
			if (i % j != 0 && (n-i)%j != 0)
			{
				flag = 1;
				break;
			}
	}
	if (flag == 0)
		printf("不能");
	if (flag == 1)
		printf("能,%d=%d+%d",n,i,n-i);
}
void main()
{
	int key;
	printf("请输入一个数：");
	scanf_s("%d", &key);
	judge(key);
}