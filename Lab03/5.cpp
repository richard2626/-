#include <stdio.h>

int main()
{
    int o;
    int x;
    int add = 0;
    int mul = 0;
    printf("-----Method I-----\n");
    printf("Please input the order: ");
    scanf("%d", &o);
    printf("Please input x: ");
    scanf("%d", &x);
    double ans1 = 0;
    int f = x;
    int a;
    for (int i = 0; i <= o; i++)
    {
        printf("Please input a_%d: ", o - i);
        scanf("%d", &a);
        ans1 += a * (1. / (o + 1 - i));
        ans1 *= x;
        add++;
        mul += (o + 1 - i);
    }
    add--;
    printf("Answer: %.8lf, ADD time: %d, MUL time: %d\n\n", ans1, add, mul);

    add = 0;
    mul = 1;
    ans1 = 0;
    printf("-----Method II-----\n");
    printf("Please input the order: ");
    scanf("%d", &o);
    printf("Please input x: ");
    scanf("%d", &x);
    printf("Please input a_%d: ", o);
    scanf("%d", &a);
    ans1 = 1. / (o + 1) * a;
    add++;
    ans1 *= x;
    mul++;
    for (int i = 1; i <= o; i++)
    {
        printf("Please input a_%d: ", o - i);
        scanf("%d", &a);
        ans1 += a * (1. / (o + 1 - i));
        add++;
        mul++;
        ans1 *= x;
    }
    printf("Answer: %.8lf, ADD time: %d, MUL time: %d\n", ans1, add, mul);
}