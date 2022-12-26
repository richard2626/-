#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, c, d, e;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    srand(54321);
    for (int i = 0; i < 10000000; i++)
    {
        switch ((int)((rand() / (RAND_MAX + 1.0)) * 5.0 + 1))
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
            //        case 6:
            //            f++;
            //            break;
        }
    }
    printf("1: %.6lf\n", a / 10000000.);
    printf("2: %.6lf\n", b / 10000000.);
    printf("3: %.6lf\n", c / 10000000.);
    printf("4: %.6lf\n", d / 10000000.);
    printf("5: %.6lf\n", e / 10000000.);
    //    printf("6: %.7lf\n", f / 5000000.);
}