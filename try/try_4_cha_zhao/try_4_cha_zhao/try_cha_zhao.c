//顺序查找
#include<stdio.h>
#define N 10
void main()
{
	int a[N] = { 2,4,5,3,7,9,10,8,6,1 };
	int i, key;
	printf("input key:");
	scanf_s("%d", &key);
	for (i = 0; i < N; i++)
		if (key == a[i])
			break;
	printf("found!when i=%d", i+1);
	if (i >= N)
		printf("not found!");
}