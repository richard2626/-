#include <stdio.h>

int main()
{
    int n;
    printf("Input: ");
    scanf("%d", &n);
    printf("\n  ");
    for (int i = 1; i <= n; i++)
    {
        printf("%3d", i);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%2d", i + 1);
        for (int j = 0; j < n; j++)
        {
            (i < (n + 1) / 2) ? (j >= i && j <= n - i - 1) ? printf("   ") : printf("  *") : ((j <= i && j >= n - i - 1) ? printf("   ") : printf("  *"));
        }
        printf("\n");
    }
}