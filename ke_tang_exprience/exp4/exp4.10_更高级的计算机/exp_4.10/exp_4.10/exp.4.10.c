#include<stdio.h>
#define N 5
int main()
{
	char op;//更建议的是，分别设置int op和char choice，一个负责读菜单，一个负责得到运算符，再给到h_choice保存运算符
	int i = 0;
	float h_a[N] = { 0 }, h_b[N] = { 0 };//只要5个，进行轮环不会乱
	char h_op[N] = { 0 };
	float a, b, res;
	int count = 0, idx = 0;//count:计算当前保留了多少条历史记录，idx:记录当前应该把新数据存到哪个下标
	printf("欢迎来到你的计算器\n");
	printf("加法_1	减法_2	乘法_3\n除法_4	查询_5	退出_6\n");
	while (1)
	{
		printf("请输入你的选项：");
		scanf_s(" %c", &op);//加上一个空格告诉程序，在读取字符之前，所有空格、回车·、换行符都跳过，只读取真正的字符
		/*否然
		*/
		if (op == '6')
			break;
		switch (op)//也可以直接用if-else,选择语句不是本题重点
		{
		case '1':
		case '2':
		case '3':
		case '4':
		{
			printf("请输入两个数字进行运算：");
			scanf_s("%f%f", &a, &b);
			if (op == '1')
			{
				op = '+';
				res = a + b;
			}
			else if (op == '2')
			{
				op = '-';
				res = a - b;
			}
			else if (op == '3')
			{
				op = '*';
				res = a * b;
			}
			else if (op == '4')
			{
				op = '/';
				while (b == 0)
				{
					printf("除法的除数不能为零哦，请重新输入除数值：");
					scanf_s("%f", &b);
					if (b != 0)
						break;
				}
				res = a / b;
			}
			printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
			h_a[idx] = a;
			h_b[idx] = b;
			h_op[idx] = op;
			idx == (idx++) % 5;//指向下一个将要被覆盖的格子,进行轮转
			//(idx++)在C中是未定义行为，易出错
			if (count < 5)
				count = count++;
			break;
		}
		case '5':
		{
			if (count == 0)
				printf("暂无历史记录\n");
			else
			{
				int start = (idx - count + 5) % 5;//找到开始：count是否已到5
				for (int i = 0;i < count;i++)
				{
					int real_idx = start + i;//加i位
					printf("%.2f %c %.2f= %.2f\n", h_a[real_idx], h_op[real_idx], h_b[real_idx]);
				}
			}
			break;
		}
		}
	}
}
	

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
/*		switch (op)//太复杂了，有更好的思路
		{
		case 1:
		{
			printf("%f+%f=%f", a, b, a + b);
			history_a[i] = a;
			history_b[i] = b;
			history_fh[i] = ' +';
			i++;
			break;
		}
		case 2:
		{
			printf("%f-%f=%f", a, b, a - b);
			history_a[i] = a;
			history_b[i] = b;
			history_fh[i] = ' -';
			i++;
			break;
		}
		case 3:
		{
			printf("%f*%f=%f", a, b, a * b);
			history_a[i] = a;
			history_b[i] = b;
			history_fh[i] = ' *';
			i++;
			break;
		}
		case 4:
		{
			while (b == 0)
			{
				printf("除法的除数不能为零哦，请重新输入除数值：");
				scanf_s("%f", b);
				if (b != 0)
					break;
			}
			printf("%f/%f=%f", a, b, a / b);
			history_a[i] = a;
			history_b[i] = b;
			history_fh[i] = ' /';
			i++;
			break;
		}
		default:
			printf("请按菜单栏输入选项");
		}

*/
