#include<stdio.h>  //要想保留一个量，让一个新元去接纳它
int main()
{
	int f1 = 1;
	int f2 = 1;
	int f, i;
	i = 3;//注意从几开始，因为已有f1,f2两个初始值
	printf("%d %d ", f1, f2);
	while (i <= 20)
	{
		f = f1;
		f1 = f2;
		f2 = f2 + f;
		printf("%d ", f2);//打印一个值f2
		i++;
	}
	printf("\n");
	return 0;
}
		