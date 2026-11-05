#include<stdio.h>
void main()
{
	int i;
	printf("能被其中两数3和5整除的数有");
	for (i = 1;i <= 200;i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d ", i);
	}
	printf("\n");
	printf("能被其中两数5和7整除的数有");
	for (i = 1;i <= 200;i++)
	{
		if (i % 5 == 0 && i % 7 == 0)
			printf("%d ",i);
	}
	printf("\n");
	printf("能被其中两数3和7整除的数有");
	for (i = 1;i <= 200;i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
			printf("%d ", i);
	}
	printf("\n");
}