#include<stdio.h>
#include<string.h>
char* integrate(char a[],int m, char b[],int n)
{
	int len = m+n;
	static char arr[100] = { 0 };
	for (int i = 0;i < m;i++)
	{
		arr[i] = a[i];
	}
	for (int i = 0;i < n;i++)
	{
		arr[i + m] = b[i];
	}
	for (int i = 0;i < len - 1;i++)
	{
		int maxindex = i;
		for (int j = i+1;j < len;j++)
		{
			if (arr[j] < arr[maxindex])
				maxindex = j;//巧用标记变量
		}
		if (i != maxindex)
		{
			char tmp = arr[i];
			arr[i] = arr[maxindex];
			arr[maxindex] = tmp;
		}
	}
	arr[len] = '\0';
	return arr;
}
void main()
{
	char a[5] = { '0','1','2','4','9' };
	char b[6] = { '3','4','6','7','8','9' };
	char* p = NULL;
	p = integrate(a, 5, b, 6);
	printf("%s", p);
}