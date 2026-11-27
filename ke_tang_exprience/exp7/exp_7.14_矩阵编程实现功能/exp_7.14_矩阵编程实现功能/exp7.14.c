#include<stdio.h>
void GetHist(int psrc[], int nlen, int phist[])
{
	for (int i = 0;i < nlen;i++)
	{
		for (int j = 0;j <= 7;j++)
		{
			if (psrc[i] == j)
				phist[j]++;
		}
	}
}
void Negative(int psrc[], int pdst[], int nlen)
{
	for (int i = 0;i < nlen;i++)
	{
		pdst[i] = 7 - psrc[i];
	}
}
void main()
{
	int arr[3][4] = { 0,1,2,3,3,4,5,5,6,6,7,7 };
	int nlen = 12;
	int psrc[12] = { 0 };
	int phist[8] = { 0 };
	int pdst[12] = { 0 };
	int k = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			psrc[k++] = arr[i][j];
		}
	}
	GetHist(psrc, nlen, phist);//数组名自动退化成指针
	Negative(psrc, pdst, nlen);
	//还加了void的前缀的话，就是函数声明而非调用了，函数不会执行
	for (int i = 0;i <= 7;i++)
	{
		printf("数值%d出现次数为：%d\n", i, phist[i]);
	}
	for (int i = 0;i < 12;i+=3)//注意，i+3 只是计算了一下，需要你赋值给i
	{
		printf("%d %d %d\n", pdst[i], pdst[i+1],pdst[i+2]);
	}
}