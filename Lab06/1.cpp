#include <stdio.h>
#include <stdlib.h>

int main()
{
	int seed;
	printf("seed = ");
	int toss;

	while (scanf("%d", &seed) != EOF)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int d = 0;
		int e = 0;
		int f = 0;
		int g = 0;
		int h = 0;
		int i = 0;
		srand(seed);

		for (int k = 0; k < 1000000; k++)
		{
			toss = 0;
			for (int j = 0; j < 8; j++)
			{
				if ((int)(rand() / (RAND_MAX + 1.0) * 2.0) == 0)
				{
					toss++;
				}
				else
					toss--;
			}
			switch (toss)
			{
			case -8:
				a++;
				break;
			case -6:
				b++;
				break;
			case -4:
				c++;
				break;
			case -2:
				d++;
				break;
			case 0:
				e++;
				break;
			case 2:
				f++;
				break;
			case 4:
				g++;
				break;
			case 6:
				h++;
				break;
			case 8:
				i++;
				break;
			}
		}
		printf("-8: %.6lf ", a / 1000000.);
		for (int l = 0; l <= (int)(a / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf("-6: %.6lf ", b / 1000000.);
		for (int l = 0; l <= (int)(b / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf("-4: %.6lf ", c / 1000000.);
		for (int l = 0; l <= (int)(c / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf("-2: %.6lf ", d / 1000000.);
		for (int l = 0; l <= (int)(d / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf(" 0: %.6lf ", e / 1000000.);
		for (int l = 0; l <= (int)(e / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf(" 2: %.6lf ", f / 1000000.);
		for (int l = 0; l <= (int)(f / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf(" 4: %.6lf ", g / 1000000.);
		for (int l = 0; l <= (int)(g / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf(" 6: %.6lf ", h / 1000000.);
		for (int l = 0; l <= (int)(h / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");
		printf(" 8: %.6lf ", i / 1000000.);
		for (int l = 0; l <= (int)(i / 10000.); l++)
		{
			printf("*");
		}
		printf("\n");

		for (int i = 0; i < 20; i++)
		{
			printf("%.3lf", (int)(rand() / (RAND_MAX + 1.0) * 5001) / 1000.);
			if (i == 9 || i == 19)
				printf("\n");
			else
				printf(" ");
		}
		printf("seed = ");
	}
}