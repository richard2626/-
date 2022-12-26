#include <stdio.h>

int main()
{
    double sinh = 0;
    double add = 0;
    double x;
    int n = 1;
    int mul = 1;
    printf("x = ");
    while (scanf("%lf", &x) != EOF)
    {
        add = x;
        n = 1;
        sinh = 0;
        while (add > 1E-10)
        {
            sinh += add;
            n++;
            add *= x * x;
            add /= (2 * n - 2) * (2 * n - 1);
        }
        printf("sinh(%.6lf) = %.14lf\n", x, sinh);
        printf("x = ");
    }
}