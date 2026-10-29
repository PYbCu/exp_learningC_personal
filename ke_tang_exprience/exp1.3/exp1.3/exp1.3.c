#include<stdio.h>
int main()
{
	int age, days;
	printf("age=");
	scanf_s("%d", &age);
	days = age * 365;
	printf("days=%d\n", days);
	return 0;
}
