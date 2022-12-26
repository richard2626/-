#include <stdio.h>

int gcd(int, int);
void cal(int, int, int, int, char);
void print(int, int);

int main()
{
	int a, b, c, d;
	char op;
	printf("Input (a/b) op (c/d) : ");
	while (scanf("%d %d %c %d %d", &a, &b, &op, &c, &d))
	{
		cal(a, b, c, d, op);
		printf("\n\n");
		printf("Input (a/b) op (c/d) : ");
	}
}
void cal(int a, int b, int c, int d, char op)
{
	int no, de, g;

	if (op == '+' || op == '/' || op == '*' || op == '-')
	{
		print(a / gcd(a, b), b / gcd(a, b));
		printf(" %c ", op);
		print(c / gcd(c, d), d / gcd(c, d));
		printf(" = ");
		switch (op)
		{
		case '+':
			de = b * d;
			no = a * d + b * c;
			g = gcd(de, no);
			print(no / g, de / g);
			break;
		case '-':
			de = b * d;
			no = a * d - b * c;
			g = gcd(de, no);
			print(no / g, de / g);
			break;
		case '/':
			no = a * d;
			de = b * c;
			g = gcd(de, no);
			print(no / g, de / g);
			break;
		case '*':
			no = a * c;
			de = b * d;
			g = gcd(de, no);
			print(no / g, de / g);
			break;
		}
	}
	else
	{
		printf("Wrong operator!");
	}
}
void print(int n, int d)
{
	if (n < 0 && d < 0)
	{
		n = -n;
		d = -d;
	}
	if (d < 0 && n > 0)
	{
		d = -d;
		n = -n;
	}
	printf("( %d / %d )", n, d);
}
int gcd(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return (a == 0 ? b : a);
	}
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	while (a != b)
	{
		while (a > b)
		{
			a -= b;
		}
		while (a < b)
		{
			b -= a;
		}
	}
	return a;
}