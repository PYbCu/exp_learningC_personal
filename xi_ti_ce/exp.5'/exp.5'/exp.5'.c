#include<stdio.h>
#include<math.h>

int main()
{
	double Pi;
	double sum = 0;
	double i = 1;
	int n = 1;
	int s=1;
	while (fabs(i) >= 1e-9)
	{
		i = s * (1.0 / (2 * n - 1));
		sum += i;
		n++;
		s = -s;
	}
	Pi = 4 * sum;
	printf("Pi=%lf", Pi);
	return 0;
}