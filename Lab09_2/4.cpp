#include <stdio.h>
#include <math.h>

double case_1(double);
double case_2(double, double, int);

int main()
{
    double x;

    while (scanf("%lf", &x))
    {
        printf("The exp(%.6lf) is %.11lf\n", x, case_1(x));
        printf("The exp(%.6lf) is %.11lf\n", x, case_2(1, x, -1));
        printf("The exp(%.6lf) is %.11lf\n", x, exp(x));
    }
}

double case_1(double x)
{
    double add = 1;
    double exp = 0;
    int n = 0;
    while (abs(add) >= 1E-12)
    {
        exp += add;
        n++;
        add = add * x / n;
    }
    return exp;
}
double case_2(double add, double x, int n)
{
    n++;
    if (n == 0)
    {
        return (1 + case_2(add, x, n));
    }
    add = add * x / n;
    if (fabs(add) < 1E-12)
        return 0;

    return (add + case_2(add, x, n));
}