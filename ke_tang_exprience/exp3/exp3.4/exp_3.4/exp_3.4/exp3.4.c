//我的计算器。在用户输入两个数和一个操作符后，程序输出运算结果
// 操作符包括： + ， - ， * ， / ， % 
#include<stdio.h>
#include<math.h>
void main()
{
	double a, b,result;
	char how;
	printf("请输入计算对象（数）（运算符）（数）");
	scanf_s("%lf", &a);
	scanf_s(" %c", &how,1);//在 VS中，scanf_s 为了安全，在读字符（%c）和字符串（%s）时，必须在后面多加一个参数，以告诉它最多读几个字符
	scanf_s("%lf", &b);//scanf_s("%lf %c %lf" ,&a,&how,1&b);
	if (how == '+')
		result = a + b;
	else if (how == '-')
		result = a - b;
	else if (how == '*')
		result = a * b;
	else if (how == '/')
		result = a / b;
	else if (how == '%')
		result = fmod(a, b);
	else//不能是else/else if，因为它有就近原则，只跟最近的if匹配
		printf("您输入了不支持的运算符！");
	printf("计算结果为：%f", result);
}