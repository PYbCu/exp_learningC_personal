#include<stdio.h>
#include<math.h>
void main()
{
	double a, x2;
	scanf_s("%lf", &a);
	printf("a=");
	double x1 = a / 2;//经查验，初始的x1只要大于零即可，但是a/2会简化程序步骤
	scanf_s("%lf", &a);
	while (1)
	{
		x2 = 0.5 * (x1 + a / x1);
		if(fabs(x2-x1)<10e-5)
			break;
		x1 = x2;
	}
	printf("x=%f",x2);
}