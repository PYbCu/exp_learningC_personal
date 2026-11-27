#include<stdio.h>
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
	{
		return gcd(b, a % b);//辗转相除法求最大公因数，这时a=b,b=a%b
		//这里的return，是指返回到上一层递归函数，把求出来的东西交还回去
	}
}
int lcm(int a, int b)
{
	return (a / gcd(a, b))*b;
	//这样写而不是(a*b)/gcd(a,b)，是为了防止数值过大，直接溢出了
}
void main()
{
	int arr[5] = { 0 };
	printf("请输入五个整数：");
	for (int i = 0;i < 5;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int result = arr[0];
	for (int i = 1;i < 5;i++)
	{
		result = lcm(result, arr[i]);
		//计算多数的公倍数，就是要将某两数的最小公倍数，混上第三数，求出它们的最小公倍数
		//只要各数都参与了求“最小公倍数”的环节，那么就可以说是那些数的最小公倍数
	}
	printf("5个数的最小公倍数为%d\n", result);
}