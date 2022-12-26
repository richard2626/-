#include <stdio.h>
#include <math.h>

double case_1(double);
double case_2(double, double, int);

int main()
{
    double x;
    while (scanf("%lf", &x))
    {
        printf("The sin(%.6lf) is %.14lf\n", x, case_1(x));
        printf("The sin(%.6lf) is %.14lf\n", x, case_2(x, x, 0));
        printf("The sin(%.6lf) is %.14lf\n", x, sin(x));
    }
}

double case_1(double x)
{
    double add = x;
    double sin = 0;
    int n = 1;
    while (abs(add) >= 1E-12)
    {
        sin += (n % 2 ? 1 : -1) * add;
        n++;
        add = add * x * x / (2 * n - 2) / (2 * n - 1);
    }
    return sin;
}
double case_2(double add, double x, int n)
{
    n++;
    if (n == 1)
    {
        return (x + case_2(add, x, n));
    }
    add = -1 * add * x * x / (2 * n - 2) / (2 * n - 1);
    if (fabs(add) < 1E-12)
        return 0;

    return (add + case_2(add, x, n));
}