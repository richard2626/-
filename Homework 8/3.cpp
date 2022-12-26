#include <stdio.h>

void separate(double, char *, int *, double *);
int main()
{

    double num, frac;
    int whole;
    char sign;
    printf("Input num: ");
    while (scanf("%lf", &num))
    {
        separate(num, &sign, &whole, &frac);
        printf("%lf = (%c) ( %d + %.6lf )\n", num, sign, whole, frac);
        printf("Input num: ");
    }
}
void separate(double num, char *signp, int *wholep, double *fracp)
{
    *wholep = int(num);
    *signp = num >= 0 ? '+' : '-';
    *fracp = double(num) - double(int(num));
}
