#include<stdio.h>
int count = 0;
//全局变量，所有函数共享，根本不需要通过指针传入函数
void pnf()
{
	count++;
	printf("lyt加油,棒棒哒!!！\n");
//	(*count)++;//++优先级高于*，以后为以防万一，还是自己把括号加上吧
}
void main()
{
	for (int i = 0;i < 10;i++)
		pnf();
	printf("该函数被调用了%d次", count);
}