#include <stdio.h>

double horner(double x, double n);
int main()
{
    double x, n;
    while (scanf("%lf %lf", &x, &n))
    {
        printf("%lf", horner(x, n));
    }
}
double horner(double x, double n)
{
    if (n == 1)
        return x;
    return x + x * horner(x, n - 1);
}