#include<stdio.h>
#define N 11
void main()
{
	int i, j, k, tmp, sum = 0, arr[N] = { 0 };
	double average;
	for (i = 0;i < N-1;i++)
	{
		printf("请输入第%d位评委打分：", i + 1);
		scanf_s("%d", &arr[i]);
		while (arr[i] < 80 || arr[i]>100)
		{
			printf("该分数不在合理范围内，请重新输入：");
			scanf_s("%d", &arr[i]);
		}
		/*
		  while(1)
		  {
			printf();
			scanf_s();
			if(arr[i]>=80&&arr[i]<=100)
				break;
		   }
		*/
	}
	for (i = 0;i < N - 2;i++)
	{
		for (j = 0;j < N - i - 2;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}
	printf("十位评委打分分别为：");
		for (i = 0;i < N - 1;i++)
	{
		printf("%d ", arr[i]);
	}
	int key;
	printf("\n请第 11 位评委打分的分数：");
	scanf_s("%d", &key);
	for (i = 0;i < N - 1;i++)
	{
		if (key < arr[i])
			break;
	}
	for (k = N - 1;k > i;k--)//这里用k，下面迭代也要用k，以表位次
	{
		arr[k] = arr[k - 1];
	}
	arr[i] = key;
	printf("\n十一位评委打分分别为：");
	for (i = 0;i < N;i++)
	{
		printf("%d ", arr[i]);
		sum += arr[i];
	}
	average = (double)sum / 11;
	printf("\n十一为评委的平均分为：%f\n", average);
}