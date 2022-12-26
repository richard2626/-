#include <stdio.h>

int main()
{
    double a, b, c, x, y;
    printf("Please input six real numbers for  a,b,c,d,e,f: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("12345678901234567890123456789012345678901234567890\n");
    printf("a =%13.4lf b =%13.4lf c =%13.4lf \n", a, b, c);
    b /= a;
    c /= a;
    scanf("%lf %lf %lf", &x, &a, &y);
    printf("d =%13.4lf e =%13.4lf f =%13.4lf \n", x, a, y);
    a /= x;
    y /= x;
    x = (c * a - b * y) / (a - b);
    printf("x =%13.4lf", x);
    y = (y - c) / (a - b);
    printf(" y =%13.4lf", y);

    // x = (c * e - b * f) / (a * e - b * d);
    // y = (a * f - c * d) / (a * e - b * d);
}