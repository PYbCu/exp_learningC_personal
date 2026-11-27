#include<stdio.h>
int MaxIndex(int arr[], int len)
{
	int max,n;
	if (len == 2)
	{
		return (arr[1] > arr[0] ? 1 : 0);
	}
	int restIndex = MaxIndex(arr, len - 1);//将最后一个数撇开，所以len-1；都是从arr[0]开始比较，arr不动
	return (arr[len - 1] > arr[restIndex] ? (len - 1) : restIndex);//len-1是当前最后一数的下标，与当层前数相比较
}
void main()
{
	int str[5] = { 3,8,9,1,4 };
	int i = MaxIndex(str, 5);
	printf("数组中的最大元素是：%d\n及其位置为：%d位", str[i], i+1);
}