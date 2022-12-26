#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    double a, b;
    printf("Input data: ");
    while (scanf("%lf", &n) != EOF)
    {
        double k = 1;
        a = n + 1;
        while (k > 1E-8)
        {
            b = a - (double)((a * a) - n) / (2 * a);
            k = a - b;
            a = b;
        }
        printf("sqrt(%d) = %.8lf\n", (int)n, b);
        printf("Input data: ");
    }
}