#include<stdio.h>
int main()
{
	int a1, a2, a3, max;
	scanf_s("%d%d%d", &a1, &a2, &a3);
	max = (a1 > a2) ? ((a1 > a3) ?a1 : a3) : ((a2 > a3) ? a2 : a3);//结合性（怎么看）！=执行顺序（怎么跑)
	printf("max=%d\n", max);
	return 0;
}