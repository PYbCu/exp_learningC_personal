//折半查找
#include<stdio.h>
#define N 10
void main()
{
	int a[N] = { 1,2,3,4,5,6,7,8,9,10 };
	int low, high, mid, key;
	low = 0;
	high = N - 1;
	printf("input a key:");
	scanf_s("%d", &key);
	printf("\n");
	while(low<=high)
	{
		mid = (low + high) / 2;
		if (key< a[mid])
			high = mid - 1;
		else if (key == a[mid])
		    break;
		else if (key > a[mid])
			low = mid + 1;
	}
	if (low>high)
		printf("not found\n");
	else
		printf("found\nthe position is %d",mid+1);//找到时，会有low和high重合。而如果没找到（比如还是a[low]<key<a[high],则有最末次，low=mid<high,而后low=mid+1=high，有key<a[mid],这将有high=mid-1,后low>high,退出循环，说明没找到）
}
//也可以用标记变量的形式标注
//found=0
//while((low<high)&&(!found))
//if(key==a[mid]){found=1;}//即可退出循环
//if(found）{printf("found\nthe position is %d",mid);}//if（found）表示found=1，即事件成立
