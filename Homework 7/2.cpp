#include <stdio.h>

double EvalPoly(double, double, double, double);
int main()
{
    double a, b, c, x;
    printf("Input a,b,c,x: ");
    while (scanf("%lf %lf %lf %lf", &a, &b, &c, &x) != EOF)
    {
        printf("ax^2+bx+c = %.5lf\n\n", EvalPoly(a, b, c, x));
        printf("Input a,b,c,x: ");
    }
}
double EvalPoly(double a, double b, double c, double x)
{
    return (a * x * x + b * x + c);
}