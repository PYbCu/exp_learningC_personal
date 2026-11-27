#include<stdio.h>
void main()
{
	float arr[3][4] = { 0 };
	float average[4], max[4] = { 0 }, min[4] = { 151,151,151,151 }, sum[4] = { 0 };
	for (int i = 0;i < 3;i++)
	{
		printf("请输入第%d位同学的成绩：\n", i + 1);
		for (int j = 0;j < 4;j++)
		{
			printf("第%d门：", j + 1);
			scanf_s("%f", &arr[i][j]);
		}
	}
	for (int i = 0;i < 4;i++)//注意课程和学生的关系
	{
		for (int j = 0;j < 3;j++)
		{
			sum[i] = sum[i] + arr[j][i];
			max[i] = (max[i] > arr[j][i]) ? max[i] : arr[j][i];
			min[i] = (min[i] < arr[j][i]) ? min[i] : arr[j][i];
		}
		average[i] = sum[i] / 3.;
		printf("第%d门课的平均值为：%.2f\n", i + 1, average[i]);
		printf("其最高分为：%.2f\n最低分为：%.2f\n", max[i], min[i]);
	}
	for (int i = 0;i<3;i++)
	{
		printf("第%d位同学：\n",i + 1);
		for (int j = 0;j < 4;j++)
			printf("%p\n", &arr[i][j]);
	}
}