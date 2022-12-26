#include <stdio.h>

int main()
{
    int t;
    int x;
    printf("-----Method I-----\n");
    printf("Please input the order: ");
    scanf("%d", &t);
    printf("Please input x: ");
    scanf("%d", &x);
    int f = 0;
    int a;
    int sum = 0;
    for (int i = 0; i <= t; i++)
    {
        printf("Please input a_%d: ", t - i);
        scanf("%d", &a);
        f += a;
        f *= x;
        sum += i;
    }
    f /= x;
    printf("Answer: %d, ADD time: %d, Mul time: %d\n\n", f, t, sum);

    printf("-----Method II----\n");
    printf("Please input the order: ");
    scanf("%d", &t);
    printf("Please input x: ");
    scanf("%d", &x);
    f = 0;
    printf("Please input a_%d: ", t);
    scanf("%d", &a);
    f = a;
    for (int i = 1; i <= t; i++)
    {
        printf("Please input a_%d: ", t - i);
        scanf("%d", &a);
        f *= x;
        f += a;
    }
    printf("Answer: %d, ADD time: %d, Mul time: %d", f, t + 1, t + 1);
}