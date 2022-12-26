#include <stdio.h>

int main()
{
    double x;
    double sin;
    double cos;
    double add;
    double add1;
    double err;
    int n = 0;
    printf("Input x: ");
    while (scanf("%lf", &x))
    {
        sin = x;
        cos = 1;
        add = x;
        add1 = 1;
        n = 1;
        err = 1;
        while (err > 0 ? err : err * -1 > 1e-10)
        {
            add *= (-1) * x * x / ((n + 1) * (n + 2));

            sin += add;

            add1 *= (-1) * x * x / ((n + 1) * (n));
            cos += add1;

            n += 2;
            err = (sin * sin + cos * cos - 1);
        }

        printf("sin = %.14lf\n", sin);
        printf("cos = %.14lf\n", cos);
        printf("sin^2 + cos^2 = %.12lf\n", sin * sin + cos * cos);
        printf("err = %.12lf\n\n", err);
        printf("Input x: ");
    }
}