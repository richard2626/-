#include <stdio.h>

int main()
{
    double e = 0;
    double add = 1;
    int i = 1;
    while (add > 1E-10)
    {
        e += add;
        add /= i;
        i++;
    }
    printf("(a). e = %.11lf\n", e);
    add = 1;
    e = 0;
    i = 1;
    do
    {
        e += add;
        add /= i;
        i++;

    } while (add - add / i > 0.000001);

    printf("(b). e = %.11lf\n", e);
}