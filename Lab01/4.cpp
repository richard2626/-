#include <stdio.h>
// homework 1 第二題
int main()
{

    double f, c, r, d;
    printf("Program to convert Fahrenheit to Celsius.\nFahrenheit temperature? ");
    scanf("%lf", &f);
    c = ((double)5 / 9) * (f - 32);
    r = (9 / 5.) * (c + 273.15);

    printf("Celsius equivalent: %.6lf\n", c);
    printf("Rankine equivalent: %.6lf\n", r);
    printf("Delisle equivalent: %.6lf\n", (5 / 6) * (671.67 - r));
    printf("The bugs comes from ...\n");
    // The bug comes from when you use (5/9) to multiply the other numbers
}