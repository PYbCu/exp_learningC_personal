#include<stdio.h>
void Func(int src[], int dst[], int n)
{
	for (int i = 0;i < n;i++)
	{
		dst[i] = src[n - i - 1];
	}
}
void main()
{
	int a[100] = { 0 };
}