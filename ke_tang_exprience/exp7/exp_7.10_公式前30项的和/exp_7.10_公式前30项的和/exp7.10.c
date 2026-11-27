#include<stdio.h>
/*double item2(float x, int n);
void main()
{
	double x,sum=1;
	printf("请输入x的值：");
	scanf_s("%lf", &x);
	for (int i = 1;i < 30;i++)
	{
		sum = sum + item2(x, i);
	}
	printf("e^x=%f", sum);
}
double item1(float x, int n)
{
	double up = 1, down = 1;
	for (int i = 1;i <= n;i++)
	{
		up = up * x;
		down = down * i;
	}
	return up / down;
}
double item2(float x, int n)
{
	static double up = 1, down = 1;
	up = up * x;
	down = down * n;
	return up / down;
}*/

double item3(float x, int n, double a)
{
	if (n == 30)
		return 0;
	a = a * x / n;
	return a + item3(x,n+1,a);
	//每一层会保留该层量（递+归）
	//x^1+item3(x,2,x)
	//x^2/2!+item3(x,3,x^2/2!)
	// ...
	//x^28/28!+item3(x,29,x^28/28)
	//x^29/29!+item3(x,30,x^29/29!)(该层return 0)
	/*
	S29=a29+0
	S28=a28+S29
	S27=a27+S28
	...
	S1=a1+S2
	*/
}
void main()
{
	double x, result;
	printf("请输入x的值：");
	scanf_s("%lf", &x);
	result =1+ item3(x, 1, 1);
	printf("e^x=%f", result);
}