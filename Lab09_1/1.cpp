#include <stdio.h>
#include <math.h>

long long dec2bin(long long);
long long bin2gray(long long);
long long gray2bin(long long);
int main()
{
    long long n;
    printf("Input n: ");
    while (scanf("%lld", &n) != EOF)
    {
        printf("dec2bin(%lld)                     = %lld\n", n, dec2bin(n));
        printf("bin2gray(dec2bin(%lld))           = %lld\n", n, bin2gray(dec2bin(n)));
        printf("gray2bin(bin2gray(dec2bin(%lld))) = %lld\n\n", n, n == 0 ? 0 : gray2bin(bin2gray(dec2bin(n))));
        printf("Input n: ");
    }
}
long long dec2bin(long long n)
{
    if (n == 0 || n == 1)
        return n;
    return (n % 2) + 10 * dec2bin(n / 2);
}
long long bin2gray(long long n)
{
    int a = n % 10;
    int b = n / 10 % 10;
    if (n == 0)
        return 0;
    return a ^ b + 10 * bin2gray(n / 10);
}
long long gray2bin(long long n)
{
    int yn = n % 2;
    if (n == 0 || n == 1)
    {
        return n;
    }
    return gray2bin(n / 10) * 10 + (gray2bin(n / 10) % 2) ^ yn;
}