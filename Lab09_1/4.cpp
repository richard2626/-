#include <stdio.h>
#include <math.h>

double case_1(double);
double case_2(double, double, int);

int main()
{
    double x,c1,c2;
    while (scanf("%lf", &x))
    {
    	c1 =case_1(x);
    	c2 =case_2(1, x, -1);
        printf("The cosh(%.6lf) is %.13lf\n", x,c1 );
        printf("The cosh(%.6lf) is %.13lf\n", x,c2 );
        printf("The cosh(%.6lf) is %.13lf\n", x, cosh(x));
    }
}

double case_1(double x)
{
    double add = 1;
    double cosh = 0;
    int n = 1;
    while (abs(add) >= 1E-11)
    {
        cosh += add;
        add = add * x * x / (2 * n) / (2 * n - 1);
        n++;
    }
    return cosh;
}
double case_2(double add, double x, int n)
{
    n++;
    if (n == 0)
    {
        return (1 + case_2(add, x, n));
    }
    add = add * x * x / (2 * n) / (2 * n - 1);

    if (fabs(add) < 1E-11)
        return 0;
    return (add + case_2(add, x, n));
}