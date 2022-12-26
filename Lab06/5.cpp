#include <stdio.h>
#include <stdlib.h>

int main()
{
	int seed;
	printf("seed=");
	while (scanf("%d", &seed) != EOF)
	{

		srand(seed);
		int add3 = 0;
		int add4 = 0;
		int add5 = 0;
		int add6 = 0;
		int add7 = 0;
		int add8 = 0;
		int add9 = 0;
		int add10 = 0;
		int add11 = 0;
		int add12 = 0;
		for (int i = 0; i < 10000000; i++)
		{
			// int toss = (rand() % 6 + 1 + rand() % 6 + 1);
			int toss = (int)((rand() / (RAND_MAX + 1.0)) * 4.0 + 1) + (int)((rand() / (RAND_MAX + 1.0)) * 4.0 + 1) + (int)((rand() / (RAND_MAX + 1.0)) * 4.0 + 1);
			// printf("%d ", toss);
			switch (toss)
			{
			case 3:
				add3++;
				break;
			case 4:
				add4++;
				break;
			case 5:
				add5++;
				break;
			case 6:
				add6++;
				break;
			case 7:
				add7++;
				break;
			case 8:
				add8++;
				break;
			case 9:
				add9++;
				break;
			case 10:
				add10++;
				break;
			case 11:
				add11++;
				break;
			case 12:
				add12++;
				break;
			}
		}
		int a, b;
		int max = 0;
		int min = 10000000;
		if (max < add3)
		{
			max = add3;
			a = 3;
		}
		if (max < add4)
		{
			max = add4;
			a = 4;
		}
		if (max < add5)
		{
			max = add5;
			a = 5;
		}
		if (max < add6)
		{
			max = add6;
			a = 6;
		}
		if (max < add7)
		{
			max = add7;
			a = 7;
		}
		if (max < add8)
		{
			max = add8;
			a = 8;
		}
		if (max < add9)
		{
			max = add9;
			a = 9;
		}
		if (max < add10)
		{
			max = add10;
			a = 10;
		}
		if (max < add11)
		{
			max = add11;
			a = 11;
		}
		if (max < add12)
		{
			max = add12;
			a = 12;
		}

		if (min > add3)
		{
			min = add3;
			b = 3;
		}
		if (min > add4)
		{
			min = add4;
			b = 4;
		}
		if (min > add5)
		{
			min = add5;
			b = 5;
		}
		if (min > add6)
		{
			min = add6;
			b = 6;
		}
		if (min > add7)
		{
			min = add7;
			b = 7;
		}
		if (min > add8)
		{
			min = add8;
			b = 8;
		}
		if (min > add9)
		{
			min = add9;
			b = 9;
		}
		if (min > add10)
		{
			min = add10;
			b = 10;
		}
		if (min > add11)
		{
			min = add11;
			b = 11;
		}
		if (min > add12)
		{
			min = add12;
			b = 12;
		}
		printf("Max:  %d  %.8lf\n", a, max / 10000000.);
		printf("Min:  %d  %.8lf\n", b, min / 10000000.);
		printf("seed=");
	}
}
