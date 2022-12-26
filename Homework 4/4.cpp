#include <stdio.h>

int main()
{
    int input;
    long temp;
    long rev;
    long count;
    printf("Input: ");
    while (scanf("%d", &input))
    {
        rev = 0;
        count = 1;
        temp = input;
        while (temp)
        {
            count *= 10;
            temp /= 10;
        }
        count /= 10;
        while (input)
        {
            rev += input % 10 * count;
            count /= 10;
            input /= 10;
        }
        while (rev)
        {
            printf("%ld", rev % 10);
            rev /= 10;
            rev != 0 ? printf(",") : 0;
        }
        printf("\n");
        printf("Input: ");
    }
}