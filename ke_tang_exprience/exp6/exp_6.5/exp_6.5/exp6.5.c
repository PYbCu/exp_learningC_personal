#include<stdio.h>
int gcd(int a, int b)
{
	while (b!=0)
	{
		int rest = a % b;
		a = b;
		b = rest;
	}
	return a;
	//return干的事，是将值复制一份，送给调用者
	//因此，能够返回被修改过的形参，但是无法影响主函数里的变量（除非用地址/指针）
}
void main()
{
	int arr[] = { 19,18,24,30,36 };
	int i, max=arr[0], min=arr[0];
	int n = sizeof(arr) / sizeof(arr[0]);//用来计算数组的元素个数
	for (i = 1;i < n;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	int result = gcd(max, min);
	printf("数组中的最大值和最小值的最大公约数为：%d", result);
}