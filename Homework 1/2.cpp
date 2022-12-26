#include <stdio.h>

int main()
{
    float a;
    printf("Program to convert Fahrenheit to Celsius.\nFahrenheit temperature? ");
    scanf("%f", &a);
    a = (5. / 9) * (a - 32);
    printf("Celsius equivalent: %.6f\n", a);
    printf("The bugs comes from ...\n");
    //The bug comes from when you use (5/9) to multiply the other numbers
}