#include <stdio.h>

int main()
{
    int f1 = 1;
    int f2 = 1;
    int f3;
    int sum = 2;
    printf("1,1,");
    while (sum < 1000)
    {
        f3 = f1 + f2;
        sum += f3;
        printf("%d", f3);
        f1 = f2;
        f2 = f3;
        sum < 1000 ? printf(",") : 1;
    }
}