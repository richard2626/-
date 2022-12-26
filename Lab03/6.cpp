#include <stdio.h>

int main()
{
    double ms = 6.70616626e+8;
    double f0 = 3e+10;
    double f1 = 5.001234500000e+12;

    double v;

    v = ms * (f1 - f0) / (f0 + f1);
    printf("v = %.10lf\n", v);
    printf("v = %.10le\n", v);
    f1 = (-1 * ms - 195) * f0 / (195 - ms);
    printf("f1 = %.10lf\n", f1);
    printf("f1 = %.10le\n", f1);
}

// 195 = ms * ( f1 - f0 ) / ( f1 + f0 );