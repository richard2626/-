#include <stdio.h>

int main()
{
    int a;
    char op;
    int b;
    bool go = 1;
    ;
    printf("Please input integer, the operator and integer:");
    scanf("%d%c%d", &a, &op, &b);
    while (go)
    {
        switch (op)
        {
        case '+':
            printf("\nAnswer: %d %c %d = %d\n", a, op, b, a + b);
            break;
        case '-':
            printf("\nAnswer: %d %c %d = %d\n", a, op, b, a - b);
            break;
        case '*':
            printf("\nAnswer: %d %c %d = %d\n", a, op, b, a * b);
            break;
        case '/':
            if (b == 0)
            {
                printf("\nThe denominator cannot be zero.\n");
            }
            else
                printf("\nAnswer: %d %c %d = %d\n", a, op, b, a / b);
            break;
        default:
            printf("\nError: incorrect operator!!!\n");
        }

        printf("Continue or not: ");
        scanf(" %c", &op);
        if (op == 'y')
        {
            printf("\nPlease input integer, the operator and integer:");
            scanf("%d%c%d", &a, &op, &b);
        }
        else
            break;
    }
}