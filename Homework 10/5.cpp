#include <stdio.h>

void makearr(int);
int main()
{
    int **ans;
    int *arr;
    int n;
    printf(">>>Enter n: ");
    while (scanf("%d", &n) != EOF)
    {
        arr = new int[n];
        ans = new int *[n];
        for (int i = 0; i < n; i++)
        {
            ans[i] = new int[n];
        }
        printf("Enter num: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = arr[(i - j) > 0 ? i - j : j - i];
            }
        }
        printf("The matrix:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%3d", ans[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < n; i++)
            delete[] ans[i];
        delete[] ans;
        delete[] arr;
        printf(">>>Enter n: ");
    }
}
