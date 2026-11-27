#include<stdio.h>
void pnf()
{
	static int count=0;//静态局部变量，只在第一次调用时初始化为整型变量0
	count++;//之后每次调用，它都会保留上次的值并+1
	printf("lyt加油,棒棒哒!!！\n");	
	if (count == 10)
		printf("该函数被调用了%d次", count);
}
void main()
{
	for (int i = 0;i < 10;i++)
		pnf();
//	printf("该函数被调用了%d次", count);
// 错误的，因为你的静态局部变量在函数中，出不来
//	getchar();//第一个getchar()是为了吃掉scanf回车，这里明显不需要
	getchar();//这个才可以用来防止闪退
	//gets(变量名)
}