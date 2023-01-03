#include <stdio.h>
#include <ctype.h>

bool IsPrime(int);
int main()
{
    int n;
    printf("Input a number: ");
    while (scanf("%d", &n) != EOF)
    {
        if (IsPrime(n))
        {
            printf("%d is prime\n\n", n);
        }
        else
        {
            printf("%d is not prime\n\n", n);
        }
        printf("Input a number: ");
    }
}

bool IsPrime(int a)
{
    if (a == 1)
    {
        return 0;
    }
    bool prime = true;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        return 1;
    }
    return 0;
}
