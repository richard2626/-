#include <stdio.h>
#include <string.h>
using namespace std;

void printmat(int x, int y);
int main()
{
	int x = 7;
	int y = 12;
	char *name = new char[100];
	FILE *fp;
	scanf("%s", name);
	strcat(name, ".txt");
	fp = fopen(name, "r");
	int a, b, c, d;
	// scanf("%d %d %d %d",&a,&b,&c,&d);
	fscanf(fp, "%d %d %d %d", &a, &b, &c, &d);
	printf("Initial:\n");
	printmat(7, 12);
	printf("After move:\n");
	x -= a;
	y -= c;
	x += b;
	y += d;
	if (y > 21)
		y = 21;
	if (y < 3)
		y = 3;
	if (x < 1)
		x = 1;
	if (x > 11)
		x = 11;
	printmat(x, y);
}
void printmat(int x, int y)
{
	char **ans = new char *[15];
	for (int i = 0; i < 15; i++)
	{
		ans[i] = new char[25]();
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 25; j++)
			ans[i][j] = ' ';
	}
	for (int i = 0; i < 25; i++)
	{
		ans[0][i] = '=';
		ans[14][i] = '=';
	}
	for (int i = 1; i < 14; i++)
	{
		ans[i][0] = '=';
		ans[i][24] = '=';
	}
	for (int i = y - 2; i < y + 3; i++)
	{
		ans[x][i] = '*';
	}
	for (int i = x + 1; i < x + 3; i++)
	{
		ans[i][y] = '*';
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			printf("%c", ans[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 15; i++)
	{
		delete[] ans[i];
	}
	delete[] ans;
}