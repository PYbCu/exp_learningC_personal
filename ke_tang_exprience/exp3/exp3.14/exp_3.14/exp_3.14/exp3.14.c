//质数检查
#include<stdio.h>
void main()
{
	int n, flag;//添入标记变量，便于判断是否为质数（一次性的，简便的，规则性强的）
	scanf_s("%d", &n);
	
	for (int i = 2;i <= n;i++)
	{
		flag = 1;//flag应要放在for里面，又不能放在二层里面，因为2、3时进不去二层循环，flag会是乱七八糟的初值
		for (int j = 2;j <= i / 2;j++)
		{
			
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d是质数！\n", i);
		else
			printf("%d不是质数！\n", i);
	}

}
/*for (int i = 2;i <= n;i++)
	{
		for (int j = 2;j <= i / 2;j++)
		{
			if (i % j == 0)
			{
				printf("%d不是质数！",i);
				break;
			}
			printf("%d是质数！", i);
		}
		//有误，比如9%2==0为假，会打印“是质数”
		要让它所有数遍历过去之后，再下“是质数”的结论
	}
	*/