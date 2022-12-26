#include <stdio.h>

int main()
{
    int n;
    printf("Input: ");
    scanf("%d", &n);
    for (int i = 0; i < (2 * n - 3); i++)
    {
        int ch = 65 + (n - 2);
        printf("  ");
        for (int j = 0; j < (2 * n - 3); j++)
        {

            if ((i < n - 2 && (ch - 65) < i + 1) || (i >= n - 2 && (ch - 65) < 2 * n - 3 - i))
            {
                if (j == i || j == (2 * n - 4 - i))
                {
                    printf("  ");
                }
                else
                    printf("%c ", ch);
            }
            else
            {
                printf("  ");
            }

            if (j < (n - 2))
            {
                ch--;
            }
            else
                ch++;
        }
        printf("\n");
    }
}