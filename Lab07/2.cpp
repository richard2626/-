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
	switch (m)
	{
	case 1:
		return 31 * 86400;
	case 2:
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		{
			return 29 * 86400;
		}
		return 28 * 86400;
	case 3:
		return 31 * 86400;
	case 4:
		return 30 * 86400;
	case 5:
		return 31 * 86400;
	case 6:
		return 30 * 86400;
	case 7:
		return 31 * 86400;
	case 8:
		return 31 * 86400;
	case 9:
		return 30 * 86400;
	case 10:
		return 31 * 86400;
	case 11:
		return 30 * 86400;
	case 12:
		return 31 * 86400;
	}
}
void print_unix(unsigned int s)
{
	int y = 1970, m = 1;
	while (s > sec_in_month(y, m))
	{
		s -= sec_in_month(y, m);
		if (m == 12)
			m = 1, y++;
		else
			m++;
	}
	int d = 1;
	d += int(s / 86400);
	s %= 86400;
	int h = 0;
	h += int(s / 3600);
	s %= 3600;
	int min = 0;
	min += int(s / 60);
	s %= 60;
	printf("%d / %02d / %02d  %02d : %02d : %02d\n", y, m, d, h, min, s);
}
