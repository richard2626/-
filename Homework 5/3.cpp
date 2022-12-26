#include <stdio.h>

int main()
{
    int input;
    int ans;
    printf("Please input binary number: ");
    while (scanf(" %d", &input)!=EOF)
    {
        ans = 0;
        int mul = 1;
        while (input)
        {
            ans += mul * (input % 10);
            input /= 10;
            mul *= 2;
        }
        printf("Decimal: %d\n\n", ans);
        printf("Please input binary number: ");
    }
}