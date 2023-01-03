#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int seed1, n;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	double sum;
	int toss;
	printf("seed n: ");
	while (scanf("%d %d", &seed1, &n) != EOF)
	{
		srand(seed1);
		sum = 0;
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
		f = 0;
		for (int i = 0; i < n; i++)
		{
			switch (rand() % 6 + 1)
			{
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			case 4:
				d++;
				break;
			case 5:
				e++;
				break;
			case 6:
				f++;
				break;
			}
		}
		sum += (long double)a / n * log((long double)a / n / (1.0 / 6));
		sum += (long double)b / n * log((long double)b / n / (1.0 / 6));
		sum += (long double)c / n * log((long double)c / n / (1.0 / 6));
		sum += (long double)d / n * log((long double)d / n / (1.0 / 6));
		sum += (long double)e / n * log((long double)e / n / (1.0 / 6));
		sum += (long double)f / n * log((long double)f / n / (1.0 / 6));
		printf("D_KL(a || theory) = %.10lf\n", sum);

		sum = 0;
		double a = 0;
		double b = 0;
		double c = 0;
		double d = 0;
		double e = 0;
		double f = 0;
		srand(seed1);
		for (int i = 0; i < n; i++)
		{
			switch (int((rand() / (RAND_MAX + 1.0) * 6.0 + 1)))
			{
			case 1:
				a++;
				break;
			case 2:
				b++;
				break;
			case 3:
				c++;
				break;
			case 4:
				d++;
				break;
			case 5:
				e++;
				break;
			case 6:
				f++;
				break;
			}
		}
		sum += a / n * log(a / n * 6);
		sum += b / n * log(b / n * 6);
		sum += c / n * log(c / n * 6);
		sum += d / n * log(d / n * 6);
		sum += e / n * log(e / n * 6);
		sum += f / n * log(f / n * 6);
		// sum = a*log(a/(1/6.))+b*log(b/(1/6.))+c*log(c/(1/6.))+d*log(d/(1/6.))+e*log(e/(1/6.))+f*log(f/(1/6.));

		printf("D_KL(b || theory) = %.10lf\n", sum);
		printf("seed n: ");
	}
}