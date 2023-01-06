#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void sort(int *, int);
int main()
{
	char *s = new char[100];
	int *num = new int[100];
	scanf("%s", s);
	int a;
	int i = 0;
	char *take = strtok(s, ", ");
	while (take != NULL)
	{
		a = atoi(take);
		take = strtok(NULL, ", ");
		num[i] = a;
		i++;
	}
	sort(num, i);
	int x = i / 5;
	if (x == 0)
	{
		printf("%d", 0);
	}
	else
	{
		double sig = 0;
		for (int i = 0; i < x; i++)
		{
			sig += num[i];
		}
		double avg = sig / x;
		double sum = 0;
		for (int i = 0; i < x; i++)
		{

			sum += (num[i] - avg) * (num[i] - avg);
		}
		double dev = sqrt(sum / x);
		printf("%lf", dev);
	}
}
void sort(int *x, int n)
{
	int s;
	int t;
	for (int i = 0; i < n; i++)
	{
		s = i;
		for (int j = i + 1; j < n; j++)
		{
			if (x[s] <= x[j])
			{
				s = j;
			}
		}
		t = x[i];
		x[i] = x[s];
		x[s] = t;
	}
}
