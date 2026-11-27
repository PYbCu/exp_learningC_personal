#include<stdio.h>
int IntToStr(int n, char str[])
//注意：char str[]和char* str等价，
// 但是与char* str[0](非法)完全不同，
// 因为char* str[0]表示长度为0的字符型指针
// （[]的优先级高于*）
{
	int num = 0;
	while (n > 0)
	{
		str[num] = '0' + n % 10;
		num++;
		n = n / 10;//到这里，数组还是存反了，需要你倒序
	}
	for (int i = 0;i < num / 2;i++)
	{
		int tmp = str[i];
		str[i] = str[num - i - 1];
		str[num - 1 - i] = tmp;
	}
	str[num] = '\0';
	return num;
}
int differ(char str1[], char str2[])
{
	int count = 0;
	for (int i = 0;str1[i] != '\0';i++)
	//'\0'数值就是0，应要关注str1[i]是否为'\0'，即数值是否为0
	{
		if (str1[i] != str2[i])
			count++;
	}
	return count;
}void main()
{
	int n1, n2, k;
	char str1[100] = { 0 }, str2[100] = { 0 };
	printf("请输入两个正整数：");
	scanf_s("%d%d", &n1, &n2);
	IntToStr(n1, str1);
	IntToStr(n2, str2);
	k = differ(str1, str2);
	printf("它们的汉明距离为%d\n", k);
}