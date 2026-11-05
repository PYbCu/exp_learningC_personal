#include<stdio.h>
int main()
{
	int data, a, b;
	float c;
	printf("data=");
	scanf_s("%d", &data);
	a = data * 10;
	b = data * data;
	c = data / 6.;
	printf("%d\n%d\n%f\n", a, b, c);
	return 0;
}
