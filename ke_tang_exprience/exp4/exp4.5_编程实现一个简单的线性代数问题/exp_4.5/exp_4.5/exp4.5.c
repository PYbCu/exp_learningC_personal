#include<stdio.h>
void main()
{
	int i, j, tmp, arr[3][3] = { 0 };
	printf("请输入一个3*3矩阵：");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &arr[i][j]);//会换行输出“3*3矩阵”：控制台中有缓冲区，键盘输入后，数字只是暂存在缓冲区中。只有当enter时候，操作系统才会将数据一股脑给scanf_s，scanf_s才开始干活
		}//如果还没输满9个数，那么enter后也会在缓存区中，只是for还没完成，会等数字输完（%d遇到空白字符会自动跳过，必须看到真实的数据才会往下走）
	}
	printf("您输入的3*3矩阵为：\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 1;i < 3;i++)//注意！因为只用一个数组完成转置，就要求我们只看对角线左半部或者右半部
	{
		for (j = 0;j < i;j++)//j<i:将取数拦在了对角线左端！
		{
			tmp = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = tmp;//经典的“三杯水”交换法
		}
	/*
	  for(i=0;i<2;i++)
	 {//因为是3*3的方形矩阵，半部就是i+1！
	 	for(j=i+1;j<3;j++)
	   {}//表示右半边
	 }
	/*
	  for(i=1;i<3;i++)
	 {
		for(j=0;j<i;j++)
		{}//表示左半边
	 }
	*/
	}
	printf("转置后的3*3矩阵为：\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}