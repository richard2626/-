#include <stdio.h>

double force(double, double, double);
int main()
{
    double ipos;
    double a, b;
    printf("Please input initial position, a, and b: ");
    while (scanf("%lf %lf %lf", &ipos, &a, &b))
    {
        printf("Voltage:\n");
        double v;
        while (scanf("%lf", &v) != EOF)
        {
            if (v > 99999 || v < -99999)
                break;
            ipos += force(v, a, b);
        }
        printf("Final position: %.4lf\n\n", ipos);
        printf("Please input initial position, a, and b: ");
    }
}
double force(double v, double a, double b)
{
    double ans;
    if (v < -0.2)
    {
        ans = double(a) * v;
        return ans;
    }
    if (v >= -0.2 && v <= 0.2)
    {
        return 0;
    }
    if (v > 0.2)
    {
        ans = double(b) * v;
        return ans;
    }
    return 0;
}
