#include<stdio.h>
int main()
{
	double e = 1;
	double i = 1;
	int n = 1;
	double mul = 1;

	while (i >= 1e-6)
	{
		mul *= n;
		i = 1.0 / mul;
		n++;
		e += i;
	}
	printf("e=%f", e);
	return 0;
}