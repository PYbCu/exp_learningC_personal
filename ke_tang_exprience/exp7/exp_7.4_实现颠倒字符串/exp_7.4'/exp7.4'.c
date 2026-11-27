#include<stdio.h>
#include<string.h>
void convert(int* a, int* b)
{
	if (*a == *b)
		return;
	else
	{
		char tmp = *b;
		*a = *b;
		*b = tmp;//交换
		*a++;
		*b--;//移动下标
		convert(a, b);
	}
}
void main()
{
	char c[100];
	int len, a, b;
	printf("请输入一个字符串：");
	scanf_s("%s", c, 100);
	len = strlen(c);
	a = 0, b = len-1;
	convert(&a, &b);
	printf("%s\n", c);
}