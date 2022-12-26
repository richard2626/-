#include <stdio.h>

int main()
{
    int count;
    int n;
    double sum;
    double a = 2, b = 13;
    double h;
    double x;
    printf("Please input n: ");
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;

        h = (b - a) / n;

        sum += 2 * a * a * a - 6 * a * a + 5 * a - 7 + 2 * b * b * b - 6 * b * b + 5 * b - 7;

        x = a + h;
        count = 2;
        while (count <= n)
        {
            sum += 2 * (2 * x * x * x - 6 * x * x + 5 * x - 7);
            x += h;
            count++;
        }
        sum *= h / 2.;

        printf("Trapezoidal Rule: %.8lf\n", sum);

        count = 1;
        sum = 0;
        x = a;
        while (count <= n)
        {
            sum += h * (2 * x * x * x - 6 * x * x + 5 * x - 7);
            x += h;
            count++;
        }
        printf("Rectangular Rule: %.8lf\n\n", sum);
        printf("Please input n: ");
    }
}