#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("seed = 55555, N = 10000000\n"); // 嗨嗨
    printf("<== case a ==>\n(1)\n");
    long long exit_time = 0;
    int pos = 0;
    int l = 0, r = 0;
    long long n = 10000000;
    long long time = n;
    srand(55555);
    for (int i = 0; i < 1E+7; i++)
    {
        while (1)
        {
            if ((int)((rand() / (RAND_MAX + 1.000)) * 2.0))
            {
                pos++;
            }
            else
            {
                pos--;
            }
            if (pos == -2)
            {
                pos = -4;
            }
            exit_time++;
            if (pos == -5 || pos == 4)
            {
                pos == -5 ? l++ : r++;
                pos = 0;
                break;
            }
        }
    }
    printf("L5: %.7lf %%\n", (double)l / 100000);
    printf("R4: %.7lf %%", (double)r / 100000);
    printf("\nThe dog has a better chance to exit from %c%d\n", l > r ? 'L' : 'R', l > r ? 5 : 4);
    printf("(2)\nThe dog stays in the tunnel for %.7lf minutes on the average\n\n", (double)exit_time / time);

    exit_time = 0;
    pos = 0;
    l = 0;
    r = 0;

    for (int i = 0; i < 1E+7; i++)
    {
        while (1)
        {
            if ((int)((rand() / (RAND_MAX + 1.000)) * (1 + 1.0 - 0)))
            {
                pos++;
            }
            else
            {
                pos--;
                if (pos == -2)
                {
                    pos = -4;
                }
            }
            exit_time++;
            if (pos == -5 || pos == 4)
            {
                pos == -5 ? l++ : r++;

                pos = 0;
                break;
            }
        }
    }
    printf("<== case b ==>\n");
    printf("(1)\n");
    printf("L5: %.7lf %%\n", (double)l / 100000);
    printf("R4: %.7lf %%", (double)r / 100000);
    printf("\nThe dog has a better chance to exit from %c%d\n", l > r ? 'L' : 'R', l > r ? 5 : 4);
    printf("(2)\nThe dog stays in the tunnel for %.7lf minutes on the average", (double)exit_time / time);
}
