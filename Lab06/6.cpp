#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double seed;
    const double mpy = 25173.0;
    const double inc = 13849.0;
    const double mod = 65535.0;
    printf("input seed: ");
    while (scanf("%lf", &seed) != EOF)
    {
        int count = 0;
        for (int i = 0; i < 10000000; i++)
        {
            seed = fmod(seed * mpy + inc, mod);
            double x = seed / mod;
            seed = fmod(seed * mpy + inc, mod);
            double y = seed / mod;
            seed = fmod(seed * mpy + inc, mod);
            double z = seed / mod;
            double dis = (x - 0.5) * (x - 0.5) + (y - 0.5) * (y - 0.5) + (z - 0.5) * (z - 0.5);
            if (dis <= 0.25)
            {
                count++;
            }
        }

        printf("pi/6 = %.7lf\n", count / 10000000.);
        printf("pi   = %.7lf\n", 6 * count / 10000000.);
        printf("input seed: ");
    }
}