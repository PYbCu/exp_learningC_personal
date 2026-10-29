#include<stdio.h>
int main()
{
	double e = 1;
	double i = 1;
	int n = 1;
	double mul = 1;
	int count = 0;

	while (i >= 1e-20)
	{
		mul *= n;
		i = 1.0 / mul;
		n++;
		e += i;
		count++;
		if (count > 10 && count < 15)
		{
			printf("第%d次循环，当前项为=%.20lf\n", count, i);
		}
	}
	printf("e=%f", e);
	return 0;
}