#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	double x, y, z, cosm, m, n;
	x = 1 * 3 + 2 * 6 + 3 * 4;
	y = sqrt(1 * 1 + 2 * 2 + 3 * 3);
	z = sqrt(3 * 3 + 6 * 6 + 4 * 4);
	cosm = x / (y * z);
	x = acos(cosm);
	n = x * 180 / PI;
	printf("degree=%f", n);
	return 0;
}

