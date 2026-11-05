#include<stdio.h>
void main()
{
	double i, k, sum, ave, total, fail;
	sum = 0;
	total = 0;
	k = 0;
	printf("请输入各位同学的成绩（输入数值入不在 0~100 之间，我将认为输入结束哦)：");
	while (1)
	{
		scanf_s("%lf", &i);
		if (i < 0 || i>100)
			break;
		sum = sum + i;
		total++;
		if (i < 60)
			k++;
		
	}
	ave = sum / total;
	fail = k / total * 100;
	printf("这次考试的班级平均成绩、总人数以及不及格率分别为：%f、%f、%f%%", ave, total, fail);
}