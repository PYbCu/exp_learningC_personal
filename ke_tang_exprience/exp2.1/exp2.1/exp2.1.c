#include<stdio.h>
#define PI 3.14
int main()
{
	float r, h, c, s, S, V1, V2;
	printf("r=");
	scanf_s("%f", &r);
	printf("h=");
	scanf_s("%f", &h);
	c = 2 * PI * r;
	s = 0.5 * PI * r * r;
	S = 4 * PI * r * r;
	V1 = 4 / 3 * PI * r * r * r;
	V2 = PI * r * r * h;
	printf("c=%.2f\ns=%f\nS=%f\nV1=%f\nV2=%f\n", c, s, S, V1, V2);
	return 0;
}
	