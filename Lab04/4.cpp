#include <stdio.h>

int main()
{
    double e = 0;
    double add = 1;
    double i = 1;
    double x;
    printf("x = ");
    scanf("%lf", &x);
    while (add > 1E-8)
    {
        e += add;
        add /= i;
        i++;
        add *= x;
    }
    printf("(a). e^%.3lf = %.11lf\n", x, e);
    add = 1;
    double sum;
    e = 1;
    i = 1;
    while ((e - sum > 1E-3))
    {
        add *= x / i;
        sum = e;
        e += add;
        i++;
    }

    printf("(b). e^%.3lf = %.11lf\n", x, e);
}