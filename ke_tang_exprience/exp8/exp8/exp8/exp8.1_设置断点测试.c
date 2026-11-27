#include<stdio.h>
void inv(int* x, int n)
{
	int* p, temp, * i, * j;
	i = x; j = x + n - 1;
	p = x + (n - 1) / 2;
	for (; i <= p; i++, j--) /* 调试时在该语句前设置断点 */
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}
void main()
{
	int x[9] = { 1,2,3,4,5,6,7,8,9 };
	inv(&x[0], 9);
	for (int i = 0;i < 9;i++)
		printf("%d", x[i]);
}