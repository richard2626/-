#include <stdio.h>
#include <math.h>

int main()
{
	int f;
	double n;
	double *y;
	int *Y;
	while (scanf("%d %lf", &f, &n) != EOF)
	{
		y = new double[500];
		Y = new int[500];
		for (int i = 0; i < n; i++)
		{
			y[i] = cos(2 * M_PI * f * i / n);
		}
		for (int k = 0; k < n; k++)
		{
			double co = 0;
			double si = 0;
			for (int j = 0; j < n; j++)
			{
				co += y[j] * cos(2 * M_PI * k * j / n);
				si += y[j] * sin(2 * M_PI * k * j / n);
			}
			Y[k] = sqrt(co * co + si * si);
		}
		for (int k = 0; k < n; k++)
		{
			printf("%d ", int(Y[k]));
		}
		printf("\n");
		delete[] y;
		delete[] Y;
	}
}