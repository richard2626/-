#include <stdio.h>

int domino(int);
int ans[1000000] = {0};
int main()
{
    int n;
    while (scanf("%d", &n))
    {
        printf("%d\n", domino(n));
    }
}
int domino(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n < 0)
        return 0;
    if (n == 3)
        return 2;
    if (ans[n] != 0)
        return ans[n];
    return ans[n] = domino(n - 1) + domino(n - 3);
}