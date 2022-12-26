#include <stdio.h>

int main()
{
	double s = 0;
	double p = 1;
	int n = 0;
	do
	{
		n++;
		s += 93.824 * p;
		p *= 2;
		p *= n * n;
		p /= (2 * n);
		p /= (2 * n + 1);
	} while (p >= 1E-10);

	printf("%.12lf\n", s);
}