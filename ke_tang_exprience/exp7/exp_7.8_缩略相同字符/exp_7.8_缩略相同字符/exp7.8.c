#include<stdio.h>
#include<string.h>
void contract(char* str, int len)
{
	if (len == 0)
		return;//以防万一，保证安全
	int i, j=0;
	char arr[100];
	for (i = 0;i < len - 1;i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
		{
			arr[j] = str[i];
			j++;
		}
		else
		{
			if (str[i] != str[i + 1])
			{
				arr[j] = str[i];
				j++;
			}
		}
		/*
		else
		{
			if(i==0||str[i]!=str[i-1])
			{
				arr[j]=str[i];
				j++;
			}
		}
		*/
	}
	arr[j] = str[len - 1];
	j++;
	arr[j] = '\0';
	
	printf("缩减后，新数组为：");
	for (int k = 0;k < j;k++)
		printf("%c", arr[k]);
}
void main()
{
	char a[100];
	printf("请输入一个字符串：");
	gets(a);
	int len=strlen(a);
	contract(a, len);
}

void contract(char* str)
{
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9') ||
			j == 0 || str[i] != str[j - 1])
//i用来读数，j用来写数，j==0或者要读的数和上一个写的数不一样，才能写入
//需满足的条件可以合并
		{
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}