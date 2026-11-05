//求解分段函数
#include <stdio.h>
void main()
{
	double x, y;
	printf("请输入x的值：");
	scanf_s("%lf", &x);
	if (x < 0)
		y = 4 * x - 3;
	else
		y = (x - 2) * (x - 2) - 7;
	printf("f(x)=%f", y);
}