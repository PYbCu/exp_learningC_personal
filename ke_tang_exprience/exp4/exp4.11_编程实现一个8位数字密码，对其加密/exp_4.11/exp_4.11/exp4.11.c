#include<stdio.h>
int main()
{
	int key, i, j, arr[8] = { 0 }, brr[8] = { 0 };//, crr[8] = { 0 };
	printf("请输入一个八位数密码：");
	scanf_s("%d", &key);
	for (i = 0;i < 8;i++)
	{
		arr[i] = key % 10;//数组取密码的最后一位（简便）（从右往左取数，编程更好呈现，别死磕绕弯子）
		arr[i] = (arr[i] + 5) % 10;
		key = key / 10;//去掉最后一位，方便下次读取
	}
/*	for (i = 0;i < 8;i++)
	{
		brr[i] = arr[7 - i];
		//不能把crr[i] = brr[(i - 3 + 8) % 8];放在这里，先来的数会读取还未被新赋值的brr[i+5]==0
	}
	for(i=0;i<8;i++)//需要一直注意数字与不同数组下标的关系！！！左->右/右->左
		crr[i] = brr[(i - 3 + 8) % 8];
	//注意这个余除，可以处理巡回的问题(但要注意，不同于历史记录，我们不能把用过的数直接覆盖了)
	printf("\n加密密码为：");
	for (i = 7;i >=0 ;i--)
	{
		printf("%d", crr[i]);
	}*/
	for (i = 0;i < 8;i++)
	{
		brr[i] = arr[(i + 3) % 8];
		printf("%d", brr[i]);
	}
}