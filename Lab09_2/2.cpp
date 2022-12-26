#include <stdio.h>
#include <math.h>

int count(int, int);
int main()
{
    int t, a, b;
    printf("Input time, [A,B]: ");
    while (scanf("%d %d %d", &t, &a, &b))
    {
        if (a < 0 || b > pow(2, t))
        {
            printf("Out of range.\n");
        }
        else
            printf("green grids #: %d\n", count(t, b) - count(t, a - 1));
        printf("Input time, [A,B]: ");
    }
}
int count(int t, int k)
{
    if (k == 0)
        return 0;
    if (t == 0)
        return 1;

    if (k <= pow(2, t - 1))
    {
        return 2 * count(t - 1, k);
    }
    int p = pow(2, t - 1);
    return 2 * count(t - 1, p) + count(t - 1, k - p);
}
