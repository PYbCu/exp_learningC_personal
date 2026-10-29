#include<stdio.h>
int main()
{
	int a, x, y, z, convert;
	scanf_s("%d", &a);
	x = a / 100;
	y = a / 10 % 10;
	z = a % 10;
	convert = z * 100 + y * 10 + x;
	printf("convert=%d", convert);
	getchar();
	return 0;
}

