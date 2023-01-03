#include <stdio.h>

int main()
{
	printf("Input: ");
	long long m;
	long long a, b;
	bool prime = true;
	bool prime2 = true;
	while (scanf("%lld", &m) != EOF) // 有遍//好看欸
	{
		a = 0;
		b = 0;
		for (long long i = m - 4; i >= 2; i--)
		{
			prime = true;
			prime2 = true;
			for (long long j = 2; (j * j) <= (long long)(i + 4); j++)
			{
				if (i % j == 0)
				{
					prime = false;
					break;
				}
				if ((i + 4) % j == 0)
				{
					prime2 = false;
					break;
				}
			}
			if (prime && prime2 && ((i + i + 4) % 11 == 0))
			{
				a = i;
				b = i + 4;
				break;
			}
		}
		printf("Ans = %lld\n", a + b);
		printf("Input: ");
	}
}