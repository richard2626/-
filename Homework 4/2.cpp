#include <stdio.h>

int main()
{
    double sin = 0;
    double add = 0;
    double x;
    int n = 1;
    printf("x = ");
    while (scanf("%lf", &x) != EOF)
    {
        add = x;
        n = 1;
        sin = 0;
        while (add > 1E-9)
        {
            sin += (n % 2 ? 1 : -1) * add;
            n++;
            add *= x * x;
            add /= (2 * n - 2) * (2 * n - 1);
        }
        printf("sin(%.6lf) = %.11lf\n", x, sin);
        printf("x = ");
    }
}