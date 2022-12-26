#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[100] = {0};
    int p[10] = {0};
    int count = 0;
    int sum = 0;

    while (scanf("%d,", &n) != EOF)
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
    printf("MEAN = %.3lf\n", m);
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
    printf("ABOVE MEAN = %d\n", am);
    printf("BELOW MEAN = %d\n\n", bm);
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
            printf("90~100: ");
        else
            printf("%2d~%3d: ", i * 10, i * 10 + 9);
        for (int j = 0; j < *(p + i); j++)
            printf("*");
        printf("\n");
    }
}