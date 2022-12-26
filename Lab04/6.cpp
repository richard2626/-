#include <stdio.h>

int main()
{
    int x;
    int a, b, c, d;
    printf("a, b, c, d = ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("x = ");
    while (scanf("%d", &x))
    {
        printf("%d = ", x);
        printf("%d*%d + ", x / a, a);
        x %= a;
        printf("%d*%d + ", x / b, b);
        x %= b;
        printf("%d*%d + ", x / c, c);
        x %= c;
        printf("%d*%d\n\n", x / d, d);
        printf("x = ");
    }
}