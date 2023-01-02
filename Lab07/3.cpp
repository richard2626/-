#include <stdio.h>

bool isBaseB(long long, int);
long long B2dec(long long, int);

int main()
{
	long long n;
	int base;
	printf("Input num and base : ");
	while (scanf("%lld %d", &n, &base))
	{
		if (isBaseB(n, base))
		{
			B2dec(n, base);
		}
		else
		{
			printf("%lld is not %d based\n\n", n, base);
		}
		printf("Input num and base : ");
	}
}
long long B2dec(long long n, int base)
{
	long long ans = 0;
	long long mul = 1;
	long long temp = n;
	while (n)
	{
		ans += n % 10 * mul;
		mul *= base;
		n /= 10;
	}
	printf("( %lld )_%d = ( %lld )_10\n\n", temp, base, ans);
}
bool isBaseB(long long n, int base)
{
	while (n)
	{
		if (n % 10 >= base)
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}
