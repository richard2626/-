#include <stdio.h>
double Round(double, int);

int main()
{

    double num;
    int n;
    printf("Please input a number and a rounded place:");
    while (scanf("%lf %d", &num, &n) != EOF)
    {
        printf("The result is %.*lf\n", n, Round(num, n));
         printf("Please input a number and a rounded place:");
    }
}
double Round(double num, int n)
{
    for (int i = 0; i < n; i++)
    {
        num *= 10;
    }

    num = (int)(num + 0.5);
    for (int i = 0; i < n; i++)
    {
        num /= 10;
    }
    return num;
}
