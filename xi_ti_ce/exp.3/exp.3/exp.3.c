#include<stdio.h>
int main()
{
	int i, n, sum;
	i = 1;
	sum = 1;
	for (n = 1;n <= 49;n++)
	{
		sum = sum + i + n + 1;
		i = i + n + 1;
	}
	printf("sum=%d", sum);
	return 0;
}