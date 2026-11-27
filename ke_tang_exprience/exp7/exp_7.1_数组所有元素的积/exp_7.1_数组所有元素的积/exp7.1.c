#include<stdio.h>
int product(int arr[], int len)
/*这里你写int arr[]和int* arr完全等价（有[]这种用法完全是为了方便阅读）
 都是告诉编译器我们定义了一个数组（要求接受到一个数组的起始地址，
 因此无论写int arr[0]还是int arr[1]还是int arr[2]都会被编译器理解成为*arr（首地址））
而调用函数时，只需要写数组名arr，因为arr会在函数里退化成这个数组的首地址（一个指针）
 而[]的用处是取下标（访问具体地址）*/
/*退化：作为函数参数传递(“调用函数”的一个步骤，ps.没有调用就没有传递)时；
		赋值给指针变量时；	int *p=arr;
		参与指针运算时	*(arr+1)=arr[1]:这里的arr就是函数的首地址*/
{
	if (len == 0)
		return 1;
	return arr[len - 1] * product(arr, len - 1);
	//此处递归，是后面一个数乘以前面所有元素的乘积
}
void main()
{
	int a[100], n, i, mul;
	printf("输入几个数：");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf_s("%d", &a[i]);
	}
	mul = product(a, n);
	printf("乘积为：%d\n", mul);
}