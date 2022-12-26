#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double countpi(int);
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("pi=%.14lf\n", 2. / countpi(n));
        printf("M_PI=%.14lf\n", M_PI);
    }
}
double countpi(int n)
{
    if (n < 0)
        return 1;
    if (n == 0)
        return sqrt(2) / 2;
    return countpi(n - 1) * (sqrt(2 + (countpi(n - 1) / countpi(n - 2)) * 2) / 2);
}