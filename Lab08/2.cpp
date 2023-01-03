#include <stdio.h>

void compute(double, double, double, char, double, double, double);
void add(double, double, double, double, double, double, double *, double *, double *);
void sub(double, double, double, double, double, double, double *, double *, double *);
void dot(double, double, double, double, double, double, double *);
void cro(double, double, double, double, double, double, double *, double *, double *);
void show(double x, double y, double z);
int main()
{
	double x1, y1, z1, x2, y2, z2;
	char op;
	printf("Input: ");
	while (scanf("%lf %lf %lf %c %lf %lf %lf", &x1, &y1, &z1, &op, &x2, &y2, &z2) != EOF)
	{
		compute(x1, y1, z1, op, x2, y2, z2);
		printf("Input: ");
	}
}
void compute(double x1, double y1, double z1, char op, double x2, double y2, double z2)
{
	double x, y, z, ans;
	switch (op)
	{
	case '+':
		add(x1, y1, z1, x2, y2, z2, &x, &y, &z);
		show(x, y, z);
		break;
	case '-':
		sub(x1, y1, z1, x2, y2, z2, &x, &y, &z);
		show(x, y, z);
		break;
	case '*':
		dot(x1, y1, z1, x2, y2, z2, &ans);
		printf("%.3lf\n\n", ans);
		break;
	case 'x':
		cro(x1, y1, z1, x2, y2, z2, &x, &y, &z);
		show(x, y, z);
		break;
	default:
		printf("Invalid operator\n\n");
	}
}
void sub(double x1, double y1, double z1, double x2, double y2, double z2, double *x, double *y, double *z)
{
	*x = x1 - x2;
	*y = y1 - y2;
	*z = z1 - z2;
}
void add(double x1, double y1, double z1, double x2, double y2, double z2, double *x, double *y, double *z)
{
	*x = x1 + x2;
	*y = y1 + y2;
	*z = z1 + z2;
}
void dot(double x1, double y1, double z1, double x2, double y2, double z2, double *ans)
{
	*ans = x1 * x2 + y1 * y2 + z1 * z2;
}
void cro(double x1, double y1, double z1, double x2, double y2, double z2, double *x, double *y, double *z)
{
	*x = y1 * z2 - z1 * y2;
	*y = z1 * x2 - x1 * z2;
	*z = x1 * y2 - y1 * x2;
}
void show(double x, double y, double z)
{
	printf("(%.3lf, %.3lf, %.3lf)\n\n", x, y, z);
}