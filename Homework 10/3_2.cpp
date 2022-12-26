#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    FILE *fp;
    fp = fopen("data3.txt", "r");
    FILE *out;
    out = fopen("output3.txt", "w");
    int n;
    fscanf(fp, "%d", &n);
    int r;
    int c;
    int input;
    int sum;
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d %d", &r, &c);
        printf("%d %d", r, c);
        arr = new int *[r];
        sum = 0;
        for (int i = 0; i < r; i++)
        {
            arr[i] = new int[c];
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fscanf(fp, "%d", &input);
                *(*(arr + i) + j) = input;
                sum += input;
            }
        }
        fprintf(out, "The matrix:\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                fprintf(out, "%d ", *(*(arr + i) + j));
            }
            fprintf(out, "\n");
        }
        fprintf(out, "sum all: %d\n\n", sum);
        for (int i = 0; i < r; i++)
        {
            sum = 0;
            for (int j = 0; j < c; j++)
            {
                sum += arr[i][j];
            }
            fprintf(out, "sum of row %d: %d\n", i, sum);
        }
        fprintf(out, "\n");
        for (int j = 0; j < c; j++)
        {
            sum = 0;
            for (int i = 0; i < r; i++)
            {
                sum += arr[i][j];
            }
            fprintf(out, "sum of column %d: %d\n", j, sum);
        }
        fprintf(out, "\n");
        for (int i = 0; i < r; i++)
            free(arr[i]);
        free(arr);
    }
    fclose(out);
    fclose(fp);
}