#include<stdio.h>
#include<math.h>
int main()
{
	double x, y, z, a, b, d;
	scanf_s("%lf%lf%lf", &x, &y, &z);
	a = sqrt(3 * 3 + 5 * 5 + 6 * 6);
	b = fabs(3 * x + 5 * y + 6 * z - 8);
	d = b / a;
	printf("d=%f", d);
	return 0;
}