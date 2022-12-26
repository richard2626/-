#include <stdio.h>

double sqrt_f(double);
bool arcsin_f(double *, double *);
int compute_root(double *, double *, double);
int main()
{
	double a, b, c;
	printf("Input: ");
	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
	{
		switch (compute_root(&a, &b, c))
		{
		case 1:
			printf("roots: %.4lf, %.4lf\n\n", a, b);
			break;
		case 2:
			printf("roots: %.4lf\n\n", b);
			break;
		case 3:
			printf("roots: %.4lf\n\n", a);
			break;
		case 0:
			printf("no real number root\n\n");
			break;
		}
		printf("Input: ");
	}
}
double sqrt_f(double x)
{
	if (x == 0)
		return 0;
	double r, b;
	double k = 1;
	r = x + 1;
	while (k >= 1E-10)
	{
		k = ((r * r) - x);
		b = r - k / (2 * r);
		r = b;
	}
	return b;
}
int compute_root(double *a, double *b, double c)
{
	double y1, y2;
	if (((*b) * (*b) - 4 * (*a) * c) / (2 * (*a)) >= 0)
	{
		y1 = (-(*b) - sqrt_f(((*b) * (*b) - 4 * (*a) * c))) / (2 * (*a));
		y2 = (-(*b) + sqrt_f(((*b) * (*b) - 4 * (*a) * c))) / (2 * (*a));
		if (arcsin_f(&y1, a))
		{
			if (arcsin_f(&y2, b))
				return 1;
			return 3;
		}
		if (arcsin_f(&y2, b))
			return 2;
		return 0;
	}
	return 0;
}
bool arcsin_f(double *y, double *ans)
{
	long double PI = 3.14159265359;
	if (*y == -1)
	{
		*ans = -PI / 2;
		return 1;
	}
	if (*y == 1)
	{
		*ans = PI / 2;
		return 1;
	}
	if (*y > 1 || *y < -1)
	{
		return 0;
	}
	*ans = 0;
	int n = 1;
	long double a = (*y) * (*y) * (*y) / 2;
	while (1)
	{
		*ans += a / (2 * n + 1);
		n++;
		a *= (2 * n - 1);
		a /= (2 * n);
		a *= (*y) * (*y);

		if (a / (2 * n + 1) < 0)
		{
			if (a / (2 * n + 1) > -1 * (1E-13))
				break;
		}
		else if (a / (2 * n + 1) < 1E-13)
			break;
	}
	*ans += *y;
	return 1;
}
