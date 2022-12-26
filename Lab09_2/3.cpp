#include <stdio.h>
#include <math.h>

int tri(int, double, double, double, double, double, double);
int main()
{

    double l, r, x, y;
    int n;
    printf("(N,L,x,y,r): ");
    while (scanf("%d %lf %lf %lf %lf", &n, &l, &x, &y, &r) != EOF)
    {
        printf("%d triangle(s) in circle\n\n", tri(n, l / 2, r, x, y, l / 2, sqrt(3) * l / 6));
        printf("(N,L,x,y,r): ");
    }
}

int tri(int n, double l, double r, double x, double y, double ox, double oy)
{
    double x1, y1, x2, y2, x3, y3;
    x1 = ox + l / 2;
    y1 = oy + l / (2 * sqrt(3));
    x2 = ox - l / 2;
    y2 = oy + l / (2 * sqrt(3));
    x3 = ox;
    y3 = oy - l / sqrt(3);
    int ans = 0;
    if (n == 1)
    {
        if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y <= r * r) && (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) <= r * r && (x3 - x) * (x3 - x) + (y3 - y) * (y3 - y) <= r * r)
        {
            return 1;
        }
        return 0;
    }
    if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y <= r * r) && (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) <= r * r && (x3 - x) * (x3 - x) + (y3 - y) * (y3 - y) <= r * r)
    {
        ans = 1;
    }
    return ans + tri(n - 1, l / 2, r, x, y, ox, oy + l / sqrt(3)) + tri(n - 1, l / 2, r, x, y, ox + l / 2, oy - l / (2 * sqrt(3))) + tri(n - 1, l / 2, r, x, y, ox - l / 2, oy - l / (2 * sqrt(3)));
}
