#include <stdio.h>

int main()
{
    int x;
    printf("x = ");
    while (scanf("%d", &x) != EOF)
    {
        printf("%d = ", x);
        printf("%d*50 + ", x / 50);
        x %= 50;
        printf("%d*20 + ", x / 20);
        x %= 20;
        printf("%d*10 + ", x / 10);
        x %= 10;
        printf("%d*1\n\n", x);
        printf("x = ");
    }
}