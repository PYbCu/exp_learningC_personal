//用以下公式计算π的值：Pi/4=1-1/3+1/5-1/7+1/9-1/11+...
#include<stdio.h>
#include<math.h>
int main()
{
	double Pi;
	double sum = 0;
	double i = 1;
	int n = 1;
	int s;
	while (fabs(i)>= 1e-8)
	{
		if (n % 2 == 0)
			s = -1;
		else
			s = 1;
		i = s * (1.0 / (2 * n - 1));
		sum += i;
		n++;
	}
	Pi = 4 * sum;
	printf("Pi=%lf", Pi);
	return 0;
}





		
	