#include <stdio.h>

int main()
{
	long id;
	printf("Input student ID: ");
	scanf("%ld", &id);
	id = id % 1000 + id / 1000 % 1000 + id / 1000000;
	id = id % 10 * 1000 + id / 10 % 10 * 100 + id / 100 % 10 * 10 + id / 1000;

	id = id / 1000 * 16 * 16 * 16 * 16 * 16 * 16 + id / 100 % 10 * 16 * 16 * 16 * 16 + id / 10 % 10 * 16 * 16 + id % 10;
	id = id % 10 + id / 10 % 10 + id / 100 % 10 + id / 1000 % 10 + id / 10000 % 10 + id / 100000 % 10 + id / 1000000 % 10 + id / 10000000 % 10 + id / 100000000 % 10;
	printf("Group number: %d\n", (int)(id % 10 + 1));
}