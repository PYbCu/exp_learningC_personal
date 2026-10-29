#include<stdio.h>
int main()
{
	int a, i,flag;
	for (a = 2; a <= 100; a++)
	{
		flag = 1;
		for (i = 2; i <= a / 2;i++)
		{
			if (a % i == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
			printf("%d ", a);		
	}
	return 0;
}