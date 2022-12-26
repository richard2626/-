#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, c, d, e, f;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    srand(54321);
    for (int i = 0; i < 5000000; i++)
    {
        switch ((int)((rand() / (RAND_MAX + 1.0)) * 6.0 + 1))
        {
        case 1:
            a++;
            break;
        case 2:
            b++;
            break;
        case 3:
            c++;
            break;
        case 4:
            d++;
            break;
        case 5:
            e++;
            break;
        case 6:
            f++;
            break;
        }
    }
    printf("1: %.7lf\n", a / 5000000.);
    printf("2: %.7lf\n", b / 5000000.);
    printf("3: %.7lf\n", c / 5000000.);
    printf("4: %.7lf\n", d / 5000000.);
    printf("5: %.7lf\n", e / 5000000.);
    printf("6: %.7lf\n", f / 5000000.);
}