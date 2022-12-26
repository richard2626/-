#include <stdio.h>

int main()
{
    int score;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    char con;
    printf("Score: ");
    while (scanf(" %d", &score))
    {
        if (score < 40 && score >= 0)
            a++;
        else if (score < 60 && score >= 0)
            b++;
        else if (score < 80 && score >= 0)
            c++;
        else if (score <= 100 && score >= 0)
            d++;
        printf("continue(y/n)? ");
        scanf(" %c", &con);
        if (con == 'n')
        {
            break;
        }
        printf("Score: ");
    }
    printf("\n");
    printf("G-A: ");
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    printf("%d\n", a);
    printf("G-B: ");
    for (int i = 0; i < b; i++)
    {
        printf("*");
    }
    printf("%d\n", b);
    printf("G-C: ");
    for (int i = 0; i < c; i++)
    {
        printf("*");
    }
    printf("%d\n", c);
    printf("G-D: ");
    for (int i = 0; i < d; i++)
    {
        printf("*");
    }
    printf("%d", d);
}