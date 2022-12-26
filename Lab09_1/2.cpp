#include <stdio.h>

int domino(int);
int main()
{
    int n;
    printf("n = ");
    while (scanf("%d", &n))
    {
        printf("There are %d ways\n\n", domino(n));
        printf("n = ");
    }
}
int domino(int n)
{
    int ans = 0;
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 5;
    ans += domino(n - 1);
    ans += domino(n - 2);
    for (int i = 3; i <= n; i++)
    {
        ans += 2 * domino(n - i);
    }
    return ans;
}