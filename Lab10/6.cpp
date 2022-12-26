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
                for (int k = 0; k < n; k++)
                {
                    if (i - j == k || j - i == k)
                        ans[i][j] = arr[k];
                }
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
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<n;i++){
        	sum1 += ans[i][i];
        	sum2 += ans[i][n-i-1];
		}
        printf("Diagonal sum \\:  %2d\n",sum1);
        printf("Diagonal sum /:  %2d\n\n",sum2);
        
        for (int i = 0; i < n; i++)
            delete[] ans[i];
        delete[] ans;
        delete[] arr;
        printf(">>>Enter n: ");
    }
}
