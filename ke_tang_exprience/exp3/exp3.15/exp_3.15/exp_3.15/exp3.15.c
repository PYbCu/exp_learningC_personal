//回文检查
//提取数字有两个思路
#include<stdio.h>
void main()
{
	int key, i = 0, j, arr[20] = { 0 }, brr[20] = { 0 },flag=1;
	printf("请输入一个整数：");
	scanf_s("%d", &key);
	while (key > 0)
	{
		arr[i] = key % 10;
		i++;//i计算数个数，若为123321，那么，i最后的值为6
		key /= 10;
	}
	for (j = 0;j < i;j++)
	{
		brr[j] = arr[i - 1 - j];
	}
//	for (i = 0, j = 0;i < 20, j < 20;i++, j++)//这里不要写20，也不要去改变i的大小（这里i用来计数了），只要循环i次就可以
	for(j=0;j<i;j++)
	{
		if (arr[j] != brr[j])//用一个参量带动循环，比较两个数组量
		{
			flag = 0;
			break;
		}
	}
/*只要比一半就行了，比如长度为6，就比3次
* for(j=0;j<i/2;j++)//省去一半的代码量
* {
*	//拿开头arr[j] 和结尾 arr[i-1-j] 对比即可
*	if(arr[j] != arr[i-1-j])
*	{
*		flag=0;
*		break;
*	}
* }
*/
	if (flag == 0)
		printf("该数不是回文！");
	else
		printf("该数是回文！");
}