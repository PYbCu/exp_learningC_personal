#include<stdio.h>
void main()
{
	long long decimal = 0;;
	int binary;
	int tmp;
	int base = 1;
	printf("请输入一个二进制数：");
	scanf_s("%d", &binary);
	while (binary > 0)
	{
		tmp = binary % 10;
		decimal += tmp * base;
		base *= 2;
		binary /= 10;
	}
	printf("\n该二进制数输出为十进制数：%lld", decimal);
	printf("\n请输入一个十进制数：", decimal);
	scanf_s("%lld", &decimal);
	int arr[32] = { 0 };
	int i = 0, j;
	while (decimal > 0)
	{
		arr[i] = decimal % 2;
		decimal /= 2;
		i++;
	}
	for (j = i - 1;j >= 0;j--)//从最后开始，倒着读
		printf("%d", arr[j]);
	printf("\n");
}