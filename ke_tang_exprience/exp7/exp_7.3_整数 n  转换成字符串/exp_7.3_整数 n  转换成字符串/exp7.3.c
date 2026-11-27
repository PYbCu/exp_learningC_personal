#include<stdio.h>
void func(int n, char* str, int* idx)//与char str[0]等价（退化为指针）,int *idx形参传了一个地址进来
{
	if (n < 10)
	{
		str[*idx] = '0' + n;
		(*idx)++;
	}
	else
	{
		func(n / 10, str, idx);//这里不能写成return func（），因为这样会直接结束函数，无法再往下运行了
		str[*idx] = '0' + (n % 10);
		(*idx)++;
	}
	str[*idx] = '\0';
	//这样子写也可以的：虽然每层最后结束都让下一个数赋上'\0'，
	// 但是由于归在一直进行，所以每次会被覆盖成有效数字，直到最后无新值覆盖，输出即为'\0'
}
void main()
{
	int n, idx = 0, i = 0;
	char str[50];
	printf("请输入一个整数：");
	scanf_s("%d", &n);
	func(n, str, &idx);
	for (i = 0;i < idx;i++)//下标（总）直接可以用来计数
		printf("%c", str[i]);
}