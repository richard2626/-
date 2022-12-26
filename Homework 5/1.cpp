#include <stdio.h>

int main()
{
    int count;
    int n;
    double sum;
    double a = 5, b = 15;
    double h;
    double x;
    printf("Please input n: ");
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        count = 2;
        h = (b - a) / n;

        sum += 5 * a * a * a + 2 * a * a + 7 * a + 3 + 5 * b * b * b + 2 * b * b + 7 * b + 3;
        sum *= h / 2.;
        x = a + h;
        while (count <= n)
        {
            sum += h * (5 * x * x * x + 2 * x * x + 7 * x + 3);
            x += h;
            count++;
        }
        printf("Trapezoidal Rule: %.8lf\n", sum);

        count = 1;
        sum = 0;
        x = a;
        while (count <= n)
        {
            sum += h * (5 * x * x * x + 2 * x * x + 7 * x + 3);
            x += h;
            count++;
        }
        printf("Rectangular Rule: %.8lf\n\n", sum);
        printf("Please input n: ");
    }
}