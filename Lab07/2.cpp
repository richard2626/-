#include <stdio.h>
unsigned int sec_in_month(int, int);
void print_unix(unsigned int);

int main()
{
	unsigned int t;
	printf("Input unix timestamp: ");

	while (scanf("%u", &t) != EOF)
	{
		print_unix(t);
		printf("\n");
		printf("Input unix timestamp: ");
	}
}
unsigned int sec_in_month(int y, int m)
{
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		return 31 * 86400;
	}
	if (m == 2)
	{
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		{
			return 29 * 86400;
		}
		return 28 * 86400;
	}
	else
	{
		return 30 * 86400;
	}
}
void print_unix(unsigned int s)
{
	int y = 1970, m = 1, d = 1, h = 0, min = 0;
	;
	while (s > sec_in_month(y, m))
	{
		s -= sec_in_month(y, m);
		if (m == 12)
			m = 1, y++;
		else
			m++;
	}
	d += int(s / 86400);
	s %= 86400;
	h += int(s / 3600);
	s %= 3600;
	min += int(s / 60);
	s %= 60;
	printf("%d / %02d / %02d  %02d : %02d : %02d\n", y, m, d, h, min, s);
}
