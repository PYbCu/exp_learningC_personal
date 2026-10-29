#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, m, x1, x2;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	m = sqrt(b * b - 4 * a * c);
	x1 = (-b + m) / (2 * a);
	x2 = (-b - m) / (2 * a);
	printf("%fx^2+%fx+%f=0\n", a, b, c);
	printf("x1=%f,x2=%f\n", x1, x2);
	return 0;
}

