#include <stdio.h>

int main()
{
    int s;
    double ans2 = 0, ans3 = 1;
    int n, ans1 = 0, ans4 = 0, ans5 = 0;
    printf("Input n = ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        ans1 += 2 * i;

    for (int i = 1; i <= 101; i += 2)
        ans2 += (double)1. / i;

    double temp = 1;
    for (int i = 1; i <= 2 * n; i++) // 注意分母是0
    {

        temp *= i;
        ans3 += i % 2 == 0 ? 1. / temp : 0;
    }

    for (int i = 1; i <= n; i++)
        ans4 += i * (i % 2 ? (1) : (-1));

    for (int i = 0, temp = 1; i <= n; i++, temp += (2 * i + 1))
        ans5 += temp;

    printf("(a) %d\n", ans1);
    printf("(b) %.10lf\n", ans2);
    printf("(c) %.10lf\n", ans3);
    printf("(d) %d\n", ans4);
    printf("(e) %d\n", ans5);
}