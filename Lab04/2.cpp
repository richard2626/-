#include <stdio.h>

int main()
{
    int n;
    printf("n = ");
    while (scanf("%d", &n))
    {
        n--;
        printf("\n");
        for (int i = 0; i <= n; i++)
        {
            printf(" ");
            for (int j = 0; j < i; j++)
            {
                printf("   ");
            }

            for (int k = 0; k <= n - i; k++)
            {
                long long num1 = 1;
                long long num2 = 1;
                long long num3 = 1;
                for (int x = 1; x <= n - i; x++)
                {
                    num1 *= x;
                }
                for (int x = 1; x <= k; x++)
                {
                    num2 *= x;
                }
                for (int x = 1; x <= n - i - k; x++)
                {
                    num3 *= x;
                }
                printf("%6lld", num1 / num3 / num2);
            }
            printf("\n");
        }
        printf("n = ");
    }
}