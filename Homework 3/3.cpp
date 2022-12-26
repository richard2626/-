#include <stdio.h>

int main()
{
    int scan;
    printf("Input NUM = ");
    scanf("%d", &scan);
    int sum = 0;
    for (int i = 1; i <= 8; i++, scan /= 10)
        sum += (i % 2 ? (1) : (2)) * (scan % 10);
    printf("ANS: %d\n", 9 - (sum - 1) % 10);
}

// 1 + 3 +  5 + 7 = 16
// 2 + 4 + 6 +  8 = 20
// 32 + 20 = 52
// 52 - 1 = 51
// 9 - 1 = 8