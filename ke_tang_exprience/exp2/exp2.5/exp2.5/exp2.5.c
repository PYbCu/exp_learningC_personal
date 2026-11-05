#include<stdio.h>
int main()
{
	int unn, n, unn1, n1;
	char unc, c, unc1, c1;
	unn = 2147483647;
	unn1 = unn + 1;
	n = 4294967295;
	n1 = n + 1;
	unc = 127;
	unc1 = unc + 1;
	c = 255;
	c1 = c + 1;
	printf("unn1=%d\nn1=%d\nunc1=%d\nc1=%d\n", unn1, n1, unc1, c1);
	return 0;
}

