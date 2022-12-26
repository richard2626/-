#include <stdio.h>

int main()
{
    double a, b, c, d, e, f, x, y;
    printf("Input a b c d e f: ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    printf("1234567890123456789012345678901234567890123456789\n");
    printf("a =%11.5lf b =%11.5lf c =%11.5lf \nd =%11.5lf e =%11.5lf f =%11.5lf \nx =%11.5lf y =%11.5lf", a, b, c, d, e, f, x, y);
}