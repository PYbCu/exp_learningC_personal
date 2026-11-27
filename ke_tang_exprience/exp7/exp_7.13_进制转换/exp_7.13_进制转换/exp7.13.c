#include<stdio.h>
void Shishiliu_other(int n)
{
	if (n / 16 == 0)
	{
		if (n % 16 < 10)
			printf("%c", n % 16 + '0');
		else
			printf("%c", n % 16 - 10 + 'A');
		return;
	}
	else
	{
		Shishiliu_other(n / 16);
		if (n % 16 < 10)
			printf("%c", n % 16 + '0');
		else
			printf("%c", n % 16 - 10 + 'A');
	}
}
char* Shishiliu(int n,int* i)
{
	static char ch[100];
	//必须加static，把ch放在静态存储区，函数结束后，返回其地址才是安全的
	//否然，放在栈上，函数结束后ch内存会被自动回收，导致错误
	if (n / 16 == 0)
	{
		if (n % 16 < 10)
			ch[(*i)++] = n % 16 + '0';
		else
			ch[(*i)++] = n % 16 - 10 + 'A';
	}
	else
	{
		Shishiliu(n / 16, i);
		//(*i)++;把自增放在这里，会导致*i表意混乱，其值既不是字符串长度，也不是准确的最后一个字符的下标
		if (n % 16 < 10)
			ch[(*i)++] = n % 16 + '0';
		else
			ch[(*i)++] = n % 16 - 10 + 'A';
	}//此处，函数递归之后天然正序
	ch[*i] = '\0';
	return ch;//这里ch退化成首元素指针，等价于&c[0],不等于&ch（这是去取整个数组的地址）
}
int Shiliushi(char ch[], int len)
{
	int x = 1, sum = 0;
	for (int i = len - 1;i >= 0;i--, x *= 16)
	{
		if (ch[i] >= '0' && ch[i] <= '9')//ASCII只到'9'
			sum = sum + (ch[i] - '0') * x;
		else if (ch[i] >= 'A' && ch[i] <= 'F')
			sum = sum + (ch[i] - 'A' + 10) * x;
		else
			return -1;
	}
	return sum;
}
char* shiba(int n,int* i)//i是一个地址，*i是去里面访问东西
{
	static char str[100];
	if (n / 8 == 0)
	{
		str[*i] = n % 8 + '0';
	}
	else
	{
		shiba(n / 8,i);
		(*i)++;
		str[*i] = n % 8 + '0';
	}
	return str;
}
int bashi(int n)
{
	if (n / 10 == 0)
	{
		return n % 10;
	}
	else
	{
		return (bashi(n / 10)) * 8 + n % 10;
	}
}
void main()
{
	int shi = 2026, ba = 3752;
	int idx1 = 0, idx2 = 0;
	char ch[3] = { '7', 'E', 'A' };

	int result = bashi(ba);
	int sum = Shiliushi(ch, 3);
	char* t=shiba(shi,&idx1);
	char* p=Shishiliu(shi,&idx2);

	printf("2026的十六进制为%s\n", p);
	printf("7EA的十进制为%d\n", sum);
	printf("2026的八进制为%s\n", t);
	printf("3752的十进制为%d\n", result);
}