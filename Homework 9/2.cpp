#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double sum(int);
double approxiPI(int);
double caseb(int);

int main()
{
    int n;
    printf("=== Case (a) ===\n");
    printf("Please input n: ");
    while (scanf("%d", &n) != EOF)
    {
        if (n == -9999)
            break;
        if (n <= 1)
            printf("illegal input\n\n");
        else
            printf("%.8lf\n\n", sum(n));
        printf("Please input n: ");
    }

    printf("=== Case (b) ===\n");
    printf("Please input n: ");
    while (scanf("%d", &n) != EOF)
    {
        if (n == -9999)
            break;
        printf("%.8lf\n", caseb(n));
        printf("Please input n: ");
    }
    printf("=== Case (c) ===\n");
    printf("<math.h> M_PI: %.8lf\n", M_PI);
    approxiPI(0);
}

double sum(int n)
{
    if (n == 2)
    {
        return (double)1 / 2;
    }
    return (double)1 / (n * (n - 1)) + sum(n - 1);
}
double caseb(int n)
{
    if (n == 0)
    {
        return 4;
    }
    return (((2 * n) * (2 * n + 2)) / double((2 * n + 1) * (2 * n + 1))) * caseb(n - 1);
}

double approxiPI(int n)
{
    double ans = caseb(n);
    if (fabs(ans - M_PI) < 1E-4)
    {
        printf("n: %d\n", n);
        printf("myPI: %.8lf\n", ans);
        return 0;
    }
    return approxiPI(++n);
}