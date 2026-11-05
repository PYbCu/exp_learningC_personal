#include<stdio.h>
void main()
{
	int i;
	printf("Lucky seven不能说的数有：\n");
	for (i = 1;i <= 200;i++)
	{
		if (i % 7 == 0)
			printf("%d，", i);
	}
}