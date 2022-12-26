#include <stdio.h>

int main()
{
    printf("The first 10 Fibonacci numbers:\n");
    int a = 0;
    int b = 1;
    a += b;
    printf("0 1 %d ", a);
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