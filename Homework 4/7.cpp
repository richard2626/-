#include <stdio.h>

int main()
{
    int t = 0;
    int o = 0;
    int d = 0;
    int g = 0;
    int num;
    int ans;
    while (g != 10)
    {
        t = 0;
        while (t != 10)
        {
            o = 0;
            while (o != 10)
            {
                d = 0;
                while (d != 10)
                {
                    num = 4 * (100 * t + 10 * o + o);
                    ans = g * 1000 + 100 * o + 10 * o + d;
                    if (num == ans && t != g && t != o && t != d && g != o && g != d && o != d)
                    {
                        printf("T=%d, O=%d, G=%d, D=%d\n", t, o, g, d);
                    }
                    d++;
                }
                d--;
                o++;
            }
            o--;
            t++;
        }
        t--;
        g++;
    }

    printf("");
}