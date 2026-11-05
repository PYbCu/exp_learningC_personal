//用户输入一个字母，可以是大写也可以是小写，
// 输出该字母的前面一个字母和后面一个字母，
// 例如字母 b 的前一个字母是 a，后一个字母是 c
// 可以尝试用 ifelse 解决选择分支
#include<stdio.h>
void main()
{
	char key, w1, w2;
	printf("请输入一个字母：");
	scanf_s("%c", &key);
	w1 = key - 1;
	w2 = key + 1;
	if(key=='a')
	{
		w1 = 'z';
	}
	else if(key=='z')
	{
		w2 = 'a';//a是一个变量，'a'才是字符常量
	}
	else if (key=='A')
	{
		w1 = 'Z';
	}
	else if (key == 'Z')
	{
		w2 = 'A';
	}
	printf("前一个字母是：%c\n", w1);
	printf("后一个字母是：%c\n", w2);
}