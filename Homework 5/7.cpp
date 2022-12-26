#include <stdio.h>

int main()
{
    int op;
    printf("Please select option (1~4)=> ");
    scanf("%d", &op);
    if (op == 4)
    {
        printf("See you!!!\n");
    }
    else
    {
        printf("Input number: ");
        int num;
        long long ans;
        bool a;

        while (scanf("%d", &num))
        {
            switch (op)
            {
            case 1:
                ans = 1;
                for (int i = 1; i <= num; i++)
                {
                    ans *= i;
                }
                printf("%d! = %lld\n\n", num, ans);

                break;
            case 2:
                a = 1;
                for (int i = 2; i < num; i++)
                {
                    if ((num % i) == 0)
                    {
                        printf("%d: Not a prime number.\n\n", num);
                        a = false;
                        break;
                    }
                }
                if (a)
                {
                    printf("%d Prime number.\n\n", num);
                }
                break;
            case 3:
                num % 2 ? printf("%d: Odd number.\n\n", num) : printf("%d: Even number.\n\n", num);
                break;
            }
            printf("Input number: ");
        }
    }
}
