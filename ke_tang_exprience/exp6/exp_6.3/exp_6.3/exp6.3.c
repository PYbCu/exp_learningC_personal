#include<stdio.h>
float SelectSort(int a[], int len)
//函数声明时，数组参数里的[]只是表示这是一个数组，不需要写长度，也写不准长度
//将函数的长度作为一个参量，同时给到函数作为形参
//排序不需要返回任何值，排好后的数组本身就是结果，故只需要返回浮点型average就可以了
{
	int i, j, tmp, sum=0;
	float ave;
	for (i = 0;i < len - 1;i++)
	{
		for (j = 0;j < len - i - 1;j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	printf("评分分数正序为：");
	for (i = 0;i < len;i++)
	{
		printf("%d ", a[i]);
		sum += a[i];
	}
	ave = (float)sum / len;
	printf("\n评分的平均分为：%.2f",ave);
	return ave;
}
void main()
{
	int i, scores[15] = { 0 };
	printf("请输入十个评委的打分：");
	for (i = 0;i < 10;i++)
	{
		printf("\n第%d位评委打分为：", i + 1);
		while (1)
		{
			scanf_s("%d", &scores[i]);
			if (scores[i] < 80 || scores[i] > 100)
			{
				printf("default!请从新输入当前值：");
			}
			else
			{
				break;
			}
		}
	}
	SelectSort(scores, 10);//写scores或者&scores[0],函数在参量中退化为首地址
	printf("\n请输入新增加的五位评委的打分：");
	for (i = 0;i < 5;i++)
	{
		printf("\n第%d位评委打分为：", 11 + i);
		while (1)
		{
			scanf_s("%d", &scores[10 + i]);
			if (scores[10+i] < 80 || scores[10+i] > 100)
			{
				printf("default!请从新输入当前值：");
			}
			else
			{
				break;
			}
		}
	}
	SelectSort(scores, 15);
}