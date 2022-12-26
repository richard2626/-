#include <stdio.h>

int main()
{
    double ans2 = 0, ans3 = 0;
    long n, ans1 = 0, ans4 = 0, ans5 = 0;
    printf("Input n = ");
    scanf("%ld", &n);
    for (int i = 10; i <= n; i++)
        ans1 += 2 * i;
    for (int i = 1; i <= 101; i += 2)
        ans2 += (double)1. / i;
    for (long i = 1, temp = 1; i <= n; i++, temp *= i)
        ans3 += (double)1. / temp;
    for (int i = 1; i <= n; i++)
        ans4 += i * (i % 2 ? (1) : (-1));
    for (long i = 1, temp = 1; i <= n; i++, temp += i)
        ans5 += temp;
    printf("(a) %ld\n", ans1);
    printf("(b) %.12lf\n", ans2);
    printf("(c) %.12lf\n", ans3);
    printf("(d) %ld\n", ans4);
    printf("(e) %ld\n", ans5);
}