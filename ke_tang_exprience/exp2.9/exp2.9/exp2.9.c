#include<stdio.h>
int main()
{
	int n;
	int i = 1;
	scanf_s("%d", &n);
	while (i <= n)
	{
		for (int k = 1;k <= n - i;k++)
		{
			printf(" ");
		}
		for (int m = 1;m <= 2 * i - 1;m++)
		{
			printf("*");
		}
		printf("\n");
		i++;
	}
	return 0;
}

	