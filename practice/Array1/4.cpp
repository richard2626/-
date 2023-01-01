#include <stdio.h>
int *sieve(int n);
int main()
{
    int *arr;
    int n;
    printf("Input n:");
    while (scanf("%d", &n))
    {
        printf("\n");
        arr = sieve(n);
        printf("prime numbers:\n");
        for (int i = 2; i < n + 1; i++)
        {
            if (arr[i] != 0)
                printf("%d ", i);
        }
        printf("\n\n");
        printf("Input n:");
    }
}
int *sieve(int n)
{
    int *prime = new int[n + 1];
    int *arr = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        arr[i] = i;
        prime[i] = 1;
    }
    int mul;
    for (int i = 2; i * i < n + 1; i++)
    {
        if (prime[i] == 1)
        {
            mul = arr[i] * arr[i];
            while (mul <= n)
            {
                prime[mul] = 0;
                mul += arr[i];
            }
        }
    }
    return prime;
}