#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    printf(">>>>Enter r and c: ");
    int r;
    int c;
    int input;
    int sum;
    while (scanf("%d %d", &r, &c))
    {
        arr = new int *[r];
        sum = 0;
        for (int i = 0; i < r; i++)
        {
            arr[i] = new int[c];
        }
        printf("Please input the elements of matrix:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &input);
                *(*(arr + i) + j) = input;
                sum += input;
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", *(*(arr + i) + j));
            }
            printf("\n");
        }
        printf("sum all: %d\n\n", sum);
        for (int i = 0; i < r; i++)
        {
            sum = 0;
            for (int j = 0; j < c; j++)
            {
                sum += arr[i][j];
            }
            printf("sum of row %d: %d\n", i, sum);
        }
        printf("\n");
        for (int j = 0; j < c; j++)
        {
            sum = 0;
            for (int i = 0; i < r; i++)
            {
                sum += arr[i][j];
            }
            printf("sum of column %d: %d\n", j, sum);
        }
        printf("\n");
        for (int i = 0; i < r; i++)
            free(arr[i]);
        free(arr);
        printf(">>>>Enter r and c: ");
    }
}