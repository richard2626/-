#include <stdio.h>

int main()
{
    int num = 1;
    double ans = 0;
    while ((1. / num) > 1E-9)
    {
        ans += (((num + 1) / 2) % 2 ? 1 : -1) * (1. / num);
        num += 2;
    }
    printf("pi/4 = %.11lf\n", ans);
}