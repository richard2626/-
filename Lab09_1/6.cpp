#include <stdio.h>

int walk(int);
int main()
{
    int n;
    printf("n = ");
    while (scanf("%d", &n) != EOF)
    {
        printf("%d ways\n", walk(n));
        printf("n = ");
    }
}
int walk(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return walk(n - 1) + walk(n - 2) + walk(n - 5);
}