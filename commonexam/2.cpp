#include <stdio.h>
#include <string>
#include <ctype.h>
#include <math.h>

void atoi(char *);
int main()
{
	char *s = new char[100];
	scanf("%s", s);
	atoi(s);
}
// 0123456789
void atoi(char *s)
{
	int i;
	int mul;
	bool neg = false;
	int ans = 0;
	if (s[0] == '-')
	{
		i = 1;
		mul = pow(10, strlen(s) - 2);
		neg = true;
	}
	else
	{
		i = 0;
		mul = pow(10, strlen(s) - 1);
	}
	int mul2 = mul;
	bool wrong = false;
	for (; i < strlen(s); i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			printf("Error");
			wrong = true;
			break;
		}
		else
		{
			ans += int(s[i] - 48) * mul;
		}
		mul /= 10;
	}
	if (!wrong)
	{
		if (neg)
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
		int ans;
		for (; i < strlen(s); i++)
		{
			if (int(s[i] - 48) != 0)
			{
				ans = mul2 * int(s[i] - 48);
				if (neg)
					ans = -ans;
				if (i != neg)
					printf(", ");
				printf("%d", ans);
			}
			mul2 /= 10;
		}
	}
}