#include <stdio.h>

int main()
{
    long x;
    printf("Input x=");
    scanf("%ld", &x);
    long sum = 0;
    double sum2 = 0;
    long m = 1;
    double temp = (double)1. / x;
    for (int i = 1; i <= x; i++, sum += m, m = i)
        for (int j = 0; j < i; j++)
            m *= i;

    for (int i = 1; i <= 6; i++, temp /= x * x)
        sum2 += (i % 2 ? (1) : (-1)) * temp;

    printf("(a) %13d\n", (int)sum);
    printf("(b) %.12lf\n", sum2);
}