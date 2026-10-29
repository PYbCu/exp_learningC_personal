#include<stdio.h>
int main()
{
	int f1 = 1;
	int f2 = 1;
	int f;
	int i;
	printf("%d %d ", f1, f2);
	for (i = 3;i <= 20;i++)
	{
		f = f1;
		f1 = f2;
		f2 = f1 + f;
		printf("%d ", f2);
	}
	return 0;
}
