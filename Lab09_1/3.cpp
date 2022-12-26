#include <stdio.h>

int circle(double, int, double, double, double, double);
int main()
{
    double r, x, y;
    int d;
    printf("Input radius, depth, x, y: ");
    while (scanf("%lf %d %lf %lf", &r, &d, &x, &y))
    {
        printf("count = %d\n\n", circle(r, d, x, y, 0, 0));
        printf("Input radius, depth, x, y: ");
    }
}
int circle(double r, int d, double x, double y, double ox, double oy)
{
    int ans = 0;
    if (d == 0)
    {
        if (((x - ox) * (x - ox) + (y - oy) * (y - oy)) < r * r)
            return 1;
        return 0;
    }
    if (((x - ox) * (x - ox) + (y - oy) * (y - oy)) < r * r)
    {
        ans = 1;
    }
    return ans + circle(r / 2, d - 1, x, y, ox + r, oy) + circle(r / 2, d - 1, x, y, ox - r, oy) + circle(r / 2, d - 1, x, y, ox, oy - r) + circle(r / 2, d - 1, x, y, ox, oy + r);
}
