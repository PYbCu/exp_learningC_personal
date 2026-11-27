#include<stdio.h>
/*void Insert(int* str, int len, int key, int ord)
{
	if (len == 2)
	{
		if (ord == 1)
		{
			int tmp = str[0];
			str[0] = key;
			str[1] = tmp;
		}
		if (ord == 2)
		{
			str[1] = key;
		}
	}
	else
}*/
//实现向一个数组中插入一个数据的功能
void Insert(int* str, int len, int key)
{
	str[len - 1] = key;
}
//实现向一个有序数组中插入一个数据后，该数组仍为有序数组的功能
void InsertSort(int* arr, int len, int key)
{
	int i;
	for (i = 0;i < len-1;i++)
	{
		if (arr[i] <= key)
			break;
	}
	for (int j = len - 1;j > i;j--)
	{
		arr[j] = arr[j - 1];
	}
	arr[i] = key;
}

/*void Sort(int* str, int len)
{
	if (len == 1)
		return;
	else
	{
		Sort(str, len - 1);

	}
}*/
//实现对一个数组内的数据元素按照从大到小的顺序排序
void Sort(int* str,int len)
{
	for (int i = 0;i < len-1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (str[j] < str[j + 1])
			{
				int tmp = str[j + 1];
				str[j+1] = str[j];
				str[j] = tmp;
			}
		}
	}
}
/*若用递归：
void Sort(int* str, int len)
{
	if (len == 1)
		return;
	else
	{
		for (int j = 0;j < len - 1 ;j++)
		{
			if (str[j] < str[j + 1])
			{
				int tmp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = tmp;
			}
		}
		Sort(str, len - 1);
	}
}
*/
//实现对一个数组a的输入
void InputArray(int a[], int n)
//定义形参时，[]内数表示数组长度的大小，但在函数眼里，a[100]等价于a[]、a[10]，只是提供了首地址而已
{
	printf("请输入%d个数：", n);
	for (int i = 0;i < n;i++)
		scanf_s("%d", &a[i]);
}
//实现把数组元素输出到屏幕
void OutputArray(int a[], int n)
{
	printf("系列操作后，新数组为：");
	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
}

void main()
{
	int str[10] = { 0 }, key;
	InputArray(str,9);
	printf("请输入新数：");
	scanf_s("%d", &key);
	Insert(str, 10, key);
	Sort(str, 9);
	InsertSort(str, 10, key);
	OutputArray(str, 10);
}