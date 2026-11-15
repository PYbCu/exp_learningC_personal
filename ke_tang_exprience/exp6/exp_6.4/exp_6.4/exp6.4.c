#include<stdio.h>
int operat(int* all, int m)//不需要在形参中定义n，因为n是返回值，而不是进入函数时需要提供的值
{
	int n = *all / m;
	*all = *all % m;
	return n;//根据C语言的规定，return语句只能返回一个值（或者用数组，不建议，还是学指针把）
	//n的作用：一个局部变量，只能在{}中活着。是暂存计算结果，return时，把n的数值交出去！
	//return语句里面都需要加分号，无论是在main还是自定义函数里面
}
void main()
{
	int money, hundred, fifty, ten, five, two, one;
	printf("请输入金额：", &money);
	scanf_s("%d", &money);
//	hundred = money / 100;
//	money = money % 100;
	hundred = operat(&money, 100);//把money的地址传进去
// C 语言的函数参数是“值传递”（也就是复印机），如果不给地址，函数改的永远是复印件，原件不会变，而我们需要money值层层递变
	fifty = operat(&money, 50);
	ten = operat(&money, 10);
	five = operat(&money, 5);
	two = operat(&money, 2);
	one = money;
	printf("100元：%d张\n50元：%d张\n10元：%d张\n5元：%d张\n2元：%d张\n1元：%d张\n", hundred, fifty, ten, five, two, one);
}