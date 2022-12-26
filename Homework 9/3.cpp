#include <stdio.h>

double power(long long, long long);
int main()
{
    int x, y;
    printf("x,y = ");
    while (scanf("%d %d", &x, &y))
    {
        printf("power(x,y)= %.8lf\n", power(x, y));
        printf("x,y = ");
    }
}
double power(long long x, long long y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    if (y > 1)
        return x * power(x, y - 1);
    return (double)1 / power(x, -y);
}