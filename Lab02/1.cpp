#include <stdio.h>

int main()
{
    double input;
    printf("Please input a number (format: ABC.DEF): ");
    scanf("%lf", &input);
    printf("Output  (format: A0B0C0.D0E0F): %.5lf\n", (int)input % 10 * 10 + (int)input / 10 % 10 * 1000 + (int)input / 100 % 10 * 100000 + (int)(input * 1000) % 10 * 0.00001 + (int)(input * 100) % 10 * 0.001 + (int)(input * 10) % 10 * 0.1);
    printf("Reverse (format: F0E0D.0C0B0A): %.6lf\n", (int)(input * 10) % 10 + (int)(input * 100) % 10 * 100 + (int)(input * 1000) % 10 * 10000 + (int)input % 10 * 0.01 + (long)input / 10 % 10 * 0.0001 + (long)input / 100 % 10 * 0.000001);
}