#include <stdio.h>
// 上機: float 改成 double

int main()
{
    double x;
    printf("Input one real numbers\nCalculate the corresponding polynomial:f(x) = x^3 + 5x^2 + 10x + 15\n");
    printf("Input: ");
    scanf("%lf", &x);
    double answer = x * x * x + 5 * x * x + 10 * x + 15;
    printf("Input is %lf and f(%lf) = %.6lf\n", x, x, answer);
}