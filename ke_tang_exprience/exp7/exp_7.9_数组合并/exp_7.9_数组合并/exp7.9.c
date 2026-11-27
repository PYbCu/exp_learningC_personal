#include<stdio.h>
#include<string.h>

void main()
{
	int a[100] = { 0 }, b[100] = { 0 }, c[200] = { 0 };
	//三指针法（巧妙利用a,b两数组都已排好序的结果）
	int n, m;
	int i = 0, j = 0, k = 0;
	printf("请输入第一个数组长度：");
	scanf_s("%d",&n);
	printf("请输入第一个数组：");
	for (int t = 0;t < n;t++)
		scanf_s("%d", &a[t]);
	printf("请输入第二个数组长度：");
	scanf_s("%d", &m);
	printf("请输入第二个数组：");
	for (int t = 0;t < m;t++)
		scanf_s("%d", &b[t]);
/*	for (int j = 0;j < m;j++)
	{
		a[n] = b[j];
		n++;
	}
	for (int k = 0;k < n - 1;k++)
	{
		for (int t = 0;t < n - 1 - k;t++)
		{
			if (a[t] > a[t + 1])
			{
				int tmp = a[t];
				a[t] = a[t + 1];
				a[t + 1] = tmp;
			}
		}
	}
	printf("合成后的新数组为：");
	for (int k = 0;k < n;k++)
	{
		printf("%d ", a[k]);
	}*/
	//整体再冒泡
	while (i < n && j < m)
	//比较两个数组，依次放入合并数组
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}
	while (i < n)
	//处理A中剩余的数组
		c[k++] = a[i++];
	while (j < m)
    //处理B中剩余的数组
		c[k++] = b[j++];
	printf("合成后的新数组为：");
	for (int t = 0;t < k ;t++)
	{
		printf("%d ", c[t]);
	}
	printf("\n");
}