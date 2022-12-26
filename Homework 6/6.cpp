#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int card;
    srand(12345);
    char a;

    do
    {
        num = (int)(rand() / (RAND_MAX + 1.0) * 13.0 + 1);
        card = (int)(rand() / (RAND_MAX + 1.0) * 4.0 + 1);
        switch (num)
        {
        case 1:
            printf("ace");
            break;
        case 11:
            printf("jack");
            break;
        case 12:
            printf("queen");
            break;
        case 13:
            printf("king");
            break;
        default:
            printf("%d", num);
        }
        printf(" of ");

        switch (card)
        {
        case 1:
            printf("Clubs"); // clubs, diamond, hearts, spades
            break;
        case 2:
            printf("Diamond");
            break;
        case 3:
            printf("Hearts");
            break;
        case 4:
            printf("Spades");
            break;
        }
        //        printf("\n");
    } while (scanf("%c", &a) != EOF);
}