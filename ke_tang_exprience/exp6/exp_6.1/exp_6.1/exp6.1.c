#include<stdio.h>
void main()
{
	float x, g, f;
	printf("«Î ‰»Î∫Ø ˝÷µ£∫");
	scanf_s("%f", &x);
	g = 2 * x + 1;
	f = (g + 1) * (g + 1);
	printf("f[g(x)]=%.2f", f);
}