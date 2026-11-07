#include<stdio.h>
void main()
{
	printf("请输入您要统计的字符串，我们将在您输入#后停止计入：");
	char ch;//不能用scanf("%s")或者scanf("%d")，因为scanf会自动忽视空格和回车，根本找不到他们
	int space_count = 0, newline_count = 0, other_count = 0;
	ch = getchar();
	while (ch != '#')
	{
	//	ch = getchar(); 错了，不能在刚条件成立，进入循环后，就立马再吃一个字符，这样会把本该被判断的第一个字符给覆盖掉
		if (ch == ' ')
			space_count++;
		else if (ch == '\n')
			newline_count++;
	//	if+if+else 错了，else就近，只和最近的一个if配对！就变成了一次判断既要看if1，又要看if2（if+else）
		else
			other_count++;//if+else if+else,或者if+else if+else if这样三者就变成了互斥的关系
		ch = getchar();
	}
	printf("空格数：%d\n换行符数：%d\n所有其他字符数：%d\n", space_count, newline_count, other_count);
}  
/*
  char ch;
  while((ch=getchar())!='#')
  {}
  解释：每一次循环，都先getchar(),再ch=...,最后执行!='#',因此就不需要再在{}中打getchar了
 */