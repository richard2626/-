#include <stdio.h>

int main()
{
    int n, k, r;
    long long ans1 = 1;
    printf("(n,k,r)= ");
    scanf("%d %d %d", &n, &k, &r);
    int a, b, c;
    long long ans2 = 1;
    a = n > k ? (r > n ? r : n) : (r < n ? k : r);
    b = n > k ? (r > n ? n : (r > k ? r : k)) : (r > k ? k : (r < n ? n : r));
    c = n < k ? (r < n ? r : n) : (r > n ? k : r);
    for (long i = a + 1; i <= a + b; i++)
    {
        ans1 *= i;
    }
    for (int j = 1; j <= b; j++)
    {
        ans1 /= j;
    }
    printf("%lld\n", ans1);
    for (long i = b + a + 1; i <= a + b + c; i++)
    {
        ans2 *= i;
    }
    printf("%lld\n", ans2);
    for (int j = 1; j <= c; j++)
    {
        ans2 /= j;
    }

    printf("ans=%lld\n", ans1 * ans2);
}