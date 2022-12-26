#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double sum(int);
double approxiPI(int, double *);
double caseb(int);

int main()
{
    int n;
    double ans = 4;
    printf("=== Case (a) ===\n");
    printf("Please input n: ");
    while (scanf("%d", &n) != EOF)
    {
        if (n == -9999)
            break;
        if (n < 1)
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
    printf("myPI: %.8lf\n", approxiPI(1, &ans));
}

double sum(int n)
{
    if (n == 1)
    {
        return (double)1 / 4;
    }
    return (double)1 / (n * (n + 3)) + sum(n - 1);
}
double caseb(int n)
{
    if (n == 0)
    {
        return 4;
    }
    return caseb(n - 1) * (double((3. * n) / (3 * n + 1)) * double((3. * n + 2) / (3 * n + 1)));
}
double approxiPI(int n, double *ans)
{
    *ans = *ans * (double((2. * n) / (2 * n + 1)) * double((2. * n + 2) / (2 * n + 1)));
    if (fabs(*ans - M_PI) < 2. * 1E-5)
    {
        printf("n: %d\n", n);
        return *ans;
    }
    return approxiPI(n + 1, ans);
}