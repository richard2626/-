#include <stdio.h>
#include <ctype.h>

int IsPrime(int);
int main()
{
    int n;
    printf("Input a number: ");
    while (scanf("%d", &n) != EOF)
    {
        printf("There are %d factors.\n", IsPrime(n));
        if (n == 1)
        {
            printf("1 is not prime\n\n");
        }
        else if (IsPrime(n) == 2)
        {
            printf("%d is prime\n\n", n);
        }
        else
            printf("%d is not prime\n\n", n);

        printf("Input a number: ");
    }
}

int IsPrime(int a)
{
    int fac = 2;
    if (a == 1)
    {
        return 1;
    }

    bool prime = true;
    if (a == 2)
    {
        return 2;
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            fac++;
            prime = false;
        }
    }

    return fac;
}
