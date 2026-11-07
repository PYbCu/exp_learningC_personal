#include<stdio.h>
void main()
{
	int i, j, arr[3][3] = { 0 };
	int flag = 1;//在主干定义的变量，循环里发生了改动，也可以被探测到
	printf("请输入一个二维数组：");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("您输入的二维数组为：");
	printf("\n");
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%3d", arr[i][j]);

		}
		printf("\n");
	}
	for (i = 0;i < 3;i++)
	{
		int count = 0;//在循环里定义的变量，出不去{}，定义出不去，值也出不去
		for (j = 0;j < 3;j++)
		{
	/*		if (arr[i][j] == 1)
				count += 1;
			if (arr[i][j] == 2)
				count += 2;
			if (arr[i][j] == 3)
				count += 3;
	*/		count += arr[i][j];
		}
		if (count != 6)//要将flag的初始值设置为1，而非0，这样子，如果有一行不成立，就会被弄成0，也就是被判死，所以，也不要加“else flag=1；”这种话
		{
			flag = 0;//但如果反之，先预为0，那么对，就变1，错，就还是0，会发生反复，那么最后是有还是0，全看最后一个flag值
			break;//一旦判死，这个数组也不需要继续再查了，就直接定了性，反正也翻不了身了
		}
	}
	if (flag == 1)
	{
		for (j = 0;j < 3;j++)
		{
			int count = 0;
			for (i = 0;i < 3;i++)
			{
				/*		if (arr[i][j] == 1)
							count += 1;
						if (arr[i][j] == 2)
							count += 2;
						if (arr[i][j] == 3)
							count += 3;
				*/		count += arr[i][j];
			}
			if (count != 6)
				flag = 0;
			/*	else	不能再写这一句了，会让因为上面要求不成立而变成flag==0的数组死灰复燃
					flag = 1;*/
		}
	}
	if (flag == 1)
		printf("该二维数组是简单数独！");
	if (flag == 0)
		printf("该二维数组不是简单数独！");
}
/*(计数法/标志数组)
	for(i=0;i<3;i++)
	{
		int count[4]=0;//定义成数组才可以根据i/j变化而改变，定义长度为4才能1、2、3，方便程序员审读
		for(j=0;j<3;j++)
		{
			count[arr[i][j]]++
		}
		if(count[1]!=1||count[2]!=1||count[3]!=1)
		{
			flag=0;//一票否决
			break;
		}
	或者如下：	
		if(count[1]==1&&count[2]==1&&count[3]==1)
		{//啥也不干
		}
		else
		{
			flag=0；//全票通过
			break;
		}
	}
	if(flag==1)
	{
		去查列
	}
*/
	
