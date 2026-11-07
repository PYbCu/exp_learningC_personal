#include<stdio.h>
#define N 10
int main()
{
	int i, j, min, tmp;
	int a[N] = { 0 };
	printf("input 10 number:");
	for (i = 0;i < N;i++)
		scanf_s("%d", &a[i]);
	for (i = 0;i < N;i++)
		printf("%d ", a[i]);
	printf("\n");
	for (i = 0;i < N - 1;i++)
	{
		min = i;
		for (j = i + 1;j < N;j++)
		{
			if (a[min] > a[j])
				min = j;
		}
		if (min != i)
		{
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
		}
	}
	for (i = 0;i < N;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
	

