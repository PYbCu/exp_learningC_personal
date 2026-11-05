#include<stdio.h>
void main()
{
	int key, i, j, k = 0, tmp, a, b, c, d, max, min, delta=0;
	printf("请输入一个四位数字，其各位上的数字不全相同：");
	scanf_s("%d", &key);
	a = key / 1000;
	b = key / 100 % 10;
	c = key / 10 % 10;
	d = key % 10;
	if (a == b && b == c && c == d)
		printf("请勿输入各位相同的四位数！");
	else
	{
		while (delta != 6174)
		{
			a = key / 1000;
			b = key / 100 % 10;
			c = key / 10 % 10;
			d = key % 10;
			int arr[4] = { a,b,c,d };
			for (i = 0;i < 3;i++)
				for (j = 0;j < 3 - i;j++)
					if (arr[j] > arr[j + 1])
					{
						tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}//我用了冒泡排序
			min = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
			max = arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
			delta = max - min;
			k++;
			printf("第%d步：%d - %d = %d\n", k, max, min, delta);
			key = delta;
		}
		printf("步数：%d", k);
	}
}