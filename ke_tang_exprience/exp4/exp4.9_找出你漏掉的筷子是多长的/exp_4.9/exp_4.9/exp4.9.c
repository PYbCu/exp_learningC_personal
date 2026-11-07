#include<stdio.h>
void main()
{
	//是否漏，看奇偶
	int i, chopstick, is_invalid=1;
	int count[100] = { 0 };
	int lost_length = 0, odd_count = 0;
	//lost_length:纪录找到的奇数是什么
	//odd_count:用来统计有几个奇数，以计算有多少出错
	printf("请输入7根筷子的长度大小：");
	for (i = 0;i < 7;i++)
	{
		scanf_s("%d", &chopstick);
		//这里，考虑将chopstick的输入量作为【数组下标】，每读到一个长度，就将这个长度值的【计数加1】，以统计某一长度输入的次量
		//即将数组作为特定值的计数工具
		if (chopstick <= 0)
		{
			is_invalid = 0;//用一个标记变量指示输入数据是否合法
		}
		else
		{
			count[chopstick]++;//chopstick充当一个标识作用
		}
	}
	for (i = 0;i < 100;i++)//i即充当长度遍历
	{
		if (count[i] % 2 != 0)
		{
			odd_count++;
			lost_length = i;
		}

	}
	if (odd_count == 1&&count[lost_length]!=7&&is_invalid==1)
		//出错筷子（count[i]也就是筷子长度是奇数）理论上有且只能有一个值，若多于1，则有不止一双筷子无法配对
		//而count[lost_length]不为7，即同一筷子长度不能出现7次（以回应要求“不尽相同”）
	{
		printf("漏掉的筷子长度为%d\n", lost_length);
	}
	else
	{
		printf("找不到漏掉的筷子!\n");
	}
}