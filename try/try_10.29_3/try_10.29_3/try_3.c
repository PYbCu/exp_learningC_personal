#include<stdio.h>
#define N 9
int main()
{
	int i, j, x;
	int a[N + 1] = { 2,4,6,8,10,12,14,16,18 };
	printf("input a number:");
	scanf_s("%d", &x);
	printf("\n");
	for (i = 0;i < N;i++)
	{
		if (x < a[i])
			break;
	}
	for (j = N+1;j >i;j--)
		a[j] = a[j-1];
	a[i] = x;
	for (i = 0;i < N + 1;i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}