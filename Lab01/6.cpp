#include <stdio.h>

int main()
{
    printf("The first 10 Fibonacci numbers:\n");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d %d ", a, b);
    a += b;
    printf("%d ", a);
    b += a;

    printf("%d ", b);
    a += b;

    printf("%d ", a);
    b += a;

    printf("%d ", b);
    a += b;

    printf("%d ", a);
    b += a;

    printf("%d ", b);
    a += b;

    printf("%d ", a);
    b += a;

    printf("%d\n", b);
    a += b;
}