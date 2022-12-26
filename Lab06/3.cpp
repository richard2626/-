#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seed;
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    long long toss;
    double l;
    long long sum;
    printf("seed n: ");
    while (scanf("%d %d", &seed, &n) != EOF)
    {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        f = 0;
        l = n / 6.;
        sum = 0;
        srand(seed);
        for (int i = 0; i < 1E+7; i++)
        {
            // toss = (long long)(rand() * (RAND_MAX + 1.0) + rand()) % n + 1;
            // if (i % 5000 == 0)
            //     printf("%lld\n", toss);
            toss = (rand() % n + 1);

            if (toss >= 1 && toss <= l)
                a++;
            if (toss >= l + 1 && toss <= 2 * l)
                b++;
            if (toss >= 2 * l + 1 && toss <= 3 * l)
                c++;
            if (toss >= 3 * l + 1 && toss <= 4 * l)
                d++;
            if (toss >= 4 * l + 1 && toss <= 5 * l)
                e++;
            if (toss >= 5 * l + 1 && toss <= 6 * l)
                f++;
        }
        sum = a + b + c + d + e + f;
        printf("(a)");
        printf("A: %lf B:%lf C: %lf D:%lf E: %lf F:%lf\n", double(a) / sum, double(b) / sum, double(c) / sum, double(d) / sum, double(e) / sum, double(f) / sum);
        srand(seed);
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        f = 0;
        for (int i = 0; i < 1E+7; i++)
        {
            // if (i % 5000 == 0)
            //     printf("%lld\n", toss);
            long long RANGE_INV_RANGE = (((long long)RAND_MAX * (RAND_MAX + (long long)2)) / n);
            do
            {
                toss = (long long)(rand() * (RAND_MAX + 1.0) + rand());

            } while (toss >= n * RANGE_INV_RANGE);
            toss /= RANGE_INV_RANGE;
            toss++;
            if (toss >= 1 && toss <= l)
                a++;
            if (toss >= l + 1 && toss <= 2 * l)
                b++;
            if (toss >= 2 * l + 1 && toss <= 3 * l)
                c++;
            if (toss >= 3 * l + 1 && toss <= 4 * l)
                d++;
            if (toss >= 4 * l + 1 && toss <= 5 * l)
                e++;
            if (toss >= 5 * l + 1 && toss <= 6 * l)
                f++;
        }
        sum = a + b + c + d + e + f;
        printf("(b)");
        printf("A: %lf B:%lf C: %lf D:%lf E: %lf F:%lf\n\n", double(a) / sum, double(b) / sum, double(c) / sum, double(d) / sum, double(e) / sum, double(f) / sum);
        printf("seed n: ");
    }
}