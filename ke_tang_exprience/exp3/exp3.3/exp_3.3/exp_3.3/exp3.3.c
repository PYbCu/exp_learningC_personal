//我的第一个游戏。程序中默认一个要猜的三位数，且每位数不相同（如 234），
//当用户输入猜测的数值后，程序给出猜测结果
#include<stdio.h>
void main()
#define ori 234
{
	int key, ge, shi, bai, a, b, c;
	int i;
	int j = 1;
	a = ori / 100;
	b = ori % 100 / 10;
	c = ori % 10;
	do
	{
		i = 0;
		printf("请输入%d个三位数：",j);
		scanf_s("%d", &key);
		bai = key / 100;
		shi = key % 100 / 10;
		ge = key % 10;
		if (bai != a)
			i++;
		if (shi != b)
			i++;
		if (ge != c)
			i++;
		printf("%d个数正确，%d个数错误", 3 - i, i);
		j++;
		printf("\n");
	} while (i != 0);
		printf("全部答对啦！答案就是%d", ori);
}