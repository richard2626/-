#include <stdio.h>

long long domino(int);
int main()
{
    int n;
    printf("n= ");
    while (scanf("%d", &n))
    {
        printf("%lld ways\n", domino(n));
        printf("n= ");
    }
}
long long domino(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;
    return domino(n - 1) + domino(n - 3);
}