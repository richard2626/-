#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char *s = new char[100];
	scanf("%s", s);
	int ans = 0;
	int add = 1;
	int a = 0;
	int inum = 1;
	int num[10] = {0};
	int mul;
	for (int i = 0; i < strlen(s); i = i)
	{
		if (s[i] == '-')
		{
			add = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			add = 1;
			i++;
		}
		int count = 0;
		while (s[i] >= 48 && s[i] <= 57)
		{
			num[count] = int(s[i] - 48);
			count++;
			i++;
		}
		a = 0;
		mul = pow(10, count - 1);
		for (int j = 0; j < count; j++)
		{
			a += mul * num[j];
			mul /= 10;
		}
		ans += add * a;
		add = 1;
	}
	printf("%d", ans);
}