#include<stdio.h>
int isprime(int n)
{
	int flag = 1;
	for (int i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void judge(int n)
{
	int i, j, mark = 0;
	for (i = 2;i <= n / 2;i++)
	{
		/*	for (j = 2;j < i;j++)
				if (i % j != 0 && (n-i)%j != 0)
				{
					flag = 1;
					break;
				}错误的，比如25和23无法让flag=1，但是25不是质数
				判断一个数是不是质数比较复杂，详见另开的一个函数
		}*/
		if (isprime(i) == 1 && isprime(n - i) == 1)
		{
			mark = 1;//善用标记变量，可以去掉好多麻烦，常见于整体完全分析和结果最后归总
			break;
		}
	}
	if(mark==0)
		printf("不能");
	if (mark == 1)
		printf("能,%d=%d+%d", n, i, n - i);
}
void main()
{
	int key;
	printf("请输入一个数：");
	scanf_s("%d", &key);
	judge(key);
}