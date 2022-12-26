#include <stdio.h>

double force(double);
int main()
{
    double ipos;
    printf("Please input initial position: ");
    while (scanf("%lf", &ipos))
    {
        printf("Voltage:\n");
        double v;
        while (scanf("%lf", &v) != EOF)
        {
            if (v > 99999 || v < -99999)
                break;

            ipos += force(v);
        }
        printf("Final position: %.4lf\n\n", ipos);
        printf("Please input initial position: ");
    }
}
double force(double v)
{
    if (v < -0.2)
    {
        return 1. * v;
    }
    if (v >= -0.2 && v <= 0.2)
    {
        return 0;
    }
    if (v > 0.2)
    {
        return 2. * v;
    }
    return 0;
}
