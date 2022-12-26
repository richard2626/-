#include <stdio.h>

int main()
{
    double ms = 668500000;
    double f0 = 2e+10;
    double f1 = 5001234500000;

    double v;

    v = ms * (f1 - f0) / (f0 + f1);
    printf("v = %.13lf\n", v);
    printf("v = %.13le\n", v);
    f1 = (-1 * ms - 195) * f0 / (195 - ms);
    printf("f1 = %.13lf\n", f1);
    printf("f1 = %.13le", f1);
}

// 195 = ms * ( f1 - f0 ) / ( f1 + f0 );