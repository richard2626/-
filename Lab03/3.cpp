#include <stdio.h>

int main()
{
    int n;
    printf("Input odd number: ");
    scanf("%d", &n);

    printf("\n     ");
    for (int i = -((n - 1) / 2); i <= (n - 1) / 2; i++)
    {
        printf("%4d", i);
    }
    printf("\n-----");
    for (int i = 0; i < n; i++)
    {
        printf("----");
    }
    printf("\n");
    int col = -((n - 1) / 2);
    int row = -((n - 1) / 2);
    for (int i = 0; i < n * n; i++)
    {
        col == -((n - 1) / 2) ? printf("%4d|", row), printf("%4d", col * row) : printf("%4d", col * row);
        col == (n - 1) / 2 ? printf("\n"), row++, col = -((n - 1) / 2) : col++;
    }
}