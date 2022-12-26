#include <stdio.h>

int main()
{
    int a, b, c;
    int n, k, r;
    int t;
    printf("Input 3 numbers: ");
    while (scanf(" %d %d %d", &n, &k, &r) != EOF)
    {
        printf("ab = %d , ", n * k);
        printf("bc = %d , ", k * r);
        printf("ca = %d\n", n * r);
        a = n * k;
        b = k * r;
        c = n * r;
        if (a < b)
        {
            t = a;
            a = b;
            b = t;
        }
        if (a < c)
        {
            t = a;
            a = c;
            c = t;
        }
        if (b < c)
        {
            t = b;
            b = c;
            c = t;
        }

        // a = n > k ? (r > n ? r : n) : (r < n ? k : r);
        // b = n > k ? (r > n ? n : (r > k ? r : k)) : (r > k ? k : (r < n ? n : r));
        // c = n < k ? (r < n ? r : n) : (r > n ? k : r);

        printf("From smallest to largest is: %d < %d < %d\n\n", c, b, a);
        printf("Input 3 numbers: ");
    }
}