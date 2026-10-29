#include<stdio.h>
#define N 10
int main()
{
	int i, j, k, tmp;
	int a[N] = { 0 };
	printf("input 10 number:");
	for (i = 0;i < N;i++)
		scanf_s("%d", &a[i]);
	for (i = 0;i < N;i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0;i < N - 1;i++)
	{
		for (j = 0;j < N - i - 1;j++)
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		printf("第 %d 次冒泡后，序列为：", i + 1);//写i+1就不会改变单次循环后i的保存值
		for (k = 0;k < N;k++)//换一个帮忙计数的变量，不要用i或者j影响单次循环后的保存值
			printf("%d ", a[k]);
		printf("\n");
	}
	for (i = 0;i < N;i++)
		printf("%d ", a[i]);
	return 0;
}