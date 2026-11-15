#include<stdio.h>
#define N 100
void main()
{
	printf("规则1：字符（' a ' - ' i ' ）分别用（  ' 1 ' - ' 9 '） 表示\n规则2：字符（' j ' - ' z ' ）分别用（  ' 1 0 # ' - ' 2 6 # ' ）表示\n请输入:");
	char srr[N] = { 0 };
	int count = 0, i = 0;
	scanf_s("%s", srr, N);
//	printf("原式的输出为：");
	for (count = 0;srr[count] != '\0';count++)//要让它对自己的下标进行判断，如果写作srr[i]!=0，i=0，条件恒为真，会陷入死循环
	{ }
	for (i = 0;i < count;i++)
	{
		if (srr[i] == '#')
			continue;
		else if (i + 2 < count && srr[i + 2] == '#')
			//i+2<count:防止越界访问，导致撞墙，明明已经到了最后几个还去找i+2个是不是'#'
		{
			int num = (srr[i] - '0') * 10 + (srr[i + 1] - '0');//把字符数字转换为真正的数字
			printf("%c", 'a' + num - 1);//直接打印出来就可以啦
			i += 2;//让程序不要重复算术（外面还有一层i++）
		}
		else
		{
			int num = srr[i] - '0';
			printf("%c", 'a' + num - 1);
		}
	}
	printf("\n");
}