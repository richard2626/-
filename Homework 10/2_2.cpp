#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("data2.txt", "r");
    FILE *out;
    out = fopen("output2.txt", "w");
    int n;
    int arr[100] = {0};
    int p[10] = {0};
    int count = 0;
    int sum = 0;

    while (fscanf(fp, "%d,", &n) != EOF)
    {
        if (n == -1)
            break;
        *(arr + count) = n;

        if (n == 100)
        {
            *(p + 9) += 1;
        }
        else
            *(p + (n / 10)) += 1;

        count++;
        sum += n;
    }

    double m = double(sum) / count;
    fprintf(out, "MEAN = %.3lf\n", m);
    int am = 0;
    int bm = 0;
    for (int i = 0; i < count; i++)
    {
        if (*(arr + i) > m)
        {
            // printf("%d", *(arr + i));
            am++;
        }
        if (*(arr + i) < m)
            bm++;
    }
    fprintf(out, "ABOVE MEAN = %d\n", am);
    fprintf(out, "BELOW MEAN = %d\n\n", bm);
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
            fprintf(out, "90~100: ");
        else
            fprintf(out, "%2d~%3d: ", i * 10, i * 10 + 9);
        for (int j = 0; j < *(p + i); j++)
            fprintf(out, "*");
        fprintf(out, "\n");
    }
}