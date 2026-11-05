#include<stdio.h>
int main()
{
	int age, days;
	printf("age=");
	scanf_s("%d", &age);
	days = age * 365;
	printf("days=%d\n", days);
	printf("请按任意键退出");
	getchar();
	getchar();//要有两个getchar的原因：第一个吃掉scanf_s处的换行符\n，第二个才吃任意键给的符号
	return 0;
}
