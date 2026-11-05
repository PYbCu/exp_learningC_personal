#include<stdio.h>
void main()
{
	double j, k, s = 0, m, sum=0, delta=0.01,fail;
	int i = 0;
	printf("请输入陌生人提出给富翁多少元钱:");
	scanf_s("%lf", &m);
	while (1)
	{
		i++;
		s = s + m;
		sum = sum + delta;
		delta = delta * 2;
		if (sum > s)
			break;
	}
	for (k = 0;k < 30;k++)
	{
		s = s + m;
		sum = sum + delta;
		delta = delta * 2;
	}
	fail = sum-s;
	printf("%d天后，百万富翁开始亏钱。再 30 天后, 富翁亏了%f钱", i, fail);		
}