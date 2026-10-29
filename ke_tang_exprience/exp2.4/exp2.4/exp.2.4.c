#include<stdio.h>
int main()
{
	float gram, karat, jin, pound, ounce;
	scanf_s("%f", &gram);
	karat = gram / 5.;
	jin = 2 / 1000. * gram;
	pound = gram / 454.;
	ounce = pound * 16.;
	printf("karat=%f\njin=%f\npound=%f\nounce=%f\n", karat, jin, pound, ounce);
	return 0;
}
