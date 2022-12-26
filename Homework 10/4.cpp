#include <stdio.h>
#include <stdlib.h>

void steps(int, int, int *);
int main()
{
    int *arr;
    int n;
    printf("Please input n meters: ");
    while (scanf("%d", &n) != EOF)
    {
        arr = new int[n];
        steps(0, n, arr);
        delete[] arr;
        printf("\n");
        printf("Please input n meters: ");
    }
}
void steps(int n, int ans, int *arr)
{
    if (ans == 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else if (ans >= 2)
    {
        arr[n] = 1;
        steps(n + 1, ans - 1, arr);

        arr[n] = 2;
        steps(n + 1, ans - 2, arr);
    }
    else
    {
        arr[n] = 1;
        steps(n + 1, ans - 1, arr);
    }
}