#include <stdio.h>

int main()
{
	int n;
	double **mat;
	double **mat2;

	for (int j = 0; j < 10; j++)
	{
		scanf("%d", &n);
		double a;
		double b;
		mat = new double *[2];
		mat[0] = new double[2];
		mat[1] = new double[2];
		mat2 = new double *[2];
		mat2[0] = new double[2];
		mat2[1] = new double[2];
		for (int q = 0; q > 2; q++)
		{
			for (int w = 0; w < 2; w++)
			{
				mat[q][w] = 0;
				mat2[q][w] = 0;
			}
		}
		double *mul = new double[2];
		for (int i = 0; i < n; i++)
		{
			scanf("%lf %lf", &a, &b);
			mat[0][1] += a;
			mat[1][0] += a;
			mat[0][0] += a * a;
			mul[0] += a * b;
			mul[1] += b;
		}
		mat[1][1] = n;
		double del = double(1) / (mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1]);
		mat2[0][0] = mat[1][1] * del;
		mat2[1][0] = -mat[1][0] * del;
		mat2[0][1] = -mat[0][1] * del;
		mat2[1][1] = mat[0][0] * del;
		double m = mat2[0][0] * mul[0] + mat2[0][1] * mul[1];
		double v = mat2[1][0] * mul[0] + mat2[1][1] * mul[1];
		printf("%.2lf %.2lf\n", m, v);
		for (int q = 0; q < 2; q++)
		{
			delete[] mat[q];
			delete[] mat2[q];
		}
		delete[] mat;
		delete[] mat2;
	}
}