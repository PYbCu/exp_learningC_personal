#include<stdio.h>
void main()
{
	char str[100] = { 0 };
	int i, count=0;
	printf("请输入一行字符：");
	gets(str);
	for (i = 0;str[i] != '\0';i++)//要判断里面的字符是否成为了0
	{
		if (str[i] == ' ')
			count++;
	}
	printf("%d", count + 1);
}
/*
0	整数零	ASCII=0（4字节）
'0' 字符零	ASCII=48（1字节）	ASCII中，所有字符以 整数 形式输给计算机
'\0'空字符	ASCII=0（1字节）	所以，if(str[i]==0)等价于if(str[i]=='\n')，与if(str[i]=='0'不等价)
*/