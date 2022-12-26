#include <stdio.h>
bool ATM(int, int *, int *, int *);
int main()
{
    int dollars, n50, n20, n10;
    printf("Input amount: ");
    while (scanf("%d", &dollars))
    {
        if (ATM(dollars, &n50, &n20, &n10))
        {

            printf("50s: %d\n", n50);
            printf("20s: %d\n", n20);
            printf("10s: %d\n", n10);
        }
        else
        {
            printf("Illegal input!!\n");
        }
        printf("\nInput amount: ");
    }
}
bool ATM(int dollars, int *n50, int *n20, int *n10)
{
    if (dollars % 10 != 0||dollars<0)
    {
        return 0;
    }
    *n50 = dollars / 50;
    dollars %= 50;
    *n20 = dollars / 20;
    dollars %= 20;
    *n10 = dollars / 10;
    return 1;
}