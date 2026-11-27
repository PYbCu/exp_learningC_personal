#include<stdio.h>
#include<string.h>
void convert(char* str, int len)
{
	if (len <= 1)//要是<=，而不能是==
		//不然，若len初为偶数，则停不下来，会负数越界
		return;
	else
	{
		char tmp = *str;
		*str = str[len - 1];
		str[len - 1] = tmp;

		convert(str+1, len - 2);
		//跳过第一个字符，从str+1开始计数，
		// 也因此，为保持收尾已交换量，需处理的长度应为len-1
	}
}
void main()
{
	char c[100];
	int i, len;
	printf("请输入一个字符串：");
	scanf_s("%s", c,100);//数组本身退化为了地址，无需再加取址符，且scanf读取字符串，应设置可读取的值
	len = strlen(c);
	convert(c, len);
	for (i = 0;i < len;i++)
		printf("%c", c[i]);
	//两行可以简化为，printf("%s",c);
}